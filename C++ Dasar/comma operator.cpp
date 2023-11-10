#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    int c = 30;

    // comma operator
    cout << (a, b, c) << endl;

    cin.get();
    return 0;
}