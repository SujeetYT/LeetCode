#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        map<string, int> mp;

        for(int i = 0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].length(); j++){
                if(sentences[i][j] == ' '){
                    mp[sentences[i]]++;
                }
            }
        }

        int maxWord = 0;
        for(auto a : mp){
            maxWord = max(maxWord, a.second);
        }

        return maxWord+1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> sentence = {"alice and bob love leetcode"};
    Solution obj;
    cout<<obj.mostWordsFound(sentence);
    
    return 0;
}