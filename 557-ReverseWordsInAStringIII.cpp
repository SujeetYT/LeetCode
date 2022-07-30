#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int j = 0, i = 0;
        for(i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                // reverses the word till last space
                reverse(s.begin()+j, s.begin()+i);
                j = i+1;
            }
        }
        // reverses the word after last space
        reverse(s.begin()+j, s.begin()+i);
        return s;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "Please Upvote If You Like";
    Solution obj;
    cout<<obj.reverseWords(s);
    return 0;
}