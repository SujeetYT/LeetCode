#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' | s[i] == '[' | s[i] == '{'){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                else{
                    if(s[i] == ')' & st.top() == '('){
                        st.pop();
                    } else if(s[i] == ']' & st.top() == '['){
                        st.pop();
                    } else if(s[i] == '}' & st.top() == '{'){
                        st.pop();
                    } else {
                        return false;
                    }
                }
            }

        }
        if(st.empty()) return true;
        else return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "(])";
    Solution obj;
    cout<<obj.isValid(s);
    return 0;
}