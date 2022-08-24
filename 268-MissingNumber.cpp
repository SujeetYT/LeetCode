#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < nums.size()){
            if(nums[i] != i){
            cout<<nums[i]<<endl;
                return i;
            }
            i++;
        }
        return i;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {0,1};
    Solution obj;
    cout<<obj.missingNumber(nums);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<"\n\n\n"<<fixed<<time_taken<<setprecision(5);
    return 0;
}