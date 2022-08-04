#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1, s2;
        int i = 0, j = 0;

        //Evaluating First Stack
        while(i < s.length()){
            if(s[i] == '#'){
                if(!s1.empty()){
                    s1.pop();
                }
                i++;
            }else{
                s1.push(s[i]);
                i++;
            }
        }

        //Evaluating Second Stack
        while(j < t.length()){
            if(t[j] == '#'){
                if(!s2.empty()){
                    s2.pop();
                }
                j++;
            }else{
                s2.push(t[j]);
                j++;
            }
        }

        // Comparing Both Stacks
        while(!s1.empty() || !s2.empty()){
            if(s1.empty() || s2.empty()) return false; // If either of the stack is empty
            if(s1.top() == s2.top()){
                s1.pop();
                s2.pop();
            }else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "bxj##tw", t = "bxj###tw";
    Solution obj;
    cout<<obj.backspaceCompare(s, t);
    
    return 0;
}