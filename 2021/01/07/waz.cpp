#include <iostream>

using namespace std;

int main() {

    int n,m;

    cin>>n>>m;
    int T[n][m];
    int S[n+1][m+1];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>T[i][j];
        }
    }
    for (int i=2;i<=n;i++) {
        S[i][0]=-1000000000;
    }
    for (int i=2;i<=m;i++) {
        S[0][i]=-1000000000;
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            if (i==j&&i==1) {
                S[i][j]=T[i-1][j-1];
            } else{
                S[i][j]=T[i-1][j-1]+max(S[i-1][j],S[i][j-1]);
            }
        }
    }

    cout<<S[n][m];
}