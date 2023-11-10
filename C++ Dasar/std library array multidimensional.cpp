#include <iostream>
#include <array>
using namespace std;

const int baris = 2;
const int kolom = 3;

void printarray(array<array<int, kolom>, baris> &multiarray){
    for (int i = 0; i < baris; i++){
        cout << "[";
        for (int j = 0; j < kolom; j++){
            cout << multiarray[i][j] << "";
        }
        cout << "]" << endl;
    }
}

int main(){
    array<array<int, kolom>, baris> multiarray = {1,2,3,4,5,6};

    printarray(multiarray);

    cin.get();
    return 0;
}