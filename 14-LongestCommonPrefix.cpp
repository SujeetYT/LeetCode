#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(str), end(str));
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans.push_back(a[i]);
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};

void solve(){
    vector<string> str;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        str.push_back(s);
    }

    Solution obj;
    cout<<obj.longestCommonPrefix(str)<<endl;
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
