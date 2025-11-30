//Continous SubarraySum
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        

        unordered_map<int, int> remainderCount;
        int sum = 0, count = 0;
        remainderCount[0] = -1; 
         // Base case: remainder 0
        
        if(nums.size()<2) return false;
        
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            
           
            
            
            // Calculate remainder
            int remainder = sum % k;
            
            // Handle negative remainders
            if(remainder < 0) {
                remainder += k;
            }
            
            // Check if this remainder exists
            if(remainderCount.find(remainder) != remainderCount.end()) {
               int len=i-remainderCount[remainder];
               if(len>=2) return true;
            }
            else{
                remainderCount[remainder]=i;}  //this was the turning point of my code.
            
            // Store current remainder in the map
           
        }
        
        
        return false;
    }
};
   