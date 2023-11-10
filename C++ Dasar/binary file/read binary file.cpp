#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("test.bin", ios::in | ios::binary);
    int a;
    file.read((char*)&a, sizeof(a));
    cout << a << endl;
    file.close();
    
    cin.get();
    return 0;
}