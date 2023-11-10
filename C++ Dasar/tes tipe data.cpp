
// MATERI TIPE DATA

#include <iostream>
#include <limits>
using namespace std;

int main(){

    cout << sizeof(int) << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    cout << sizeof(long) << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    cout << sizeof(char) << endl;
    cout << numeric_limits<char>::max() << endl;
    cout << numeric_limits<char>::min() << endl;

    cout << sizeof(float) << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;

    cout << sizeof(double) << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;

    cout << sizeof(unsigned char) << endl;
    cout << numeric_limits<unsigned char>::max() << endl;
    cout << numeric_limits<unsigned char>::min() << endl;

    cout << sizeof(unsigned short) << endl;
    cout << numeric_limits<unsigned short>::max() << endl;
    cout << numeric_limits<unsigned short>::min() << endl;

    cout << sizeof(unsigned long) << endl;
    cout << numeric_limits<unsigned long>::max() << endl;
    cout << numeric_limits<unsigned long>::min() << endl;

    cout << sizeof(unsigned int) << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;

    cin.get();
    return 0;
}
    