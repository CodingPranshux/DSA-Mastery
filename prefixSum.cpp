class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixIndex;
          int count=0, sum=0;
          prefixIndex[0]=1;
          for(int num:nums){
             sum +=num;       //prefix array build up
          
          if(prefixIndex.find(sum-k)!=prefixIndex.end()){
            count+=prefixIndex[sum-k]; //key hai sum-k uski value store krwa rhe hai hum         //unt+=prefixIndex[sum];
            
          }
          prefixIndex[sum]++;   //we are stoRing our current prefix sum in hashtable        //wrong prefixIndex[sum++]
          }
          return count; 

    }
};