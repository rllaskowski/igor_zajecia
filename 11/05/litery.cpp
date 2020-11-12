#include <iostream>

using namespace std;

bool palindrom(string s){
    int T[26] = {};
    int dlugosc,niep=0;
    char zn;

    dlugosc=s.size();
    for(int i=0;i<dlugosc;i++){
        zn=s[i]-'A';
        T[zn]++;
    }
    for(int i=0;i<26;i++){
        if(T[i]%2==1){
            niep++;
            if(niep>1){
                return false;
            }
        }
    }
    return true;
}

int main() {

    return 0;
}