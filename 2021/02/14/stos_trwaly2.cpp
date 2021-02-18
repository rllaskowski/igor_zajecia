#include <iostream>
#include <vector>

using namespace std;


/*
9
+ 4
+ 7
+ 1
+ 2
-
* 3
-
* 2
-

*/

typedef struct {
    int val;
    int prev;
} node;

vector<node> t;
int history[1000000];

int main() {
    int n, x;
    char c;
    cin >> n;

    t.push_back({-1, -1});
    history[0] = 0;
    int now = 0;

    for (int i = 1; i <= n; i++) {
        cin >> c;

        if (c == '+') {
            cin >> x;
            t.push_back({x, now});
            now = t.size()-1;
        } else if (c == '-') {
            now = t[now].prev;
        } else {
            cin >> x;
            now = history[i-x-1];
        }
        cout << t[now].val << endl;
        history[i] = now;
    }

    return 0;
}