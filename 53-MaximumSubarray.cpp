#include<bits/stdc++.h>
using namespace std;
// Using Kadane's Algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int curSum = 0;
        for(int i = 0; i < n; i++){
            curSum += nums[i];
            if(maxSum < curSum){
                maxSum = curSum;
            }
            if(curSum < 0){
                curSum = 0;
            }
        }
        return maxSum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    cout<<obj.maxSubArray(nums);
    return 0;
}