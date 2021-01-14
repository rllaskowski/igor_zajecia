#include <iostream>

using namespace std;

int tab[20];

void ustaw(int n,int miejsce) {
    
    if (miejsce<=n) {
        tab[miejsce-1]=0;
        ustaw(n,miejsce+1);
        tab[miejsce-1]=1;
        ustaw(n,miejsce+1);

    }
    else{
        for (int i=0;i<n;i++) {
            cout<<tab[i];
        }
        cout<<endl;
    }
}

int main() {
    ustaw(5, 1);

    return 0;
}