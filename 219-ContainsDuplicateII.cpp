#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // brute force O(n^2)
        // bool ans = false;
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(nums[i] == nums[j] && abs(i-j) <= k){
        //             return true;
        //         }
        //     }
        // }
        // return ans;

// Better Approach O(NLogN)
        int n = nums.size();
        //making vector pair
        vector<pair<int, int>>arr(n);
        for(int i=0;i<n;i++){
            arr[i].first = nums[i];
            arr[i].second = i;
        }

        sort(arr.begin(), arr.end());
// comparing adjacent element and finding absolute value
        for(int i=1;i<n;i++){
            if(arr[i].first == arr[i - 1].first && abs(arr[i].second - arr[i - 1].second) <= k){
                return true;
            }
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k = 2;
    vector<int> nums = {1,2,3,1,2,3};
    Solution obj;
    cout<<obj.containsNearbyDuplicate(nums, k);
    return 0;
}