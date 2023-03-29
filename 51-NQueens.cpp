#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
    bool isSafe(int row, int col, vector<string>&board, int n){
        int dupRow = row;
        int dupCol = col;

        // checking upper left diagonal
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        // resetting row and col
        row = dupRow;
        col = dupCol;

        // checking left 
        while(col >= 0){
            if(board[row][col] == 'Q') return false;
            col--;
        }

        // resetting cow and col
        row = dupRow;
        col = dupCol;

        // checking lower left diagonal
        while(row < n && col >= 0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        return true;
    }
public:
    void sol(int col, int n, vector<string>&board, vector<vector<string>>&ans){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                sol(col+1, n, board, ans);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> nQueens(int n, vector<vector<string>>&ans) {
        vector<string>board(n);
        string s(n, '.');

        for(int i = 0; i < n; i++) board[i] = s;

        sol(0, n, board, ans);
        return ans;
    }
};

void solve(){
    int n;
    cin>>n;

    Solution obj;
    vector<vector<string>>ans;
    obj.nQueens(n, ans);

    for(auto b : ans){
        for(auto a: b){
            cout<<a<<"\n";
        }
        cout<<"\n\n";
    }
}

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}