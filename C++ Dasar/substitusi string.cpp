#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat1("Saya suka makan nasi goreng");
    string kalimat2("Saya suka makan nasi campur");
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    // Swap strings
    kalimat1.swap(kalimat2);
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    // Replace strings
    kalimat1.replace(10, 5, "minum");
    cout << kalimat1 << endl;
    kalimat2.replace(kalimat2.find("makan"), 5, "minum");
    cout << kalimat2 << endl;

    // Insert into strings
    kalimat1.insert(5, "tidak ");
    cout << kalimat1 << endl;
    kalimat2.insert(kalimat2.find("nasi"), "tidak ");
    cout << kalimat2 << endl;

    // Erase from strings
    kalimat1.erase(5, 5);
    cout << kalimat1 << endl;
    kalimat2.erase(kalimat2.find("tidak"), 6);
    cout << kalimat2 << endl;

    cin.get();
    return 0;
}
