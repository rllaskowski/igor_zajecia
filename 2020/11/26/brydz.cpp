#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;

    cin>>n;
    string podane[n];
    for (int i=0;i<n;i++) {
        cin>>podane[i];
        sort(podane[i].begin(), podane[i].end());
    }

    sort(podane, podane+n);


    return 0;
}