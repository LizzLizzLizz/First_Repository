#include <iostream>
#include <array>

using namespace std;

    /*
    for (deklarasi variabel : array){
        statement
    }
    */

int main(){
    array < int, 10 > arraynilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int nilai : arraynilai){
        cout << "address " << &nilai << " nilainya adalah " << nilai << endl;
        nilai = 1; // tidak akan merubah nilai asli
    }
    cout << endl;

    // manipulasi array menggunakan refference (agar bisa merubah nilai asli)
    for (int &nilaiRef : arraynilai){
        nilaiRef *= 2;
    }
    cout << endl;
    
    for (int &nilaiRef : arraynilai){
        cout << "address " << &nilaiRef << " nilainya adalah " << nilaiRef << endl;
    }

    cin.get();
    return 0;
}