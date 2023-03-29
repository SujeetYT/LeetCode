#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;

        unordered_map<int, int>mp;
        mp[0]++;
        for(auto a : nums){
            sum += a;
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }

            mp[sum]++;
        }
        return count;
    }
};

void solve(){
    Solution obj;
    int k = 3;
    vector<int>nums = {1,2,3};
    cout<<obj.subarraySum(nums, k);
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