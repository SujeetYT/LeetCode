#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string ans = "";
        
        for(int i = s.length(); i >= 0; i--){
            if(!st.empty()){
                char c = st.top();
                if(c != s[i] && (tolower(c) == s[i] || toupper(c) == s[i])){
                    st.pop();
                }else{
                    st.push(s[i]);
                }    
            }else{
                st.push(s[i]);
            }
        }

        // storing each character to the string
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s ="abBAcC";
    Solution obj;
    string ans = obj.makeGood(s);
    cout<<""<<ans<<"";
    return 0;
}