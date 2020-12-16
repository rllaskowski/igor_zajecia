#include <iostream>
#include <algorithm>

using namespace std;

bool cos(pair<string,int> a, pair<string,int>b){
    return a.second > b.second;
}

int main() {

    int n,l=1;

    cin>>n;
    pair<int,int> T[n];

    string imiona[n];

    for (int i=0;i<n;i++) {
        cin>>imiona[i];
        cin>>T[i].second;
        T[i].first = i;
        
    }
    sort(T,T+n,cos);

    for (int i=1;i<n;i++) {
        if (T[i].second!=T[i-1].second) {
            break;
        }
        l++;
    }

    for (int i=0;i<l;i++) {
        cout<<T[i].first<<endl;
    }
}
