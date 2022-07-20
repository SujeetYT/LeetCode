#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        double res;
        
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        
        res = sum;
        for(int i = k; i < nums.size(); i++){
            sum -= nums[i-k];
            sum += nums[i];
            if(sum > res) res = sum;
        }
        return res/k;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k = 4;
    vector<int> nums = {1,12,-5,-6,50,3};
    Solution obj;
    cout<<obj.findMaxAverage(nums, k);
    return 0;
}