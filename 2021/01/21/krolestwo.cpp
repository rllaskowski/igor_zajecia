#include <iostream>
#include <vector>

using namespace std;

bool wierz[1000*1000+1];
vector<int> t[1000*1000+1];
int liczba=0;

int DFS(int k){
    int suma = 1;
    wierz[k]=true;
    
    for (int i=0;i<t[k].size();i++) {
        int v = t[k][i]; // v jest sasiadem k
        if (!wierz[v]) {
            suma+=DFS(v);
        }
    }
    return suma;
}

int main() {

    int n, m, kr1, kr2;
    cin>>n >> m;
    
    for (int i=0;i<m;i++) {
        cin>>kr1>>kr2;
        t[kr1].push_back(kr2);
        t[kr2].push_back(kr1);
    }
   
    if (DFS(1)==n) {
        cout<<"TAK";
    }   else{
        cout<<"NIE";
    }

    return 0;
}