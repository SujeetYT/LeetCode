#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int minAvg = INT_MAX, avg1, avg2, avg;
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++){
            for(int j = nums.size(); j > 0; j--){
                avg1 += nums[i];
                avg1 /= i+1;
                avg2 += nums[j];
                avg2 /= j-1;
                avg = avg1 - avg2;
                arr.push_back(abs(avg));
            }
        }
        for(int k = 0; k < arr.size(); k++){
            if(minAvg < arr[k])
                minAvg = arr[k];
        }
        return minAvg;
    }
};

int main(){
    vector<int> nums = {2,5,3,9,5,3};
    Solution obj;
    cout<<obj.minimumAverageDifference(nums);
    return 0;
}