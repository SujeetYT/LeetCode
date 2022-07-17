#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for(int i = 1; i <= s.size(); i++){
            for(int j = 0; j < words.size(); j++){
                if(s.substr(0, i) == words[j])
                    count++;
            }
        }   
        return count;
    }
};

int main(){
    vector<string> words = {"a","b","c","ab","bc","abc"};
    string s = "abc";
    vector<string> words1 = {"a","a"};
    string s1 = "aa";
    Solution obj;
    cout<<obj.countPrefixes(words, s)<<endl;
    Solution obj1;
    cout<<obj1.countPrefixes(words1, s1)<<endl;
    return 0;
}