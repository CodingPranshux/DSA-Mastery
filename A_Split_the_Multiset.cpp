#include<bits/stdc++.h>
using namespace std;
#include<cmath>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        double result=ceil((n-1)/(1.0*(k-1)));
        cout<<(int)result<<"\n";
    }
     return 0;
}