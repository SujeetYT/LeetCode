#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastRemaining(int n) {
        return n==1?1:2*(1+(n/2) - lastRemaining(n/2));
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;
    cout<<obj.lastRemaining(9);

    return 0;
}