#include <iostream>

using namespace std;

int fib(int n){
    if (n==1||n==0) {
        return 1;
    } else{
        return fib(n-1)+fib(n-2);
    }
}

int sil(int n){
    if (n==0) {
        return 1;
    } else{
        return n*sil(n-1);
    }
}

bool parz(int n){
    if (n==0) {
        return true;
    } else{
        return !parz(n-1);
    }
}

void bin(int n){
    /*
    Wypisuje w kolejnosci od najbardziej znaczacych
    cyfry liczby n w systemie binarnym
    */

    if (n>0) {
        bin(n/2);
        cout << n%2;
    } 
}

void hanoi(int n,int z, int tymczas, int na){
    /*
    Przenosi wszystkie n krazkow
    z krazka o numerze z
    do krazka o numerze na
    */
    if (n==0){
        return ;
    } else{
        if (n > 1) {
            hanoi(n-1, z, na, tymczas);
        }
        cout << "Przeloz z " << z << " na " << na << endl;
        if (n > 1) {
            hanoi(n-1, tymczas, z, na);
        } 
    }
}

int main() {
    hanoi(3, 1, 2, 3);

    return 0;
}