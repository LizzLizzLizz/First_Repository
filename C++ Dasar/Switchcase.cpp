
// MATERI SWITCH CASE

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "berapa hasil dari 2 + 2 ? ";
    cin >> a;

    // switch bisa menggunakan boolean atau cin 
    switch ( a ){
        case 4:
            cout << "benar sekali" << endl;
            break;
        case 3:
            cout << "hampir benar" << endl;
            break;
        case 2:
            cout << "salah" << endl;
            break;
        default:
            cout << "salah semua" << endl;
            break;
    }

    cin.get();
    return 0;
}