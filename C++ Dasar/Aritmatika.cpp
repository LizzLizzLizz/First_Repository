
// MATERI ARITMATIKA

#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 8;
    int c = 9;

    // pertambahan +
    cout << a + b << endl;

    // pengurangan -
    cout << a - b << endl;

    //perkalian *
    cout << a * b << endl;

    // pembagian / ( PEMBAGIAN HARUS MENGGUANAKAN FLOAT!! )
    float A = 5;
    float B = 4;
    cout << A / B << endl;

    // modulus % 
    cout << a % b << endl;

    // operasi campuran ( operasi campuran akan mengikuti aturan matematika secara default )
    cout << a * ( c - b ) + a << endl;

    cin.get();
    return 0;

}