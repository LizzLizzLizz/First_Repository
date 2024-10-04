
// QUIZ ALPRO 1

#include <iostream>
#include <cmath>
using namespace std;

void program_1(){ //mencari jarak antara 2 titik dalam diagram cartesius
    int x1, x2, y1, y2;
    float jarak;
    cout << "Masukkan nilai x1 : "; cin >> x1;
    cout << "Masukkan nilai x2 : "; cin >> x2;
    cout << "Masukkan nilai y1 : "; cin >> y1;
    cout << "Masukkan nilai y2 : "; cin >> y2;
    jarak = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout << "Jarak antara titik (" << x1 << "," << y1 << ") dan (" << x2 << "," << y2 << ") adalah " << jarak << endl;
    cin.ignore();
}

void program_2(){ //mencari hasil total perkalian dari deret bilangan prima
    int n, f = 1;
    cout << "Masukkan Nilai n : ";
    cin >> n;
    cout << "Deret bilangan primanya adalah : " << endl;

    for (int a = 2; a < n; a++) { // Dimulai dari 2, karena 1 bukan bilangan prima
        int bil = 0;
        for (int b = 1; b <= a; b++) {
            if (a % b == 0) {
                bil++;
            }
        }
        if (bil == 2) {
            cout << a << "*";
            f *= a; // Mengalikan dengan bilangan prima yang ditemukan
        }
    }

    if (f != 1) {
        cout << "\nHasil perkalian semua bilangan prima: " << f << endl;
    } 
    cin.ignore();
}

void program_3(){ //mencari bilangan terbesar diantara 4 bilangan
    int a, b, c, d, max;
    cout << "masukkan 4 bilangan : ";
    cin >> a >> b >> c >> d;
    max = a;
    if (b > a) max = b;
    if (c > a) max = c;
    if (d > a) max = d;
    cout << "nilai terbesarnya adalah : " << max << endl;
    cin.ignore();
}

void program_4(){ //menentukan kondisi berdasarkan inputan suhu
    int suhu;
    cout << "Masukkan suhu : ";
    cin >> suhu;
    if (suhu < 15) {
        cout << "dingin" << endl;
    } else if (suhu >= 15 && suhu < 20) {
        cout << "sejuk" << endl;
    } else if (suhu >= 20 && suhu < 30) {
        cout << "normal" << endl;
    } else if (suhu >= 30 && suhu < 40) {
        cout << "panas" << endl;
    } else if (suhu >= 40) {
        cout << "sangat panas" << endl;
    } else {
        cout << "tidak terdefinisi" << endl;
    }
    cin.ignore();
}

int main(){
    while (true){
        int pilihan;
        cout << "selamat datang di program kami" << endl;
        cout << "1. mencari jarak antara 2 titik dalam diagram cartesius" << endl;
        cout << "2. mencari hasil total perkalian dari deret bilangan prima" << endl;
        cout << "3. mencari bilangan terbesar diantara 4 bilangan" << endl;
        cout << "4. menentukan kondisi berdasarkan inputan suhu" << endl;
        cout << "0. keluar" << endl;
        cout << "masukkan pilihan anda : ";
        cin >> pilihan;

        switch (pilihan){
            case 1:
                program_1();
                break;
            case 2:
                program_2();
                break;
            case 3:
                program_3();
                break;
            case 4:
                program_4();
                break;
            case 0:
                cout << "terima kasih telah menggunakan program kami" << endl;
                return 0;
            default:
                cout << "program yang anda masukkan tidak valid" << endl;
                break;
        }
    }
    cin.get();
    return 0;
}