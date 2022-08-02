#include<bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>>&ans){
    int m = ans.size();
    int n = ans[0].size();
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        for(int i = 0; i < numRows; i++){
            ans[i].resize(i+1);
            ans[i][0] = 1;
            ans[i][i] = 1;
            for(int j = 1; j < i; j++){
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        } 
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 5;
    Solution obj;
    vector<vector<int>>ans = obj.generate(n);
    printMatrix(ans);
    return 0;
}