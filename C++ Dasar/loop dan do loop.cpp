
// MATERI LOOP DAN DO LOOP

#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 1;

    // loop itu akan selalu ngulang sampai ada break atau kondisi yang tidak terpenuhi

    // while loop biasa itu langsung syarat tanpa aksi terlebih dahulu dan harus menggunakan boolean

    while ( a <= 10 ){
        cout << "ini adalah loop ke " << a << endl;
        a++; // bisa juga menggunakan a += 1;
    }

    cout << "===================== selesai ============================" << endl;

    // do while loop itu aksi terlebih dahulu baru syarat dan harus menggunakan boolean
    do {
        cout << "ini adalah loop ke " << b << endl;
        b++; // bisa juga menggunakan b += 1;
     } while ( b <= 10 );

     cout << "===================== selesai ============================" << endl;

    cin.get();
    return 0;
}
    
    

