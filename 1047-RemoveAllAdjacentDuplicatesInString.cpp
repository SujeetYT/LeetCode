#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        // O(N^2)
        // int i = 0;
        // int j = 1;
        // while(j < s.length()){
        //     if(s[i] == s[j]){
        //         s.erase(s.begin()+i);
        //         s.erase(s.begin()+i);
        //         i = 0;
        //         j = 1;
        //     }else{
        //         i++;
        //         j++;
        //     }
        // }
        // return s;

// O(N)
        string ans ="";
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }else{
                if(st.top() == s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str = "abbaca";
    Solution obj;
    string ans = obj.removeDuplicates(str);
    cout<<ans;

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<"\n\nTotal time taken is : "<<fixed<<time_taken<<setprecision(5)<<" sec";
    return 0;
}