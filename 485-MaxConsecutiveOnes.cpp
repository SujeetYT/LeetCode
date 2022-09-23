#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
                if(maxcnt < cnt) maxcnt = cnt;
            }
            else cnt = 0;
        }
        return maxcnt;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    vector<int>nums = {1,0,1,1,0,1};
    Solution obj;
    cout<<obj.findMaxConsecutiveOnes(nums);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}