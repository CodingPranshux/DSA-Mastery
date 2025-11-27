#include <vector>
using namespace std;
#include <iostream>

class Solution {
public:
    int largestElement(vector<int>& nums,int n){
        int largest=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>largest)
            largest=nums[i];
        }
        
        return largest;

    }    
};
int main() {
    int n;
    
    cin>>n;
    
    vector<int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution sol;
    int largest=sol.largestElement(nums,n);
    cout<<"the largest element is"<<largest;
    return 0;
}




    /*int secondLargestElement(vector<int>& nums,int n){
        int largest=nums[0];
        int secondLargest=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                secondLargest=largest;
                largest=nums[i];
            }
            else if(nums[i]>secondLargest && nums[i]!=largest){
                secondLargest=nums[i];
            }
        }
        return secondLargest;
    }*/
