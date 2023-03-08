#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length(), n = needle.length();

        if(n == 0) return 0;
        if(n == 1 && m == 1) return 0;
        if(m == 0 || m < n) return -1;

        for(int i = 0; i <= (m-n); i++){
            cout<<haystack.substr(i, n)<<" "<<needle<<endl;
            if(haystack.substr(i, n) == needle){
                return i;
            }
        }
         return -1;
    }
};

void solve(){
    string haystack, needle;
    cin>>haystack>>needle;
    Solution s;
    cout<<s.strStr(haystack, needle)<<endl;
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