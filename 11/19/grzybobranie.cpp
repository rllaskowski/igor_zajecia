#include <iostream>


using namespace std;

int main() {

    int n,m;
    int grzyby[100][100], ilosc[100][100];

    cin>>n>>m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>grzyby[i][j];
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            ilosc[i][j]=grzyby[i][j];
            
            if (i-1 >= 0) {
                ilosc[i][j]=max(grzyby[i][j]+ilosc[i-1][j],ilosc[i][j]);
            }

            if (j-1 >= 0) {
                ilosc[i][j]=max(grzyby[i][j]+ilosc[i][j-1],ilosc[i][j]);
            }
        }
    }

    cout<<ilosc[n-1][m-1];

    return 0;
}