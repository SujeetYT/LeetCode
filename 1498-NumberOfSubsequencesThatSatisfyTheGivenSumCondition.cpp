#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void subS(vector<int>&nums, int i, int target, vector<int>ds = {}){
        if(i >= nums.size()){
            auto mini = min_element(ds.begin(), ds.end());
            auto maxi = max_element(ds.begin(), ds.end());
            if((*mini+ *maxi) == target){
                cout<<*mini<<" "<<*maxi<<" - ";
                for(auto a: ds) cout<<a<<" ";
                ans.push_back(ds);
            }
            return;
        }

        //Pick
        ds.push_back(nums[i]);
        subS(nums, i+1, target, ds);

        //Not Pick
        nums.pop_back();
        subS(nums, i+1, target, ds);
    }

    int numSubseq(vector<int>& nums, int target) {
        subS(nums, 0, target);
        return ans.size();
    }
};

void solve(){
    vector<int>nums = {3,5,6,7};
    int target = 9;

    Solution obj;
    cout<<obj.numSubseq(nums, target);

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