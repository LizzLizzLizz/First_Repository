#include <iostream>
using namespace std;

int main(){
    int nilai[5]; // cara 1
    nilai[0] = 5;
    nilai[1] = 10;
    nilai[2] = 15;
    nilai[3] = 20;
    nilai[4] = 25;

    cout << "nilai ke 0 = " << nilai[0] << endl;
    cout << "nilai ke 1 = " << nilai[1] << endl;
    cout << "nilai ke 2 = " << nilai[2] << endl;
    cout << "nilai ke 3 = " << nilai[3] << endl;
    cout << "nilai ke 4 = " << nilai[4] << endl;

    int nilai2[5] = {5, 10, 15, 20, 25}; // cara 2
    cout << "nilai ke 0 = " << nilai2[0] << endl;
    cout << "nilai ke 1 = " << nilai2[1] << endl;
    cout << "nilai ke 2 = " << nilai2[2] << endl;
    cout << "nilai ke 3 = " << nilai2[3] << endl;
    cout << "nilai ke 4 = " << nilai2[4] << endl;

    cout << "ukuran array = " << sizeof(nilai2) << " byte" << endl;
    cout << "jumlah member array = " << sizeof(nilai2) / sizeof(int) << endl;


    cin.get();
    return 0;
}