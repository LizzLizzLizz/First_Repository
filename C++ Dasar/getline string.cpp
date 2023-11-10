#include <iostream>
#include <string>
using namespace std;

int main() {
    string str_input;
    getline(cin, str_input);
    cout << str_input << endl;
    
    // menentukan jumlah kata dari sting yang diinputkan
    int jumlah_kata = 0;
    for (int i = 0; i < str_input.length(); i++) {
        if (str_input[i] == ' ') {
            jumlah_kata++;
        }
    }
    cout << "Jumlah kata: " << jumlah_kata + 1 << endl;

    cin.get();
    return 0;
}