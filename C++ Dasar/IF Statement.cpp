
// MATERI IF STATEMENT

#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "berapa hasil dari 2 + 2 ? ";
    cin >> a;

    // if harus menggunakan boolean
    if ( a == 4 ){
        cout << "benar sekali" << endl;
    }else if ( a == 3 ){
        cout << "hampir benar" << endl;
    }else if ( a == 2 ){
        cout << "salah" << endl;
    }

    cin.get();
    return 0;
}