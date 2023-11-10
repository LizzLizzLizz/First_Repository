#include <iostream>
using namespace std;

int x = 1; // variabel global

int ambil_global(){
    return x; // mengambil variabel global
}

int local_x(){
    int x = 2;
    return x; // mengambil variabel local_x
}

int main(){
    cout << "variabel global : " << x << endl;
    int x = 5;
    cout << "variabel local main : " << x << endl;
    cout << "variabel ambil_global : " << ambil_global() << endl;
    cout << "variabel local_x : " << local_x() << endl;
    {
        int x = 3; // variabel block
        cout << "variabel block main : " << x << endl;
    }


    cin.get();
    return 0;
}