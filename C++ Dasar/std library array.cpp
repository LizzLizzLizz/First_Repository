#include <iostream>
#include <array>
using namespace std;


int main(){
   // array < int, jumlah array > nilai; // cara 1

    array < int, 5 > nilai;

    for (int i = 0; i <= 4; i++){
        nilai[i] = i;
        cout << "nilai [" << i << "] = " << nilai[i] << " adressnya adalah : " << &nilai[i] << endl;
    }
    cout << endl;

    cout << "ukuran array = " << nilai.size() << endl;
    cout << "ukuran terbesar array = " << nilai.max_size() << endl;
    cout << "ukuran terkecil array = " << nilai.empty() << endl;
    cout << "nilai ke 2 = " << nilai.at(2) << endl;
    cout << "adress awal = " << nilai.begin() << endl;
    cout << "adress akhir = " << nilai.end() << endl;

    cin.get();
    return 0;
}