#include <iostream>
using namespace std;

/* Kelompok 12
program piramida
cahaya
izzudin
irza
*/

void piramidaTegak() {
    int n;
    cout << endl;
    cout << "-Piramida Tegak-" << endl;
    cout << "masukkan ketinggian piramida : ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void piramidaTerbalik() {
    int n;
    cout << endl;
    cout << "-Piramida Terbalik-" << endl;
    cout << "masukkan ketinggian piramida : ";
    cin >> n;
    cout << endl;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void piramidaKiri() {
    int n;
    cout << endl;
    cout << "-Piramida Kiri-" << endl;
    cout << "masukkan ketinggian piramida : ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void piramidaKanan() {
    int n;
    cout << endl;
    cout << "-Piramida Kanan-" << endl;
    cout << "masukkan ketinggian piramida : ";
    cin >> n;
    cout << endl;

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int menu;
    bool is_continue = true;

    do {
        system("clear");
        cout << "----------------------" << endl;
        cout << "Menu piramid" << endl;
        cout << "1. Piramida Tegak" << endl;
        cout << "2. Piramida Terbalik" << endl;
        cout << "3. Piramida hadap Kiri" << endl;
        cout << "4. Piramida hadap Kanan" << endl;
        cout << "5. Keluar" << endl;
        cout << "----------------------" << endl;
        cout << "Pilih menu : ";
        cin >> menu;

        switch (menu) {
            case 1:
                piramidaTegak();
                break;
            case 2:
                piramidaTerbalik();
                break;
            case 3:
                piramidaKiri();
                break;
            case 4:
                piramidaKanan();
                break;
            case 5:
                is_continue = false;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
                break;
        }

        if (is_continue) {
            char response;
            cout << "Lanjutkan? (y/n): ";
            cin >> response;
            if (response != 'y' && response != 'Y') {
                is_continue = false;
            }
        }

    } while (is_continue);

    return 0;
}
