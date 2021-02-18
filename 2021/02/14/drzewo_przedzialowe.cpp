#include <iostream>

using namespace std;

const int N = 1 << 20;

typedef struct wierz {
    int suma;
    int maks;
} wierz;


wierz drzewo[2*N];

/*
<p,k> - przedzial operacji
x - dodawana wartosc
v - aktualny wierzcholek
<a,b> - przedzial wierzcholka
*/

void dodaj(int p, int k, int x, int v, int a, int b){
    if (p<=a  && b<=k) {
        drzewo[v].suma += x;
        drzewo[v].maks += x;
    } else {
        int s = (a+b)/2;
        if (p<=s) {
            dodaj(p,k,x,2*v,a,s);
        }
        if (s+1<=k) {
            dodaj(p,k,x,2*v+1,s+1,b);
        }
        drzewo[v].maks = max(drzewo[v*2].maks,drzewo[v*2+1].maks) + drzewo[v].suma;
    }
}

void dodaj(int p, int k, int x) {
    dodaj(p, k, x, 1, 0, N-1);
}

int main() {
    dodaj(1, 5, 1);

    cout << drzewo[1].maks;

    return 0;
}