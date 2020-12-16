#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int n;
    
    cin >> n;
    int d[n+1];
    d[0] = 0;
    
    for (int i=1;i<=n;i++) {
        d[i] = i;
        
        for (int j=1; j*j<=i; j++) {
            d[i] = min(d[i-j*j]+1, d[i]);
        }
    }
    cout<<d[n];
    return 0;
}