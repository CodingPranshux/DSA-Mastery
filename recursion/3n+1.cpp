#include <bits/stdc++.h>
using namespace std;

long long seq(long long n) {
    if (n == 1) return 1;

    if (n % 2 == 0)
        return 1 + seq(n / 2);
    else
        return 1 + seq(3 * n + 1);
}

int main() {
    long long n;
    cin >> n;
    cout << seq(n);
    return 0;
}
