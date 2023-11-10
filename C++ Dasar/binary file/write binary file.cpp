#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file;
    file.open("test.bin", ios::out | ios::binary);
    int a = 5;
    file.write((char*)&a, sizeof(a));
    file.close();
    
    cin.get();
    return 0;
}