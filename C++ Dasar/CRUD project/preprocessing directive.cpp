#include <iostream>

//macro untuk nama
#define NAMA "Dimas Ngawi
#define ANGKA 5

//macro untuk fungsi
#define KALI(a,b) (a*b)
#define MAX(a,b) ((a>b)?a:b)

//macro if else
#if ANGKA == 5
    #define LANG "C++"
#else
    #define LANG "C"
#endif

using namespace std;

int main(){
    cout << "Nama : " << NAMA << endl;
    cout << "Angka : " << ANGKA << endl;
    cout << "Hasil kali : " << KALI(ANGKA, 2) << endl;
    cout << "Angka maksimal : " << MAX(ANGKA, 10) << endl;
    cout << "Bahasa pemrograman : " << LANG << endl;

    #undef ANGKA
    #define ANGKA 10
    cout << "Angka : " << ANGKA << endl;

    cin.get();
    return 0;
}