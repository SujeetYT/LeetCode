#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left(n);
        vector<int> right(n);
        left[0] = 1;
        for(int i=1; i<n; i++){
            left[i] = left[i-1] * nums[i-1];
        }
        right[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            right[i] = right[i+1] * nums[i+1];
        }
        // for(auto a : left) cout<<a<<" ";
        // cout<<endl;
        // for(auto a : right) cout<<a<<" ";
        // cout<<endl;

        for(int i=0; i<n; i++){
            ans[i] = left[i] * right[i];
        }
        return ans;
    }
};

void solve(){
    vector<int>nums = {1,2,3,4};
    Solution s;
    nums = s.productExceptSelf(nums);
    for(auto a : nums){
        cout<<a<<" ";
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