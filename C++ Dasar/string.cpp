#include <iostream>
#include <string>
using namespace std;

int main(){
    string kata = "gello";
    cout << kata << endl;

    cout << "index ke-0 : " << kata[0] << endl;
    cout << "index ke-1 : " << kata[1] << endl;
    cout << "index ke-2 : " << kata[2] << endl;
    cout << "index ke-3 : " << kata[3] << endl;
    cout << "index ke-4 : " << kata[4] << endl;

    kata[0] = 'H';
    cout << kata << endl;

    string kata2 (kata + " world");
    cout << kata2 << endl;

    string kata3 ("tipu");
    kata2.append(" " + kata3);
    cout << kata2 << endl;

    string kata4 ("-tipu");
    kata2 += kata4;
    cout << kata3 << endl;

    cin.get();
    return 0;
}
