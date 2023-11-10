#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

// sort sulu baru search

const int arraysize = 10;

void printArray(array<int, arraysize> &arr)
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    array<int, arraysize> angka = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    printArray(angka);
    
    sort(angka.begin(), angka.end());
    printArray(angka);
    
    int angkacari;
    cout << "masukkan angka yang dicari: ";
    cin >> angkacari;
    bool ketemu;
    ketemu = binary_search(angka.begin(), angka.end(), angkacari);
    
    if (ketemu)
    {
        cout << "ketemu" << endl;
    }
    else
    {
        cout << "gak ketemu" << endl;
    }
    
    cin.get();
    return 0;
}