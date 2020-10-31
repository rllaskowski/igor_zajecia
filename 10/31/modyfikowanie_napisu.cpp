#include <iostream>

using namespace std;

/*
przykladowyNapis = "abcde";
len = 3

tekst[200] = {'a', 'b', 'c', 'd', 'e', . . . .. .. . .}
*/

int main() {
    char tekst[200];

    string poczatkowyNapis;
    cin >> poczatkowyNapis;

    int len = poczatkowyNapis.size();

    for (int i = 0; i < poczatkowyNapis.size(); i++) {
        tekst[i] = poczatkowyNapis[i];
    }

    len -= 2;
    
    return 0;
}