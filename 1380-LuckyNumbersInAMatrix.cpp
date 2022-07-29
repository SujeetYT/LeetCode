#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        // int minE = INT_MAX;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>ans;
        for(int i = 0; i < m; i++){
            int maxCol = INT_MIN, minRow = INT_MAX, idx = -1;
            for(int j = 0; j < n; j++){
                if(matrix[i][j] < minRow){
                    minRow = matrix[i][j];
                    idx = j;
                }
            }

            maxCol = minRow;
            ans.push_back(maxCol);

            for(int k = 0; k < m; k++){
                if(matrix[k][idx] > maxCol){
                    ans.pop_back();
                    break;
                }
            }
        }
        return ans;
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