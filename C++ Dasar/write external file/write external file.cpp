#include <iostream>
#include <fstream> // ofstream, ifstream, fstream
using namespace std;

int main(){
    ofstream filesaya;
    
    //ios::app = menambahkan data di akhir file
    //ios::trunc = membuat file baru jika tidak ada
    //ios::out = menulis data

    filesaya.open("data.txt", ios::app);
    filesaya << "Hello World" << endl;
    filesaya.close();

    filesaya.open("data1.txt", ios::out);
    filesaya << "Hello World" << endl;
    filesaya.close();

    filesaya.open("data2.txt", ios::trunc);
    filesaya << "Hello World" << endl;
    filesaya.close();

    cin.get();
    return 0;
}