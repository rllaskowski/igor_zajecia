/* Rozwiązanie wzorcowe zadania Pocztówka */

#include <iostream>

using namespace std;

int main(){
    int n,m;
    int gora;
    int ostatniaD = 0;
    long long suma = 0;

    cin >> n >> m;

    for (int i = 1; i <= n ;i++) {
        cin >> gora;

        if (gora >= m) {
            ostatniaD = i;
        }

        suma += ostatniaD;
    }
    
    cout << suma;

}