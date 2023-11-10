#include <iostream>
using namespace std;

int volume_balok(int p = 1, int l = 1, int t = 1){
    return p * l * t;
}

int main(){
    cout << "volume balok : " << volume_balok( 5, 5, 5 ) << endl;
    cout << "volume balok : " << volume_balok( 5, 5 ) << endl;
    cout << "volume balok : " << volume_balok( 5 ) << endl;
    cout << "volume balok : " << volume_balok() << endl;

    cin.get();
    return 0;
}