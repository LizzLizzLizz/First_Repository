#include <iostream>
#include <string>
using namespace std;

// struct adalah tipe data yang dapat menyimpan beberapa tipe data lainnya

struct buah {
    string warna;
    string rasa;
    int harga;
    float berat;
};

int main(){
    buah apel;
    apel.warna = "merah";
    apel.rasa = "manis";
    apel.harga = 10000;
    apel.berat = 0.5;

    cout << "Warna apel: " << apel.warna << endl;
    cout << "Rasa apel: " << apel.rasa << endl;
    cout << "Harga apel: " << apel.harga << endl;
    cout << "Berat apel: " << apel.berat << endl;
    
    cin.get();
    return 0;
}