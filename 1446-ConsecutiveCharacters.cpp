#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int start = 0, end = 0;
        int maxcnt = 0, cnt = 0;
        while(end < s.length()){
            // cout<<start<<" "<<end<<"\n";
            // cout<<s[start]<<" "<<s[end]<<"\n";

            if(s[start] == s[end]){
                cnt++;
                end++;
            }else{
                start = end;
                cnt = 0;
            }
            if(maxcnt <= cnt) maxcnt = cnt;
            // cout<<maxcnt<<" "<<cnt<<"\n\n";
        }
        return maxcnt;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    string s = "abbcccddddeeeeedcba";
    Solution obj;
    cout<<obj.maxPower(s);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}