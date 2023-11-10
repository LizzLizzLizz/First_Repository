#include <iostream>
#include <string>
using namespace std;

int main(){
    string  kalimat_1 ("budi suka olahraga supaya sehat");
    string  kalimat_2 ("adi makan pisang di pagi hari");

    // substring adalah mengambil string dari string
    cout << kalimat_1.substr(5, 5) << endl;
    cout << kalimat_2.substr(4, 5) << endl;

    // mencari posisi dari string
    cout << kalimat_1.find("olahraga") << endl;
    cout << kalimat_2.find("pagi") << endl;

    // mencari posisi dari string terbalik
    cout << kalimat_1.rfind("sehat") << endl;
    cout << kalimat_2.rfind("pagi") << endl;

    cin.get();
    return 0;
}