#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;


int main() {
    map<string, int> oceny;
    unordered_map<long long, int> x;

    oceny["Igor"] = 6;
    oceny["Robert"] = 2;


    map<int, int> ileRazy;

    ileRazy[3] = 1000;
    ileRazy[10000000] = 10009;
    ileRazy[-3] = 10000;

    return 0;
}