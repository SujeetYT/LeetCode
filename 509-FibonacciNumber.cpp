#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0 | n == 1) return n;
        return fib(n-1)+fib(n-2);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;
    cout<<obj.fib(4);
    return 0;
}