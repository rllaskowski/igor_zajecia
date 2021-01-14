#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x1,x2,y1,y2,pozX,pozY,zwrot,kier,licz=0;
    string kierunek,skret;

    cin>>n;
    cin>>kierunek>>skret;
    cin>>x1>>x2>>y1>>y2;
    int T[y2-y1+1][x2-x1+1];
    if (skret=="PRAWO") {
        zwrot=3;
    } else {
        zwrot=1;
    }
    if (zwrot==1) {
        if (kierunek=="POLNOC") {
            kier=0;
            pozX=0;
            pozY=1;
        } else if (kierunek=="WSCHOD") {
            kier=1;
            pozX=n;
            pozY=0;
        } else if (kierunek=="POLUDNIE") {
            kier=2;
            pozX=n+1;
            pozY=n;
        } else {
            kier=3;
            pozX=1;
            pozY=n+1;
        }
    }
    if (zwrot==3) {
        if (kierunek=="ZACHOD") {
            kier=0;
            pozX=0;
            pozY=n;
        } else if (kierunek=="POLNOC") {
            kier=1;
            pozX=1;
            pozY=0;
        } else if (kierunek=="WSCHOD") {
            kier=2;
            pozX=n+1;
            pozY=1;
        } else {
            kier=3;
            pozX=n;
            pozY=n+1;
        }
    }
    for (int i=1;i<=2*n-1;i++) {
        for (int j=1;j<=n-i/2;j++){
            licz++;
            if (kier==0) {
                pozX=pozX+1;
            } else if (kier==1) {
                pozY=pozY+1;
            } else if (kier==2) {
                pozX=pozX-1;
            } else {
                pozY=pozY-1;
            }
            if (pozX>=x1&&pozX<=x2&&pozY>=y1&&pozY<=y2) {
                T[pozY-y1][pozX-x1]=licz;
            }
        }
        kier=(kier+zwrot)%4;
    }
    for (int i=y2-y1;i>=0;i--) {
        for (int j=0;j<x2-x1+1;j++) {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
}