#include <iostream>

using namespace std;

void zmienNa5(int *wsk) {
    *wsk = 5;
}


int main() {
    int tab[10];

    tab[4] = 7;

    cout << (*(tab+4));
    cout << tab[4];

    int a = 4;

    zmienNa5(&a);

    cout << a;


    return 0;
}