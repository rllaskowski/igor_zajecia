#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool wierz[1000*1000+1];
vector<int> t[1000*1000+1];
int odl[1000*1000+1];
queue<int> kol;

void bfs(int s) {
    int v;
    odl[s] = 0;
    wierz[s] = true;
    kol.push(s);
    while (kol.size()>0) {
        v=kol.front();
        kol.pop();
        for (int x : t[v]) {
            if (!wierz[x]) {
                wierz[x]=true;
                odl[x]=odl[v]+1;
                kol.push(x);
            }
        }
    }
}


int main() {
    int n, m, kr1, kr2;
    cin>>n >> m;
    
    for (int i=0;i<m;i++) {
        cin>>kr1>>kr2;
        t[kr1].push_back(kr2);
        t[kr2].push_back(kr1);
    }
   
    

    return 0;
}