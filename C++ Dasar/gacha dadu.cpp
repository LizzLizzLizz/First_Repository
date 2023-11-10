
// FUNGSI ACAK DADU

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    while(true){
        char pilihan;
        cout << "apakah anda ingin mengacak dadu? (y/n) ";
        cin >> pilihan;
        if (pilihan == 'y'){
            int dadu;
            cout << "mengocok dadu..." << endl;
            dadu = rand() % 6 + 1;
            cout << "dadu berhenti pada angka " << dadu << endl;
        } else if (pilihan == 'n'){
            break;
        } else {
            cout << "input tidak valid" << endl;
        }
    }
    cin.get();
    return 0;
}