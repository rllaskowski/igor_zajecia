/* Rozwiązanie wzorcowe zadania bankiet */
#include <iostream>

using namespace std;


int main() {
    int n, m, osoba;
    int wynik = 0;

    int poLewej[1000000];
    bool odw[1000000];

    cin >> n >> m;


    for (int i = 1; i <= n; i++) {
        cin >> poLewej[i];
    
        odw[i] = false;
    }


    for (int i = 1; i <= n; i++) {
        if (!odw[i]) {
            // osoba o numerze i nie siedziala jeszcze przy żadnym
            // ze sprawdzonych stolików

            // zaczynajac od osoby o numerze i obchodzimy dookola stolik
            osoba = i;
            do { 
                odw[i] = true;
                osoba = poLewej[i];
            } while (osoba != i); // dopoki znow nie natrafimy na osobe i

            wynik++; // znalezlismy nowy stolik więc zwiększamy wynik
        }   
    }

    cout << wynik;

    return 0;
}