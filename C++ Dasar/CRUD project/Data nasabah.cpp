#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

struct nasabah{
    int no_rekening;
    string nama;
    string alamat;
    string no_hp;
};

nasabah readdata(fstream &data, int posisi){
    nasabah read_nasabah;
    data.seekg((posisi - 1) * sizeof(nasabah), ios::beg);
    data.read(reinterpret_cast<char*>(&read_nasabah), sizeof(nasabah));
    return read_nasabah;
}

int getoption();
int getdatasize(fstream &data);
void writedata(fstream &data, int posisi, nasabah &input_nasabah);
void adddata(fstream &data);
void checkdata(fstream &data);
void displaydata(fstream &data);

int main(){

    fstream data;
    checkdata(data);

    int pilihan = getoption();
    char is_continue;
    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};
    
    while(pilihan != FINISH){
        switch(pilihan){
            case CREATE:
                cout << "Menambah Data Nasabah" << endl;
                adddata(data);
                break;
            case READ:
                cout << "Tampilkan Data Nasabah" << endl;
                displaydata(data);
                break;
            case UPDATE:
                cout << "Ubah Data Nasabah" << endl;
                break;
            case DELETE:
                cout << "Hapus Data Nasabah" << endl;
                break;
            default:
                cout << "Pilihan tidak ditemukan" << endl;
                break;
        }
        label_continue:
        cout << "Lanjutkan?(y/n) : ";
        cin >> is_continue;
        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getoption();
        }else if((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else{
            goto label_continue;
        }
    }
}

int getoption(){
    int input;
    system("cls");
    cout << "Selamat Datang di Database Bank Gacor" << endl;
    cout << "=======================================" << endl;
    cout << "1. Tambah Data Nasabah" << endl;
    cout << "2. Tampilkan Data Nasabah" << endl;
    cout << "3. Ubah Data Nasabah" << endl;
    cout << "4. Hapus Data Nasabah" << endl;
    cout << "0. Keluar" << endl;
    cout << "=======================================" << endl;
    cout << "Masukkan Pilihan Anda ( 1-4 ): ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return input;
}

void checkdata(fstream &data){
    data.open("Data.bin", ios::out | ios::in | ios::app);

    if(data.is_open()){
    }else{
        data.close();
        data.open("Data.bin", ios::trunc | ios::out | ios::in | ios::app);
    }
}

void adddata(fstream &data){

    nasabah input_nasabah, last_nasabah;

    int size = getdatasize(data);
    
    if (size == 0){
        input_nasabah.no_rekening = 3330001;
    }else{
        last_nasabah = readdata(data, size);
        cout << "No Rekening : " << last_nasabah.no_rekening << endl;
        input_nasabah.no_rekening = last_nasabah.no_rekening + 1;
    }

    readdata(data, size);

    input_nasabah.no_rekening = 3330001;
    cout << "Masukkan Nama Nasabah : ";
    getline(cin, input_nasabah.nama);
    cout << "Masukkan Alamat Nasabah : ";
    getline(cin, input_nasabah.alamat);
    cout << "Masukkan Nomor HP Nasabah : ";
    getline(cin, input_nasabah.no_hp);

    writedata(data, size + 1, input_nasabah);
}

void writedata(fstream &data, int posisi, nasabah &input_nasabah){
    data.seekp((posisi - 1) * sizeof(nasabah), ios::beg);
    data.write(reinterpret_cast<char*>(&input_nasabah), sizeof(nasabah));
}

int getdatasize(fstream &data) {
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end - start);
}

void displaydata(fstream &data){
    int size = getdatasize(data);
    nasabah show_nasabah;
    cout << "No Rekening\tNama\tAlamat\tNo HP" << endl;
    for(int i = 1; i <= size; i++){
        show_nasabah = readdata(data, i);
        cout << show_nasabah.no_rekening << "\t" ;
        cout << show_nasabah.nama << "\t" ;
        cout << show_nasabah.alamat << "\t" ;
        cout << show_nasabah.no_hp << endl;
    }
}