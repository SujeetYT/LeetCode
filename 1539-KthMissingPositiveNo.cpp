#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1, i = 0;
        vector<int>missing;
        while(i < arr.size()){
            if(num == arr[i]){
                i++;
                // continue;
            }else{
                missing.push_back(num);
            }
            num++;
        }

        // for(auto a : missing) cout<<a<<" ";
        // cout<<"\n"<<missing[k-1]<<endl;
        return missing[k-1];
    }
};

void solve(){
    vector<int>arr = {2,3,4,7,11};
    int k = 5;
    Solution sol;
    cout<<sol.findKthPositive(arr, k);
}

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}