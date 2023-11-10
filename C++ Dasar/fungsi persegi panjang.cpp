
// FUNGSI LUAS DAN KELILING PERSEGI PANJANG

#include <iostream>
using namespace std;

int keliling(int p, int l){
    int k;
    k = 2 * (p + l);
    return k;
}

int luas(int P, int L){
    int Ls;
    Ls = P * L;
    return Ls;
}

int main(){
    int panjang, lebar;
    cout << "masukkan panjang persegi panjang : ";
    cin >> panjang;
    cout << "masukkan lebar persegi panjang : ";
    cin >> lebar;
    cout << "keliling persegi panjang adalah : " << keliling(panjang, lebar) << endl;
    cout << "luas persegi panjang adalah : " << luas(panjang, lebar) << endl;

    cin.get();
    return 0;
}