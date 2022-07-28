#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int>str1;
        unordered_map<char, int>str2;
        for(auto a : s){
            str1[a]++;
        }
        for(auto a : t){
            str2[a]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(str1[s[i]] != str2[s[i]]) return false;
        }
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    s= "rat";
    t= "car";
    Solution obj;
    cout<<obj.isAnagram(s,t);
    return 0;
}