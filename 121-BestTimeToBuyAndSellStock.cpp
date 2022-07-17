#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int minPrice = INT_MAX;
            int maxPrice = 0;
            for(int i = 0; i < prices.size(); i++){
                minPrice = min(minPrice, prices[i]);
                maxPrice = max(maxPrice, prices[i] - minPrice);
            }
            return maxPrice;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>nums = {2, 4, 1};
    Solution obj;
    cout<<obj.maxProfit(nums);
    return 0;
}