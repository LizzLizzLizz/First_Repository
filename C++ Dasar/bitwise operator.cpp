#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void printbinary(unsigned short val, string name){
    cout << name << " = " << bitset<8>(val) << endl;
}

int main(){
    unsigned short a = 3;
    unsigned short b = 5;
    unsigned short c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    // bitwise AND
    c = a & b;
    printbinary(a, "a");
    printbinary(b, "b");
    printbinary(c, "c");
    cout << c << endl;
    cout << endl;   

    // bitwise OR
    c = a | b;
    printbinary(a, "a");
    printbinary(b, "b");
    printbinary(c, "c");
    cout << c << endl;
    cout << endl;

    // bitwise XOR
    c = a ^ b;
    printbinary(a, "a");
    printbinary(b, "b");
    printbinary(c, "c");
    cout << c << endl;
    cout << endl;

    // bitwise NOT
    c = ~a;
    printbinary(a, "a");
    printbinary(c, "c");
    cout << c << endl;
    cout << endl;

    // bitwise left shift
    c = a << 1;
    printbinary(a, "a");
    printbinary(c, "c");
    cout << c << endl;
    cout << endl;

    // bitwise right shift
    c = a >> 1;
    printbinary(a, "a");
    printbinary(c, "c");
    cout << c << endl;
    cout << endl;

    cin.get();
    return 0;
}