#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i < s.length(); i++){
            bool lowerCase = (s[i] >= 'a' && s[i] <= 'z');
            bool upperCase = (s[i] >= 'A' && s[i] <= 'Z');
            bool numeric = (s[i] >= '0' && s[i] <= '9');
            if(lowerCase || upperCase || numeric){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    str.push_back(s[i] + 32);
                }else{
                    str.push_back(s[i]);
                }
            }
        }
        string revString = "";
        for(int i = str.length()-1; i >= 0; i--){
            revString.push_back(str[i]);
        }

        cout<<str<<'\n'<<revString<<'\n';
        if(str == revString) return true;
        return false;
    }
};

void solve(){
    string s = "0P";
    // char c = 32;
    // cout<<c;
    Solution obj;
    cout<<obj.isPalindrome(s);
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