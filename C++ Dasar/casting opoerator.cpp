#include <iostream>
using namespace std;

int main(){
    int a = 10;
    float b = 3.14;
    char c = 'a';

    // casting operator
    cout << (int) b << endl;
    cout << (int) c << endl;
    cout << (char) a << endl;
    cout << (float) a << endl;

    cin.get();
    return 0;
}