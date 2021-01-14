#include <iostream>
#include <algorithm>

using namespace std;

bool szukaj(int *liczby, int n, int x) {
    int p=0,k=n-1,s;
    
    while (k>=p) {
        s=(p+k)/2;
        if (liczby[s]>x) {
            k=s-1;
        } else if (liczby[s]<x) {
            p=s+1;
        } else {
            return true;
        }
    }

    return false;
}

int main() {

    int n;

    cin>>n;
    int liczby[n];

    for (int i=0;i<n;i++) {
        cin>>liczby[i];
    }
    
    sort(liczby, liczby+n);

    for (int i=0; i < n && liczby[i]<=1000;i++) {
        int a = liczby[i];
        
        if (szukaj(liczby, n, a*a) && szukaj(liczby, n, a*a*a)){
            cout<<a;
            return 0;
        }
    }

    cout << "NIE" << endl;
    

    return 0;
}