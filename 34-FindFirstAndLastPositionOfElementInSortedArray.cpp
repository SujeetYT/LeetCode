#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size() -1;
        int mid = s + (e - s)/2;
        vector<int>ans = {-1, -1};
        
        // first index
        while(s <= e){
            if(target == nums[mid]){
                ans[0] = mid;
                e = mid - 1;
            }else if(target < nums[mid]){
                e = mid - 1;                
            }else if(target > nums[mid]){
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }

        // last index
        s = 0, e = nums.size() -1; // reseting the
        mid = s + (e - s)/2;         // values
        
        while(s <= e){
            if(target == nums[mid]){
                ans[1] = mid;
                s = mid + 1;
            }else if(target < nums[mid]){
                e = mid - 1;                
            }else if(target > nums[mid]){
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>nums = {5,7,7,8,8,10};
    int target = 8;
    Solution obj;
    vector<int>ans = obj.searchRange(nums, target);
    cout<<ans[0]<<" "<<ans[1];

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}