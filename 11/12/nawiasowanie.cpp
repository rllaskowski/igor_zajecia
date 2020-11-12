#include <iostream>
#include <stack>

using namespace std;

/*
Typy nawiasów
( < [ {
*/

bool czyPoprawne(string s) {
    // sprawdza s jest poprawnym nawiasowaniem
    stack<char> nawiasy;

    for (int i=0;i<s.size();i++) {
        if (s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<') {
            nawiasy.push(s[i]);
        } else if (nawiasy.size()==0) {
            return false;
        } else {
            if (s[i]==')'&&nawiasy.top()!='(') {
                return false;
            }

            if (s[i]=='>'&&nawiasy.top()!='<') {
                return false;
            }
            if (s[i]==']'&&nawiasy.top()!='[') {
                return false;
            }
            if (s[i]=='}'&&nawiasy.top()!='{') {
                return false;
            }

            nawiasy.pop();
        }
    }
    if (nawiasy.size()!=0) {
        return false;
    } else{
        return true;
    }
    
}

int main() {
    int n, dlugosc;
    string s;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;

        if (czyPoprawne(s)) {
            cout<<"TAK" << endl;
        } else {
            cout << "NIE" << endl;
        }
    }

    return 0;
}