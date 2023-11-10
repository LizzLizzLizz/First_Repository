#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Mahasiswa {
    int pk;
    string NIM;
    string nama;
    string jurusan;
};

void addDataMahasiswa(Mahasiswa*& data, int& size);
void displayDataMahasiswa(Mahasiswa* data, int size);

int main() {
    Mahasiswa* data = nullptr;
    int size = 0;
    int pilihan;

    while (true) {
        cout << "\nProgram CRUD data mahasiswa" << endl;
        cout << "1. Tambah data mahasiswa" << endl;
        cout << "2. Tampilkan data mahasiswa" << endl;
        cout << "3. Selesai" << endl;
        cout << "Pilih [1-3]: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                system("cls");
                addDataMahasiswa(data, size);
                break;
            case 2:
                system("cls");
                displayDataMahasiswa(data, size);
                break;
            case 3:
                delete[] data; 
                return 0;
            default:
                cout << "Pilihan tidak ditemukan." << endl;
        }
    }

    return 0;
}

void addDataMahasiswa(Mahasiswa*& data, int& size) {
    Mahasiswa newMahasiswa;
    newMahasiswa.pk = size + 1;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Nama: ";
    getline(cin, newMahasiswa.nama);
    cout << "Jurusan: ";
    getline(cin, newMahasiswa.jurusan);
    cout << "NIM: ";
    getline(cin, newMahasiswa.NIM);

    // mengubah ukuran array dan menambahkan data mahasiswa baru
    Mahasiswa* temp = new Mahasiswa[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = data[i];
    }
    temp[size] = newMahasiswa;
    delete[] data; // menghapus array lama
    data = temp; // memindahkan array baru ke variabel data
    size++;
}

void displayDataMahasiswa(Mahasiswa* data, int size) {
    if (size == 0) {
        cout << "Data mahasiswa kosong." << endl;
        return;
    }

    cout << "no.\tpk.\tNIM.\tNama.\tJurusan" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "\t";
        cout << data[i].pk << "\t";
        cout << data[i].NIM << "\t";
        cout << data[i].nama << "\t";
        cout << data[i].jurusan << endl;
    }
}
