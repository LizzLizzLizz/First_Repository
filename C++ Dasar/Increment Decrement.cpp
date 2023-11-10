
// INCREMENT DECREMENT OPERATOR

#include <iostream>
using namespace std;

int main (){

     int a = 5;
    int b = 5;

    // post increment dan post decrement dihitung setelah baris kode dijalankan

    // increment
   cout << a << endl;
    a++;
    cout << a++ << endl;
    cout << a << endl;

    // decrement
   cout << a << endl;
    a--;
    cout << a-- << endl;
    cout << a << endl;

    // pre increment dan pre decrement dihitung sebelum baris kode dijalankan

    // increment
   cout << a << endl;
    ++a;
    cout << ++a << endl;
    cout << a << endl;

    // decrement
   cout << a << endl;
    --a;
    cout << --a << endl;
    cout << a << endl;

    cin.get();
    return 0;
}