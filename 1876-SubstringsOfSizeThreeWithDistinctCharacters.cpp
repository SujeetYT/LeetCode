#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int countNum = 0;
        for(int i = 2; i < s.size(); i++){
            int m = i-1, h = i-2;
            if(s[i] != s[m] && s[i] != s[h] && s[m] != s[h]){
                // cout<<s[i]<<" "<<s[m]<<" "<<s[h]<<endl;
                countNum++;
            }
        }
        return countNum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "xyzzaz";
    Solution obj;
    cout<<obj.countGoodSubstrings(s);
    return 0;
}