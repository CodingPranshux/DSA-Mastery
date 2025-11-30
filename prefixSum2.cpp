class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
         unordered_map<int, int> remainderCount;
        long long total = 0, count = 0;
        remainderCount[0] = -1; 
        int n = nums.size();
         // Base case: remainder 0
        for(int x:nums){
             total +=x;                         

        }
        int target=(total)%p;
        if(target==0) return 0;
        
        long long sum=0;
        int minLen = n + 1;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            
           
            
            
            // Calculate remainder
            int remainder = sum % p;
            
            
            // Handle negative remainders
            if(remainder < 0) {
                remainder += p;
            }
            int need=remainder-target;
            if(need<0){
                need+=p;
            }
            
         
            if(remainderCount.find(need) != remainderCount.end()) {
               int len=i-remainderCount[need];
               if(len<minLen) minLen=len;
               
            }
            
            remainderCount[remainder]=i;
           
        }
        if(minLen==n+1||minLen==n) return -1;
        
        return minLen;
    }
        
    
};