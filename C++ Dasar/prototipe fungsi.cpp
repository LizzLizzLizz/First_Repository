#include <iostream>
using namespace std;

int luas_persegipanjang(int p, int l);
void luas_persegipanjang2(int p, int l);

int main(){

    int panjang, lebar;
    cin >> panjang;
    cin >> lebar;
    cout << "luas persegi panjang adalah : " << luas_persegipanjang(panjang, lebar) << endl;

    int panjang2, lebar2;
    cin >> panjang2;
    cin >> lebar2;
    cout << "luas persegi panjang adalah : " << luas_persegipanjang(panjang2, lebar2) << endl;

    cin.get();
    return 0;
}

int luas_persegipanjang(int p, int l){
    int L;
    L = p * l;
    return L;
}

void luas_persegipanjang2(int p, int l){
    int L;
    L = p * l;
    cout << "luas persegi panjang adalah : " << L << endl;
}