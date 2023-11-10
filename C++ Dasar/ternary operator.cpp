#include <iostream>
#include <string>
using namespace std;

// terneray operator adalah shortcut if else

int main(){
    int a = 10;
    string b;

    // if else
    if(a == 10){
        b = "Sepuluh";
    }else{
        b = "Bukan Sepuluh";
    }

    cout << b << endl;

    // ternary operator
    b = (a == 10) ? "Sepuluh" : "Bukan Sepuluh";
    cout << b << endl;

    cin.get();
    return 0;
}