#include <iostream>
#include <deque>
#include <queue>
using namespace std;

deque<pair<int,int>> T;

int maks(){
    return T.front().first;
}
void zdejmij(){
    if (T.front().second==0) {
        T.pop_front();
    } else{
        T.front().second-=1;
    }
}
void dodaj(int element){
    int oczek = 0;
    while (p < k && element>=T[k-1].first) {
        oczek+=T[k-1].second+1;
        k--;
    }
    T[k] = make_pair(element, oczek);
    k++;
}

int main() {

    return 0;
}