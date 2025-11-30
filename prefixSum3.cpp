//NICE SUBARRAYS
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>niceSub;
        int count=0,sum=0;
        niceSub[0]=1;

        for(int n:nums){
            sum+=(n%2);
        
        if(niceSub.find(sum-k)!=niceSub.end()){
            count+=niceSub[sum-k];//I did count+=1 which is wrong and luck based

        }
        niceSub[sum]++;
        }
        return count; 
    }
};