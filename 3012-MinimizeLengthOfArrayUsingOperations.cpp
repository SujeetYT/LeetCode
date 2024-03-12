#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
  int minimumArrayLength(vector<int>& nums) {
    while (true) {
        bool found = false;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] > 0 && nums[j] > 0) {
                    int remainder = nums[i] % nums[j];
                    nums.push_back(remainder);
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) break;
    }
    return nums.size();
  }
};

void solve(){
    Solution s;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<s.minimumArrayLength(nums);
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