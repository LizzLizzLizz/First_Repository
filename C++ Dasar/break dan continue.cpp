
// MATERI BREAK DAN CONTINUE

#include <iostream>
using namespace std;

int main(){

    int i;
    // break itu untuk menghentikan loop
    
    // penggunaaaan break dalam for loop
    for (int i = 0; i < 10; i++){
        cout << i << endl;
        if (i == 3){
            break; 
        }
    }
    cout << "======================" << endl;

    // penggunaaaan break dalam while loop
    while (i < 10){
        cout << i << endl;
        i++; // increment harus digunakan dalam kurung agar tidak terjadi infinite loop
        if (i == 3){
            break; 
        }
        cout << i << endl;
    }
    cout << "======================" << endl;

    // continue itu untuk melompati salah satu syarat dalam loop

    // penggunaaaan continue dalam for loop
    for (int i = 0; i < 10; i++){
        cout << i << endl;
        if (i == 3){
            continue; 
        }
    }
    cout << "======================" << endl;

    // penggunaaaan continue dalam while loop
    while (i < 10){
        cout << i << endl;
        i++; // increment harus digunakan dalam kurung agar tidak terjadi infinite loop
        if (i == 3){
            continue; 
        }
        cout << i << endl;
    }
    cout << "======================" << endl;

    cin.get();
    return 0;
}