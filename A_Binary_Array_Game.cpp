#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        if(arr[0]==0 && arr[n-1]==0){
        cout<<"Bob\n";
    }else{cout<<"Alice\n";}

    
    }
    return 0;

}