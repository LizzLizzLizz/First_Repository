#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

const int arraysize = 10;

void printArray(array<int, arraysize> &arr)
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(array<char, arraysize> &arr)
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    array<int, arraysize> angka = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    array<char, arraysize> huruf = {'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    
    printArray(angka);
    printArray(huruf);
    
    sort(angka.begin(), angka.end());
    sort(huruf.begin(), huruf.end());


    printArray(angka);
    printArray(huruf);

    cin.get();
    return 0;
}

