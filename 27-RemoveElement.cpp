#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while(i < nums.size()){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                if(i == 0){
                    i = 0;
                }else{
                    i--;
                }
            }else{
                i++; 
            }
        }
        
        int ans = 0; 
        for(auto a : nums) {
            cout<<a<<" ";
            ans++;
        }
        cout<<endl;

        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {3,2,2,3};
    int val = 3;
    Solution obj;
    cout<<obj.removeElement(nums, val);
    return 0;
}