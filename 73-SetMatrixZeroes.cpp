#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void setZeroes(vector<vector<int>>& matrix){
            int row = matrix.size();
            int col = matrix[1].size();

             // right
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    if(matrix[i][j] == 0){
                        //right
                        int indx = j+1;
                        while(indx < col){
                            if(matrix[i][indx] != 0){
                                matrix[i][indx] = -1;
                            }
                            indx++;
                        }
                        
                        // left
                        indx = j-1;
                        while(indx >= 0){
                            if(matrix[i][indx] != 0){
                                matrix[i][indx] = -1;
                            }
                            indx--;
                        }

                        // top
                        indx = i-1;
                        while(indx >= 0){
                            if(matrix[indx][j] != 0){
                                matrix[indx][j] = -1;
                            }
                            indx--; 
                        }
                        
                        // bottom
                        indx = i+1;
                        while(indx < row){
                            if(matrix[indx][j] != 0){
                                matrix[indx][j] = -1;                                
                            }
                            indx++;
                        }
                    }
                }
            }
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    if(matrix[i][j] <= 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
};

int main(){
    Solution obj;
    vector<vector<int>> mtrx = {{7, 9, 3},{4, 21, 0}};
    obj.setZeroes(mtrx);
    for(int i = 0; i < mtrx.size(); i++){
        for(int j = 0; j < mtrx[1].size(); j++){
            cout<<mtrx[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}