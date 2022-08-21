#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rowStart = 0, colStart = 0, rowEnd = matrix.size()-1, colEnd = matrix[0].size()-1;
        while(rowStart <= rowEnd && colStart <= colEnd){
            // colStart = rowStart;
            for(int col = colStart; col <= colEnd; col++){
            // cout<<"-"<<rowStart<<" "<<col<<"-"<<endl;
                ans.push_back(matrix[rowStart][col]);
                // cout<<matrix[rowStart][col]<<" ";
            }
            rowStart++;
            // colStart++;

            // cout<<"\n";
            for(int row = rowStart; row <= rowEnd; row++){
            // cout<<"-"<<row<<" "<<colEnd<<"-"<<endl;
                ans.push_back(matrix[row][colEnd]);
                // cout<<matrix[row][colEnd]<<" ";
            }
            colEnd--;

            // cout<<"\n";
            if(rowStart <= rowEnd){
                for(int col = colEnd; col >= colStart; col--){
                // cout<<"-"<<rowEnd<<" "<<col<<"-"<<endl;
                // cout<<"working...."<<endl;
                    ans.push_back(matrix[rowEnd][col]);
                    // cout<<matrix[rowEnd][col]<<" ";
                }
                rowEnd--;
            }
            
            // cout<<"\n";
            if(colStart <= colEnd){
                for(int row = rowEnd; row >= rowStart; row--){
                // cout<<"-"<<row<<" "<<colStart<<"-"<<endl;
                    ans.push_back(matrix[row][colStart]);
                    // cout<<matrix[row][colStart]<<" ";
                }
                colStart++;
            }
            // cout<<"\n"; 

        }
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>>matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}/*,{13,14,15,16}*/};
    // vector<vector<int>>matrix = {{1,5,7,9,10,11},{6,10,12,13,20,21},{9,25,29,30,32,41},{40,70,79,81,95,105}};
    Solution obj;
    vector<int>spiralMatrix = obj.spiralOrder(matrix);
    for(auto a : spiralMatrix){
        cout<<a<<" ";
    }

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}