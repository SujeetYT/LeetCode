#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v = {-1, -1};
        int j = nums.size()-1;
        for(int i = 0; i < nums.size(); i++){
            if(target == nums[i]){
                v[0] = i;
                break;
            }
        }
        for(int i = nums.size()-1; i >= 0; i--){
            if(target == nums[i]){
                v[1] = i;
                break;
            }
        }
        return v;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int target = 8;
    vector<int> nums = {5,7,7,8,8,10};
    Solution obj;
    vector<int> v = obj.searchRange(nums, target);
    for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";

    return 0;
}