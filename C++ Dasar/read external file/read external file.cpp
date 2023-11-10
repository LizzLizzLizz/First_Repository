#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("datapasien.txt"); // Membuka file datapasien.txt

    if (!file.is_open()) {
        cout << "Gagal membuka file." << endl;
        return 1; // Menghentikan program jika gagal membuka file
    }

    string line;
    string no_pasien, nama, tanggal_lahir, alamat;

    while (getline(file, line)) {
        if (line.find("no pasien") != string::npos) {
            size_t pos = line.find(":");
            no_pasien = line.substr(pos + 1);
        } else if (line.find("nama") != string::npos) {
            size_t pos = line.find(":");
            nama = line.substr(pos + 1);
        } else if (line.find("tanggal lahir") != string::npos) {
            size_t pos = line.find(":");
            tanggal_lahir = line.substr(pos + 1);
        } else if (line.find("alamat") != string::npos) {
            size_t pos = line.find(":");
            alamat = line.substr(pos + 1);
        }
    }

    file.close(); // Menutup file setelah selesai membacanya

    // Menampilkan data yang telah dibaca
    cout << "No Pasien: " << no_pasien << endl;
    cout << "Nama: " << nama << endl;
    cout << "Tanggal Lahir: " << tanggal_lahir << endl;
    cout << "Alamat: " << alamat << endl;
    
    cin.get();
    return 0;
}
