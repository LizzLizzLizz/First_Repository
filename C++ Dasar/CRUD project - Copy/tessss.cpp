#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

struct Mahasiswa {
    int pk;
    string NIM;
    string nama;
    string jurusan;
};

int getOption();
void checkDatabase(fstream &data, bool forRead);
void writeData(fstream &data, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int posisi);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);

int main() {
    fstream dataRead; // Separate file stream for reading
    fstream dataWrite; // Separate file stream for writing

    checkDatabase(dataRead, true); // Open for reading
    checkDatabase(dataWrite, false); // Open for writing

    int pilihan = getOption();
    char is_continue;

    enum option { CREATE = 1, READ, UPDATE, DELETE, FINISH };

    while (pilihan != FINISH) {

        switch (pilihan) {
            case CREATE:
                cout << "Menambah data mahasiswa" << endl;
                addDataMahasiswa(dataWrite); // Use the writing stream
                break;
            case READ:
                cout << "Tampilkan data mahasiswa" << endl;
                displayDataMahasiswa(dataRead); // Use the reading stream
                break;
            case UPDATE:
                cout << "Ubah data mahasiswa" << endl;
                break;
            case DELETE:
                cout << "Hapus data mahasiswa" << endl;
                break;
            default:
                cout << "Pilihan tidak ditemukan" << endl;
                break;
        }

        label_continue:

        cout << "Lanjutkan?(y/n) : ";
        cin >> is_continue;
        if ((is_continue == 'y') || (is_continue == 'Y')) {
            pilihan = getOption();
        } else if ((is_continue == 'n') || (is_continue == 'N')) {
            break;
        } else {
            goto label_continue;
        }
    }

    cout << "akhir dari program" << endl;

    cin.get();
    return 0;
}

void checkDatabase(fstream &data, bool forRead) {
    if (forRead) {
        data.open("data.txt", ios::in); // Open for reading
    } else {
        data.open("data.txt", ios::out | ios::app); // Open for writing
    }

    // Check if the file exists
    if (data.is_open()) {
        cout << "database ditemukan" << endl;
    } else {
        cout << "database tidak ditemukan, buat database baru" << endl;
        data.close();
        data.open("data.txt", ios::out); // Open for writing
    }
}

int getOption() {
    int input;
    system("cls");
    cout << "\nProgram CRUD data mahasiswa" << endl;
    cout << "=============================" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=============================" << endl;
    cout << "pilih [1-5]? : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}

void writeData(fstream &data, Mahasiswa &inputMahasiswa) {
    data << inputMahasiswa.pk << "\t";
    data << inputMahasiswa.NIM << "\t";
    data << inputMahasiswa.nama << "\t";
    data << inputMahasiswa.jurusan << "\n"; // Add a new line to separate records
}

#include <sstream> // Add this header for istringstream

Mahasiswa readData(fstream &data, int posisi) {
    Mahasiswa readMahasiswa;
    string line;
    
    for (int i = 1; i < posisi; i++) {
        getline(data, line); // Read lines
    }
    
    istringstream iss(line);
    iss >> readMahasiswa.pk;
    getline(iss, readMahasiswa.NIM, '\t'); // Read the NIM until a tab character
    getline(iss, readMahasiswa.nama, '\t'); // Read the name until a tab character
    getline(iss, readMahasiswa.jurusan); // Read the rest of the line for the jurusan
    
    return readMahasiswa;
}


void addDataMahasiswa(fstream &data) {

    Mahasiswa inputMahasiswa;

    int size = getDataSize(data);

    if (size == 0) {
        inputMahasiswa.pk = 1;
    } else {
        Mahasiswa lastMahasiswa = readData(data, size);
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    cout << "Nama: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, inputMahasiswa.nama);
    cout << "Jurusan: ";
    getline(cin, inputMahasiswa.jurusan);
    cout << "NIM: ";
    getline(cin, inputMahasiswa.NIM);

    writeData(data, inputMahasiswa);
}

void displayDataMahasiswa(fstream &data) {
    int size = getDataSize(data);
    Mahasiswa showMahasiswa;
    cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << endl;
    for (int i = 1; i <= size; i++) {
        showMahasiswa = readData(data, i);
        cout << i << "\t";
        cout << showMahasiswa.pk << "\t";
        cout << showMahasiswa.NIM << "\t";
        cout << showMahasiswa.nama << "\t";
        cout << showMahasiswa.jurusan << endl;
    }
}

int getDataSize(fstream &data) {
    int count = 0;
    string line;
    while (getline(data, line)) {
        count++;
    }
    data.clear(); // Clear error flags.
    data.seekg(0, ios::beg); // Reset file pointer to the beginning.
    return count;
}
