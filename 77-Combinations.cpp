#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    void sol(int t, int n, int k, vector<vector<int>>&ans, vector<int>temp = {}){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }

        for(int i = t; i <= n; i++){
            temp.push_back(i);
            sol(i+1, n, k, ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        sol(1, n, k, ans);
        return ans;
    }
};

/**
n=1 2 3 4       k=2
[{1,2},{1,3},{1,4},{2,3},{2,4},{3,4}]

**/

void solve(){
    int n,k;
    cin>>n>>k;
    Solution obj;
    vector<vector<int>>ans = obj.combine(n,k);
    for(auto a: ans) cout<<a[0]<<" "<<a[1]<<"\n";
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