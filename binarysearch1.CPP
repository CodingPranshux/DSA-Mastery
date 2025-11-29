class Solution {
public:

    long long daysCalculate(vector<int>& weights, int cap){
            int n=weights.size();
            long long days=1;
            
            int weigh=0;
            for(int i=0;i<n;i++){
                int x= weigh + weights[i];
                if(x>cap){   // agar ek ooutput zyaada hai uska matlab hai ki ek day extra count kr liya hai 
                    ++days;
                    weigh=weights[i];
                }else {
                   weigh=x;}  ///try what happens when we do weigh=x or x or weigh here
                
        }return days; 
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int high=accumulate(weights.begin(),weights.end(),0ll);
        
        int low=*max_element(weights.begin(),weights.end());//use *max_element  instead of *max
        while(low<high){
            int n=weights.size();
            
            int mid=low+(high-low)/2;
            if(daysCalculate(weights,mid)<=days){
                high=mid;
            }else low=mid+1;

        }return high;
        
    }
};