#include <iostream>

using namespace std;

void sito(int n, bool czyPierwsza[]) {
    for (int i=0;i<n;i++) {
        czyPierwsza[i]=true;
    }
    czyPierwsza[0] = false;
    czyPierwsza[1] = false;

    
    for (int i=2;i<n;i++) {
        if (czyPierwsza[i]) {
            cout << i << endl;
            // i jest liczba pierwsza
            // zaznaczmy, że jej wielokrotnosci nie są
            for (int j=2*i;j<n;j+=i) {
                czyPierwsza[j]=false;
            }    
        }
    }
}

int main() {

    return 0;
}