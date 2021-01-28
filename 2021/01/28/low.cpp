#include <iostream>
#include <vector>

using namespace std;

vector<int> kraw[1000001];
bool odw[1000001];
int low[1000001];
bool cykl[100001];

int DFS(int v, int gl){
    odw[v]=true;
    low[v]=gl;

    // minimum z lowow synow oraz naszej glebokosci
    int minim = gl;
    for (int x : kraw[v]) {
        // istnieje krawedz w v do x
        if (!odw[x]) {
            DFS(x,gl+1);  
        } 
        minim=min(minim,low[x]);
    }

    if (minim<=gl) {
        cykl[v]=true;
    }

    low[v] = minim;
    return low[v];
}

int main() {
    int n, m, a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        kraw[a].push_back(b);
        kraw[b].push_back(a);
        
    }    

    return 0;
}