#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        long long d1 = x1 - y1;
        long long d2 = x2 - y2;

        
        if ((d1 > 0 && d2 > 0) || (d1 < 0 && d2 < 0)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
