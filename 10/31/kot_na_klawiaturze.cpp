#include <iostream>

using namespace std;


char jakiWiersz[255];

void zmapujLitery() {
    jakiWiersz['A'] = '3';
    jakiWiersz['B'] = '4';
    jakiWiersz['C'] = '4';
    jakiWiersz['D'] = '3';
    jakiWiersz['E'] = '2';
}


int main() {
    string napis = "ABCDE";

    zmapujLitery();

    for (int i = 0; i < napis.size();i++) {
        char litera = napis[i];

        cout << jakiWiersz[litera];
    }

    return 0;
}