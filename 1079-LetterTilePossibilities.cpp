#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
// level is used to maintain substring length
    void backtrack(string tiles, int level, int &count)
    {
        count++;
        for(int i = level; i < tiles.size(); i++)
        {
            // to avoid repeating characters
            bool a = i != level;
            bool b = tiles[i] == tiles[level];
            if(a and b)
                continue;
            swap(tiles[i], tiles[level]);
            backtrack(tiles, level + 1, count);
        }
    }
    int numTilePossibilities(string tiles) {
        int count = -1;
        sort(tiles.begin(), tiles.end());
        backtrack(tiles, 0, count);
        return count;
    }
};

void solve(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.numTilePossibilities(s)<<endl;
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