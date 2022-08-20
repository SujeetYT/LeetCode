#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int half = nums.size()/2;
        for(int i = 0; i < half; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[half+i]);
        }
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    Solution obj;
    vector<int>ans = obj.shuffle(nums, n);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}