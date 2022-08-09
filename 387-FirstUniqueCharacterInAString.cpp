#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
        for(auto a : s) mp[a]++; // creating a map
        
        for(int i = 0; i < s.length(); i++){ // iterating throught the string
            auto itr = mp.find(s[i]); // if character is present it will return an iterator
            
            // if first char has 1 value then it will return its index
            if(itr->second == 1) return i;
        }
        return -1;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "dddccdbba";
    Solution obj;
    cout<<obj.firstUniqChar(s);
    
    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<"Total time taken is : "<<fixed<<time_taken<<setprecision(5)<<" sec";
    return 0;
}