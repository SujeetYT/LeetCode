#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        
        for(int i = 0, j = 0; i < nums.size() && j < nums.size(); i++, j++){
            while(nums[i] < 0){
                i++;
            }
            ans.push_back(nums[i]);
            
            while(nums[j] > 0){
                j++;
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};

void solve(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    Solution obj;
    obj.rearrangeArray(nums);
    for(auto &a: nums) cout<<a<<" ";
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