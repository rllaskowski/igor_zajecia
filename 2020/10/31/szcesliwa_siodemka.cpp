#include <iostream>

using namespace std;


long long rozklad(int n) {
    int dzielnik = 2;
    long long wynik = 1;

    
    while (n > 1) {
        if(n % dzielnik == 0) {
            // dzielnik dzieli n
            // wiec dzielnik jest jakas liczba pierwsza
            // znajdzmy potege w jakiej dzieli n
            int wykladnik = 0;

            while (n%dzielnik == 0) {
                n /= dzielnik;
                wykladnik++;
            }
            // n nie dziei sie wiecej dzielnik
            //cout << dzielnik<<"^"<<wykladnik<<"*";

            // chcemy aby w naszym wyniku znajdowal sie dzielnik
            // w potedze sufit(wykladnik/7)

            int nowyWykladnik = wykladnik/7;
 
            if (wykladnik%7!=0){
                nowyWykladnik++;
            }

            for (int i = 0; i < nowyWykladnik; i++) {
                wynik *= dzielnik;
            } 
        }
        dzielnik++;
    }

    return wynik;
}

int main() {
    int n;
    cin >> n;

    cout << rozklad(n) << endl;

    return 0;
}