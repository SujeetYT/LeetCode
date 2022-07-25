#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s, int i = 0) {
        if(i == s.size()/2){
            return;
        }
        swap(s[i], s[s.size()-1-i]);
        i++;
        reverseString(s, i);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<char>s= {'H', 'E', 'L', 'L', 'O'};
    Solution obj;
    obj.reverseString(s);
    for(int i = 0; i < s.size(); i++){
        cout<<s[i]<<" ";
    }
    return 0;
}