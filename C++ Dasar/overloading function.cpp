#include <iostream>
using namespace std;


// default function
int volume(int p, int l, int t){
    return p * l * t;
}

// overloading function
int volume(int s){
    return s * s * s;
}

float volume(float r){
    return 3.14 * r * r * r * 4 / 3;
}

int main(){
    
    cout << "volume kubus : " << volume(5) << endl;
    cout << "volume balok : " << volume(5, 5, 5) << endl;
    cout << "volume bola : " << volume(5.0f) << endl;

    cin.get();
    return 0;  
}