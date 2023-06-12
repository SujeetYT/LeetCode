#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int ctoi(char x){
        return (x - '0');
    }
    void sol(int idx, string num, int target, vector<string>&ans,string temp, long long count){
        if(idx == num.size()){
            // cout<<"-"<<count<<"-\n";
            // if(count == target){
            // }
                temp.pop_back();
                ans.push_back(temp);
            return;
        }

        temp.push_back(num[idx]);

        char operators[] = {'+', '-', '*'};

        for(auto a: operators){
            temp.push_back(a);
            switch(a){
                case '+':
                    sol(idx+1, num, target, ans, temp, count+ctoi(num[idx]));
                    // temp.pop_back();
                    break;

                case '-':
                    sol(idx+1, num, target, ans, temp, count-ctoi(num[idx]));
                    // temp.pop_back();
                    break;

                case '*':
                    sol(idx+1, num, target, ans, temp, count*ctoi(num[idx]));
                    // temp.pop_back();
                    break;

                default:
                    break;
                
            }
            // sol(idx+1, num, target, ans, temp, count);
            temp.pop_back();
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        sol(0, num, target, ans, "", 1);
        return ans;
    }
};


void solve(){
    string num;
    cin>>num;
    int target;
    cin>>target;

    Solution obj;
    
    vector<string>ans = obj.addOperators(num, target);

    for(auto a: ans) cout<<a<<"\n";
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