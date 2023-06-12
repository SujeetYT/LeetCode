#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    bool sol(int i, int j, int k, vector<vector<char>>& board, string& word){
        if(k == word.size()){
            return true;
        }

        if(i < 0 || j < 0 || i == board.size() || j == board[i].size() || board[i][j] != word[k] || board[i][j] == '!'){
            return false;
        }

        char c = board[i][j];
        board[i][j] = '!';

        bool right = sol(i, j+1, k+1, board, word); // right
        bool down = sol(i+1, j, k+1, board, word); // down
        bool left = sol(i, j-1, k+1, board, word); // left
        bool top = sol(i-1, j, k+1, board, word); // top
        
        board[i][j] = c;

        return top || down || left || right;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int idx = 0;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(sol(i, j, idx, board, word)){
                    return true;
                }
            }
        }

        return false;
    }
};

void solve(){
    vector<vector<char>>board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    Solution obj;
    
    (obj.exist(board, word))? cout<<"True"<<endl:cout<<"False"<<endl;
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