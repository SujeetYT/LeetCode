#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        // int minE = INT_MAX;
        vector<int>ans, finalAns;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                ans.push_back(*min_element(matrix[i].begin(), matrix[i].end()));
            }
        }
        sort(ans.begin(), ans.end());
        // cout<<ans[ans.size()-1]<<endl;
        // for(auto a: ans){
        //     cout<<a<<" ";
        // }
        finalAns.push_back(ans[ans.size()-1]);
        return finalAns;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>>matrix = {{1,10,4,2},{9,3,8,7},{15,16,17,12}};
    Solution obj;
    vector<int>ans = obj.luckyNumbers(matrix);
    cout<<ans[0]<<endl;
    return 0;
}