#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>

class Solution{
    public:
    int arraySorted(vector<int>&nums,int n){
        for(int i=0;i<n;i++){
            nums[i]<nums[i-1];
            
        }
    
    }
}