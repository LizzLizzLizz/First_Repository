
// MATERI ALJABAR BOOLEAN

#include <iostream>
using namespace std;

int main (){
    int a = 2;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 1;
    bool hasil1, hasil2;

    // sama dengan
    hasil1 = ( a == b ); //true
    hasil2 = ( a == c ); //false
    cout << hasil1 << endl;
    cout << hasil2 << endl;

     // tidak sama dengan
    hasil1 = ( a != b ); //false
    hasil2 = ( a != c ); //true
    cout << hasil1 << endl;
    cout << hasil2 << endl;

     // lebih dari
    hasil1 = ( a > c ); //false
    hasil2 = ( d > c ); //true
    cout << hasil1 << endl;
    cout << hasil2 << endl;

     // kurang dari
    hasil1 = ( a < c ); //true
    hasil2 = ( d < c ); //false
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    // lebih dari sama dengan
    hasil1 = ( a >= b ); //true
    hasil2 = ( a >= d ); //false
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    // kurang dari sama dengan
    hasil1 = ( a <= b ); //true
    hasil2 = ( a <= e ); //false
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    cin.get();
    return 0;
}