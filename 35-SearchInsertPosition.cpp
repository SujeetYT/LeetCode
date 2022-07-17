#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() -1, mid = low + (high -low)/2;

        while(low <= high){
            if(target == nums[mid]){
                return mid;
            }
            
            if(target >= nums[mid])
                low = mid+1;
            else high = mid-1;

            mid = (low+high)/2;
        } 
        int np = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target) np++;
        }
        return np;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int key = 2;
    vector<int> nums = {1,3,5,6};
    Solution obj;
    cout<<obj.searchInsert(nums, key);

    return 0;
}