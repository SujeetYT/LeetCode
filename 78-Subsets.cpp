#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
    vector<vector<int>>ans;

    void helper(vector<int>&nums, vector<int>temp, int i){
        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }
        helper(nums, temp, i+1);

        temp.push_back(nums[i]);
        helper(nums, temp, i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        helper(nums, temp, 0);
        return ans;
    }
};

void solve(){
    vector<int>nums = {1,2,3};
    // int size; cin>>size;
    // vector<int>nums(size);
    // for(int i = 0; i < size; i++){
    //     cin>>nums[i];
    // }

    Solution obj;
    vector<vector<int>>ans = obj.subsets(nums);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}