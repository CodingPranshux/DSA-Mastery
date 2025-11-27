#include <vector>
#include <iostream>
#include <climits>
using namespace std;
 class Solution{
    public:
        int secondLargestElement(vector<int>& nums, int n) {
            int largest = INT_MIN;
            int secondLargest = INT_MIN;
            
            for (int i = 0; i < n; i++) {
                if (nums[i] > largest) {
                    secondLargest = largest;
                    largest = nums[i];
                } else if (nums[i] > secondLargest && nums[i] != largest) {
                    secondLargest = nums[i];
                }
            }
            if (secondLargest ==INT_MIN){
                cout<<"THERE WAS NO SECOND LARGEST ELEMENT";
                return -1;
            }
            return secondLargest;
        }
  

        
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for( int i=0;i<n;i++){
        cin>>nums[i];

    }
    Solution sol;
    int secondLargest =sol.secondLargestElement(nums,n)
;
    cout<<"the second largest element is "<<secondLargest;
    return 0;
}