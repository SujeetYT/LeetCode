#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    set<vector<int>>res;
    void subsets(vector<int>&nums, int i, vector<int> temp = {}){
        if(i >= nums.size()){
            sort(temp.begin(), temp.end());
            res.insert(temp);
            return;
        }
        // take the current element
        temp.push_back(nums[i]);
        subsets(nums, i+1, temp);
        // Not take the current element
        temp.pop_back();
        subsets(nums, i+1, temp);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        subsets(nums, 0);
        vector<vector<int>>ans;
        for(auto a : res){
            ans.push_back(a);
        }
        return ans;
    }
};

void solve(){
    vector<int>nums = {4,1,0};
    Solution obj;
    vector<vector<int>>ans = obj.subsetsWithDup(nums);
    for(auto a: ans){
        for(auto b : a){
            cout<<b<<" ";
        }
        if(a.size() == 0) cout<<"{}";
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