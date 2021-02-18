#include <iostream>

using namespace std;

// Nasze drzewo ma M = 2^20 lisci
const int M = 1 << 20;

int drzewo[M*2];

void zamien(int x, int a) {
    // na miejscu x naszego ciagu
    // wstawia wartosc a
    x += M;
    drzewo[x]=a;
    while (x>1) {
        x = x/2;
        drzewo[x] = drzewo[x*2]+drzewo[x*2+1];
    }
}

/*
<p, k> - przedzial z zapytania
v - numer wierzcholka w ktorym aktualnie sie znajdujemy
<a,b> - przedzial ktory obejmuje wierzcholek
*/
int suma(int p, int k, int v, int a, int b) {
    /*czy przedzial wierzcholka jest w calosci objety przez 
    przedzial z zapytania */
    if (p <= a&& b<=k) {
        return drzewo[v];
    }
    int sr;
    sr = (a+b)/2;
    int wynik = 0;
    if (p <= sr) {
        wynik += suma(p,k,v*2,a,sr);
    }
    if (k >= sr+1) {
        wynik += suma(p,k,v*2+1,sr+1,b);
    }

    return wynik;
} 

int suma(int p, int k) {
    return suma(p, k, 1, 0, M-1);
}


/*
<0, 7>
sr = 3
<0,3><4,7>
*/
int main() {
    int n, a;
    
    zamien(1, 4);
    zamien(2, 8);
    zamien(3, 1);
    zamien(4, 9);

    cout << suma(2, 3) << endl;

    zamien(2, 4);

    cout << suma(2, 3) << endl;


    return 0;
}