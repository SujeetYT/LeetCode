#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        //Time : O(NLogN)   Space : O(N)
        // map<int, char>mp;
        // for(int i = 0; i < indices.size(); i++){  /*N times*/
        //     mp[indices[i]] = s[i];                /*Log N times*/
        // }
        // for (auto a : mp) s.push_back(a.second);

        //Time : O(N)   Space : O(N)
        string ans = s;
        for(int i = 0; i < indices.size(); i++){
            ans[indices[i]] = s[i];
        }
        
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    string s = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};
    Solution obj;
    cout<<obj.restoreString(s, indices);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}