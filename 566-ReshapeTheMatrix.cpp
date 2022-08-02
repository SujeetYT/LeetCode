#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans(r, vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();

        if(m*n != r*c) return mat;

        int row = 0, col = 0;
        for(int i=0; i < m; i++){
            for(int j = 0; j< n; j++){
                if(col == c){
                    row++;
                    col = 0;
                }
                ans[row][col++] = mat[i][j];
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<vector<int>>ans {{1,2},{3,4}};
    int r = 1, c = 4;
    Solution obj;
    vector<vector<int>>v = obj.matrixReshape(ans, r, c);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}