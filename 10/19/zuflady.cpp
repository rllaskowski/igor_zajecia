#include <iostream>

using namespace std;


int main() {
    int n;
    int t[1000*1000];
    int wynik = 0;
    cin>>n;
    
    for (int i=0;i<n;i++) {
        cin>>t[i];
    }
    
    for (int i=n-2;i>=0;i--) {
        if (t[i]>=t[i+1]) {
            t[i]=t[i+1]-1;
            wynik++;

            if (t[i]==0) {
                wynik=-1;
                break;
            }
        }
    }

    cout << wynik;

    return 0;
}