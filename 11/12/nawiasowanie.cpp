#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    stack<int> stos;
    
    stos.push(34); // dodaj na stos liczbę 24
    stos.pop(); // sciagnij ostatnia liczbe ze stosu
    stos.top(); // zwraca ostatnia wartoc na stosie;
    stos.size();

    queue<int> kolejka; 
    kolejka.front(); // pierwszy element na kolejce
    return 0;
}