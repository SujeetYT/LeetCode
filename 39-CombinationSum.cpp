#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    void combinations(int i, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>ds={}){
        if(i == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i] <= target){
            ds.push_back(arr[i]);
            combinations(i, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }

        combinations(i+1, target, arr, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        combinations(0, target, candidates, ans);
        return ans;
    }
};

void solve(){
    vector<int>candidates = {2,3,6,7};
    int target = 7;
    Solution obj;
    vector<vector<int>> ans = obj.combinationSum(candidates, target);

    for(auto b : ans){
        for(auto a : b) cout<<a<<" ";
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