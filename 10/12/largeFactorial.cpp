#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int fact_range(int l, int r) {
    if (l > r) return 1;
    if (l == r) return l;
    if (r - l == 1) return cpp_int(l) * r;
    int m = (l + r) / 2;
    return fact_range(l, m) * fact_range(m + 1, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cpp_int result = fact_range(1, n);
    cout << result << "\n";
    return 0;
}
