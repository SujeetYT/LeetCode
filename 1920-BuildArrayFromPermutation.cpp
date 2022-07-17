#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> n;
        for(int i = 0; i < nums.size(); i++){
            n.push_back(nums[nums[i]]);
        }
        
        return n;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {0,2,1,5,3,4};

    Solution obj;
    vector<int>n = obj.buildArray(nums);
    for(auto &a : n){
        cout<<a<<" ";
    }
    return 0;
}