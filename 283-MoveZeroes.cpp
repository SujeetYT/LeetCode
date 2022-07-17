#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = 0;
        while(l < nums.size()){
            if(nums[l] != 0){
                swap(nums[l], nums[r]);
                r++;
            }
            l++;
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {0, 0, 1};
    Solution obj;
    obj.moveZeroes(nums);
    for(int i = 0; i < nums.size(); i++) cout<<nums[i]<<" ";
    return 0;
}