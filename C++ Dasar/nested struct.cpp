#include <iostream>
#include <string>
using namespace std;

struct film {
    string title;
    int year;
    string director;
};

struct director {
    string name;
    int birth_year;
    film best_film;
};

int main() {
    director d1;
    d1.name = "James Cameron";
    d1.birth_year = 1954;
    d1.best_film.title = "Avatar";
    d1.best_film.year = 2009;
    d1.best_film.director = d1.name;

    cout << "Name: " << d1.name << endl;
    cout << "Birth year: " << d1.birth_year << endl;
    cout << "Best film: " << d1.best_film.title << endl;
    cout << "Year: " << d1.best_film.year << endl;
    cout << "Director: " << d1.best_film.director << endl;
    
    cin.get();
    return 0;
}