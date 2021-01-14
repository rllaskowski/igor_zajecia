#include <iostream>

using namespace std;


/*
a^10 * a^5 = a^15

(a^10)^2 = a^20

a^b

a^101 = a^64 * a^32 * a^4 * a^1

101 = 64+32+4+1

wynik = a^1*a^4*a^32*a^64
potega = a^64

a^(2^0) = a^1
*/

long long potegowanie(int podst, int wyk){
    // liczba 
    long long potega = podst;
    long long wynik = 1;
    while (wyk!=0) {
        if (wyk%2==1) {
            wynik=wynik*potega;
        }
        potega=potega*potega;
        wyk=wyk/2;
    }
    return wynik;
}


long long potegowanie2(int podst, int wyk){

    long long tymcz;
    if (wyk==0) {
        return 1;
    } else{
        if (wyk%2==0) {
            tymcz=potegowanie2(podst, wyk/2);
            return tymcz*tymcz;
        } else{
            tymcz=potegowanie2(podst, wyk/2);
            return tymcz*tymcz*podst;
        }
    }
}




int main() {


}