#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct pasien {
    string nama;
    int umur;
    string alamat;
};

pasien ambildata(int posisi, fstream &file){
    pasien temp;

    file.seekg(posisi * sizeof(pasien));
    file.read(reinterpret_cast<char*>(&temp), sizeof(pasien));

    return temp;
}

void menulisdata(pasien input, int posisi, fstream &file){
    file.seekp(posisi * sizeof(pasien));
    file.write(reinterpret_cast<char*>(&input), sizeof(pasien));
}

int main(){
    
    fstream filePasien;
    filePasien.open("pasien.bin", ios::trunc | ios::out | ios::in | ios::binary);
    
    pasien pasien1, pasien2, pasien3, output;
    
    pasien1.nama = "Budi";
    pasien1.umur = 20;
    pasien1.alamat = "Jl. Sudirman";

    pasien2.nama = "Susi";
    pasien2.umur = 25;
    pasien2.alamat = "Jl. Sudirman";

    pasien3.nama = "Rudi";
    pasien3.umur = 30;
    pasien3.alamat = "Jl. Sudirman";

    filePasien.write(reinterpret_cast<char*>(&pasien1), sizeof(pasien));
    filePasien.write(reinterpret_cast<char*>(&pasien2), sizeof(pasien));
    filePasien.write(reinterpret_cast<char*>(&pasien3), sizeof(pasien));

    menulisdata(pasien1, 0, filePasien);
    menulisdata(pasien2, 1, filePasien);
    menulisdata(pasien3, 2, filePasien);

    output = ambildata(0, filePasien);
    cout << output.nama << endl;
    cout << output.umur << endl;
    cout << output.alamat << endl;

    cin.get();
    filePasien.close();
}