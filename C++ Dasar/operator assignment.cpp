
// MATERI OPERATOR ASSIGNMENT

#include <iostream>
using namespace std;

int main(){
    int a;
    a = 5;
    cout << "nilai awal dari a adalah = " << a << endl;

    // rumus operator assignment
    // a = a + 5; atau bisa ditulis a += 5;

    a += 5;
    cout << "ditambah 5 menjadi = " << a << endl;
    a -= 5;
    cout << "dikurang 5 menjadi = " << a << endl;
    a *= 5;
    cout << "dikali 5 menjadi = " << a << endl;
    a /= 5;
    cout << "dibagi 5 menjadi = " << a << endl;
    a %= 5;
    cout << "dimodulus 5 menjadi = " << a << endl;

    cin.get();
    return 0;
}