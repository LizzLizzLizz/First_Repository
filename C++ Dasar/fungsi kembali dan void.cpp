
// MATERI FUNGSI DENGAN PENGEMBALIAN NILAI DAN VOID

#include <iostream>
using namespace std;

// reporter
int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}

// worker
void kuadrat2(){
    int x, y;
    y = x * x;
    cout << "hasil kuadrat dari ";
    cin >> x;
    cout << " adalah : " << y << endl;
}

void tambah2(){
    int a, b, c;
    c = a + b;
    cout << "hasil penjumlahan dari ";
    cin >> a;
    cout << " dan ";
    cin >> b;
    cout << " adalah : " << c << endl;
}

int main(){
    // memanggil fungsi reporter
    int input1, input2, input3;

    cout << "kuadrat dari ";
    cin >> input1;
    cout << " adalah : " << kuadrat(input1) << endl;

    cout << "hasil penjumlahan dari ";
    cin >> input2;
    cout << " dan ";
    cin >> input3;
    cout << " adalah : " << tambah(input2, input3) << endl;

    // memanggil fungsi worker
    kuadrat2();
    tambah2();

    cin.get();
    return 0;
}

