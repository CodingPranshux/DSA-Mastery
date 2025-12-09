const int mod=1e9+7;
class Solution {
public:
    int specialTriplets(vector<int> &nums){
        long long ans=0;
        map<long long, long long> pref, suff;
        for(int &val:nums) suff[val]++;
        for(int &val:nums){
            suff[val]--;
            ans=(ans+(pref[2*val]*suff[2*val])%mod)%mod;
            pref[val]++;
        }
        return ans;
    }
};