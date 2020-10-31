#include <iostream>

using namespace std;


/*

24   =  2^3*3^1
x^7  =  2^7*3^7
x    =  2^1*3^1 = 6 


n = 15

15 | 3
5  | 5
1 

*/


void rozklad(int n) {
    int dzielnik = 2;
    int wynik = 1;
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
            cout << dzielnik<<"^"<<wykladnik<<"*";

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
}

int main() {
    rozklad(345);

    return 0;
}