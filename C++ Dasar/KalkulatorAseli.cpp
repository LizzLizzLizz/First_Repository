#include <iostream>
using namespace std;

int main(){
    float a, b, hasil;
    char aritmatika;

    cout << "selamat datang di program kalkulator \n \n";

    //interface
    cout << "masukkan nilai pertama = ";
    cin >> a;
    cout << "masukkan operator +, -, :, x";
    cin >> aritmatika;
    cout << "masukkan nilai kedua = ";
    cin >> b;

    cout << "\n hasil dari";
    cout << a << aritmatika << b;
    cout << " adalah ";

    cin.get();
    return 0;

}