#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    void combination(int i, int t, vector<int>&arr, set<vector<int>>&ans, vector<int>ds={}){
        if(i >= arr.size()){
            if(t == 0){
                ans.insert(ds);
            }
            return;
        }

        if(arr[i] <= t){
            ds.push_back(arr[i]);
            combination(i+1, t-arr[i], arr, ans, ds);
            ds.pop_back();
        }
        combination(i+1, t, arr, ans, ds);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>>res;
        combination(0, target, candidates, res);
        vector<vector<int>>ans;
        for(auto a: res) ans.push_back(a);
        return ans;
    }
};

void solve(){
    vector<int>candidates = {10,1,2,7,6,1,5};
    int target = 8;
    Solution obj;
    vector<vector<int>> ans = obj.combinationSum2(candidates, target);

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