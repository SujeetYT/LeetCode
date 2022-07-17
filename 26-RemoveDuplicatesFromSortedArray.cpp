#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int posCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != nums[i+1]){
                nums[posCount] = nums[i];
                posCount++;
            }
        }
        return posCount;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    // vector<int> nums = {1,1,2};
    cout<<obj.removeDuplicates(nums)<<endl;    
    return 0;
}