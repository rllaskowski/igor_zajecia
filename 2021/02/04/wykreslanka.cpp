#include <iostream>
#include <set>

using namespace std;

set<int> wyst[1000001];

int main() {
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        wyst[x].insert(i);
    }

    int t, d;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> d;
        int gdzie = 0;
        bool wyn = true;

        for (int j = 0; j < d; j++) {
            cin >> x;
            auto it = wyst[x].lower_bound(gdzie);

            if (it != wyst[x].end()) {
                gdzie = *it+1;
            } else {
                wyn = false;
            }
        }

        if (wyn) {
            cout << "TAK" << endl;
        } else {
            cout << "NIE" << endl;
        }
    }
    return 0;
}