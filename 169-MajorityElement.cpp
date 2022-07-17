#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        // pair<int, int>p;
        for(auto a : nums){
            m[a]++;
        }
        int ans = 0;
        int itr = 0;
        cout<<m.size()<<endl;
        for(auto a : m){
            if(a.second > itr){
                ans = a.first;
                itr = a.second;
            }
        }
        for(auto a : m){
            cout<<a.first<<" "<<a.second<<endl;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {3,3,4};
    Solution obj;
    cout<<obj.majorityElement(nums);

    return 0;
}