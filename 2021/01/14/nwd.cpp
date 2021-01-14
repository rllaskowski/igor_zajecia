#include <iostream>

using namespace std;

/*
a > b
nwd(a,b) = nwd(a, a-b)

*/

int nwd(int a, int b){
    if (a < b) {
        swap(a,b);
    }

    if (b==0) {
        return a;
    } else{
        return nwd(a%b,b);
    }
}

int main() {


    return 0;
}