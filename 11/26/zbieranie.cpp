#include <iostream>

using namespace std;

int main() {
    
    int n,m;
    char pole;

    cin>>n>>m;

    long long wyniki[n][m][2];
    
    const int mod = 1000000007;

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>pole;  
            
            int parzyste = 0; // ilosc sciezek parzystych ktore doceriaja do pola 
            int nparzyste = 0; // ilosc sciezek nieparzystych ktore doceriaja do pola
            
            if (i==0&&j==0) {
               parzyste = 1;
               nparzyste = 0;
            } else {
                if (i!=0) {
                    parzyste = wyniki[i-1][j][0];
                    nparzyste = wyniki[i-1][j][1];
                }
                if (j!=0) {
                    parzyste += wyniki[i][j-1][0];
                    nparzyste += wyniki[i][j-1][1];
                }  
            }

            if (pole=='P') {
                swap(parzyste,nparzyste);
            }
          
            wyniki[i][j][0]=parzyste %;
            wyniki[i][j][1]=nparzyste;
        }
    }
    cout<<wyniki[n][m][0];

    return 0;
}