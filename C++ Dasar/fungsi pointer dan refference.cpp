#include <iostream>
using namespace std;

// fungsi dengan pointer

void fungsi(int *b){
    cout << "address b = " << b << endl;
    cout << "nilai b = " << *b << endl;
}

// fungsi dengan refference

void kuadrat(int &valRef){
    valRef = valRef * valRef;
}

int main(){
    int a = 5;
    cout << "address a = " << &a << endl;
    cout << "nilai a = " << a << endl;

    fungsi(&a); // fungsi dengan pointer
    kuadrat(a); // fungsi dengan refference
    cout << "nilai a = " << a << endl;

    cin.get();
    return 0;
}