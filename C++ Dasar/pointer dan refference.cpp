#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a; // pointer
    int &c = a; // refference

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "alamat a = " << &a << endl;
    cout << "alamat b = " << &b << endl;
    cout << "alamat c = " << &c << endl;

    cout << "nilai b = " << *b << endl;
    cout << "nilai c = " << c << endl;

    a = 10;
    cout << "nilai b = " << *b << endl;
    cout << "nilai c = " << c << endl;

    *b = 20;
    cout << "nilai a = " << a << endl;
    cout << "nilai c = " << c << endl;

    c = 30;
    cout << "nilai a = " << a << endl;
    cout << "nilai b = " << *b << endl;

    cin.get();
    return 0;
}


