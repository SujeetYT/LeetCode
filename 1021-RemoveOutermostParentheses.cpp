#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        stack<char>st;
        // int count = 0;
        for(char a : s){
            if(a == '('){
                if(!st.empty()){
                    ans.push_back('(');
                }

                st.push(a);
            }else{
                st.pop();

                if(!st.empty()){
                    ans.push_back(')');
                }
            }
        }
        return ans;

        // int count = 0;
        // string str;
        // for(char c : s){
        //     if (c == '(' && count++) str += '(';
        //     else if ( c == ')' && --count) str+= ')';
        // }
        // return str;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "(()())(())";

    Solution obj;
    string ans = obj.removeOuterParentheses(s);
    cout<<ans;

    return 0;
}