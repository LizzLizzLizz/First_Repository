
// MATERI GERBANG LOGIKA

#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 3;
    int c = 4;
    bool hasil1, hasil2, hasil3, hasil4;

    // NOT : kebalikan
    hasil1 = !( a == b ); //false
    hasil2 = !( a == c ); //true
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    // OR : jika ada salah satu true maka true
    hasil1 = ( a == b ) || ( a == b ); //true or true = true
    hasil2 = ( a == c ) || ( a == b ); //true or false = true
    hasil3 = ( a == b ) || ( a == c ); //true or false = true
    hasil4 = ( a == c ) || ( a == c ); //false or false = false
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cout << hasil3 << endl;
    cout << hasil4 << endl;

    // AND : jika ada salah satu false maka false
    hasil1 = ( a == b ) && ( a == b ); //true or true = true
    hasil2 = ( a == c ) && ( a == b ); //true or false = false
    hasil3 = ( a == b ) && ( a == c ); //true or false = false
    hasil4 = ( a == c ) && ( a == c ); //false or false = false
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cout << hasil3 << endl;
    cout << hasil4 << endl;

    cin.get();
    return 0;
}