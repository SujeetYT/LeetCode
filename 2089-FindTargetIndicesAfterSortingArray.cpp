#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        // 1 2 2 3 5
        
        int start = 0;
        int end = nums.size()-1;
               
        vector<int> ans;
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target){
                // cout<<mid<<" "<<mid+1<<" "<<mid-1<<"\n";
                ans.push_back(mid);
                // cout<<mid<<" "<<nums[mid]<<"\n";

                if((mid+1) < (nums.size())){
                    if(nums[mid + 1] == target) ans.push_back(mid+1);
                    // cout<<mid+1<<" "<<nums[mid+1]<<"\n";
                }
                if((mid - 1) >= 0){
                    // cout<<mid-1<<" "<<nums[mid-1]<<"\n";
                    if(nums[mid - 1] == target) ans.push_back(mid-1);
                }
                break;
            }
            if(nums[mid] > target){
                end = mid - 1;
            }
            if(nums[mid] < target){
                start = mid + 1;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>nums = {1,2,5,2,3};
    int target = 3;
    Solution obj;
    vector<int>ans = obj.targetIndices(nums, target);
    for(auto a : ans) cout<<a<<" ";

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}