
// rekursif adalah fungsi yang memanggil dirinya sendiri ( fungsi pengulanagn )

#include <iostream>
using namespace std;

int pangkatiterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatrekursif(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * pangkatrekursif(a, b - 1);
    }
}

int main(){
    int a, b;
    cout << "masukkan angka : ";
    cin >> a;
    cout << "masukkan pangkat : ";
    cin >> b;
    cout << "hasil iterasinya adalah : " << pangkatiterasi(a, b) << endl;
    cout << "hasil rekursifnya adalah : " << pangkatrekursif(a, b) << endl;



    cin.get();
    return 0;
}

