#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Time : O(N), Space : O(N)
        // unordered_map<int, int> m;
        // for(auto a : nums){
        //     m[a]++;
        // }
        // for(auto a : m){
        //     if(a.second > 1) 
        //         return 1;
        // }

        
        // Time : O(N), Space : O(N)
        unordered_set<int> sets;
        for(auto a : nums) sets.insert(a);
        if(sets.size() == nums.size()) return false;

        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // vector<int> nums ={1,2,3,1};
    vector<int> nums ={1,2,3,4};
    // vector<int> nums ={1,1,1,3,3,4,3,2,4,2};
    Solution obj;
    // obj.containsDuplicate(nums);
    cout<<obj.containsDuplicate(nums);

    return 0;
}