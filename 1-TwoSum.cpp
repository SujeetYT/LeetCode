#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            if(mp.find(rem) != mp.end()){
                ans.push_back(mp[rem]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution obj;
    vector<int>ans = obj.twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}