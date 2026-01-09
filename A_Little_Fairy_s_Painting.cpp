#include <bits/stdc++.h>
using namespace std;
#include<cmath>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;

        set<long long>s;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        cout<<*s.lower_bound(s.size())<<endl;}
    return 0;
}
