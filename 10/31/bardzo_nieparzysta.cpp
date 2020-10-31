#include <iostream>

using namespace std;


bool czyBardzoNiep(int x){
    // dla danej liczby x zwraca true jesli ta liczba
    // jest bardzo nieparzysta lub false w.p.p

    while (x>0) {
        int cyfra = x % 10;
        if(cyfra % 2 == 0){
            return false;
        }
        x /= 10;
    }
    return true;
}


int main() {
    int n;
    cin>>n;
    int wynik = n+1;

    while (!czyBardzoNiep(wynik)){
        wynik+=1;
    }
    
    cout<<wynik;

    return 0;
}