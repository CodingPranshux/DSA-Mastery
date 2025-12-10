const int mod=1e9+7;
class Solution {
public:
    int countPermutations(vector<int> &nums){
        long long n=nums.size(), ans=1;
        for(int i=1;i<n;i++) if(nums[i]<=nums[0]) return 0;
        for(int i=2;i<n;i++) ans=(ans*i)%mod;
        return ans;
    }
};