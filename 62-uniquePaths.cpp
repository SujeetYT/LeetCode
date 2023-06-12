#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
    int dp[101][101];
public:
    Solution(){
        memset(dp, 0, 101*101);
    }

    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        if(i >= m || j >= n) return 0;                                    // reached out of bounds - invalid
        if(i == m-1 && j == n-1) return 1;  
        if(dp[i][j]) return dp[i][j];                              // reached the destination - valid solution
        return dp[i][j] = uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1);     // try both down and right
    }
    // void f(int i, int j, vector<string>& matrix, int& cnt){
    //     if(i >= matrix.size() or j >= matrix[i].size()) return;
        
    //     if(matrix[i][j] == 'x'){
    //         cnt++;
    //         return;
    //     }

    //     // right
    //     f(i, j+1, matrix, cnt);
    //     //down
    //     f(i+1, j, matrix, cnt);
    // }

    // int uniquePaths(int m, int n) {
    //     vector<string>matrix;
    //     string s(n, '.');
    //     for(int i = 0; i < m; i++){
    //         matrix.push_back(s);
    //     }
    //     matrix[m-1][n-1] = 'x';
    //     int cnt = 0;
    //     // for (auto &i : matrix) cout<<i<<endl;
    //     f(0, 0, matrix, cnt);
        
    //     return cnt;
    // }
};

void solve(){
    int m, n;
    cin>>m>>n;
    Solution obj;
    cout<<obj.uniquePaths(m,n);
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