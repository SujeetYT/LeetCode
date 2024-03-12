#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    bool canSortArray(vector<int>& a) {
        int n = a.size();
        for (int i = 0, j = 0; i < n; i = j) {
            while (j < n && __builtin_popcount(a[i]) == __builtin_popcount(a[j])) {
                j++;
            }
            sort(a.begin() + i, a.begin() + j);
        }
        return is_sorted(a.begin(), a.end());
    }
};

void solve(){
  Solution s;
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  cout<<(s.canSortArray(a)? "Yes": "No");
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
    cout<<fixed<<time_taken<<setprecision(5)<<" ms";
    return 0;
}