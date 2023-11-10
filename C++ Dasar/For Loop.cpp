
// MATERI FOR LOOP

#include <iostream>
using namespace std;

int main(){

    // for loop
    // for (inisialisasi; kondisi; increment/decrement){
    //      aksi;

    cout << "contoh 1" << endl;
    for (int i = 0; i < 5; i++){
        cout << "ini adalah baris ke " << i << endl;
    }

    cout << "contoh 2" << endl;
    for (int i = 0; i <= 5; i++){
        cout << "ini adalah baris ke " << i << endl;
    }

    cout << "contoh 3" << endl;
    for (int i = 5; i >= 0; i--){
        cout << "ini adalah baris ke " << i << endl;
    }

    cout << "contoh 4" << endl;
    for (int i = 5; i >= 0; i--){
        cout << "ini adalah baris ke " << i << endl;
    }

    cout << "contoh 5" << endl;
    int total = 0;
    for (int i = 1; i <= 10; i++){
        total = total + i;
        cout << "total saat ini adalah " << total << endl;
    }

    cout << "contoh 6" << endl;
    int total2 = 0;
    for (int i = 1; i <= 10; i++){
        total2 += i;
        cout << "total saat ini adalah " << total2 << endl;
    }

    cout << "contoh 7" << endl;
    int total3 = 0;
    for (int i = 1; i <= 10; i++){
        total3 += i;
    }
    cout << "total akhir adalah " << total3 << endl;

    cout << "contoh 8" << endl;
    int total4 = 0;
    for (int i = 1; i <= 10; i++){
        total4 += i;
    }
    cout << "total akhir adalah " << total4 << endl;

    cin.get();
    return 0;
}