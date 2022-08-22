#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        for(int i = 0; i < n/2; i++){
            ans[i] = i+1;
            ans[n-1-i] = 0 - (i+1);
        }
        if(n%2 == 1){
            ans[n/2] = 0;
        }
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;
    Solution obj;
    vector<int>ans = obj.sumZero(n);
    for(auto a : ans) cout<<a<<" ";


    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}