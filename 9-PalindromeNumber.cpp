#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int copy = x;
        long int num = 0;
        while(x != 0){
            num = (num*10) + (x%10);
            x/=10;
        }
        return (num == copy);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 1234567899;
    Solution obj;
    cout<<obj.isPalindrome(x);
    return 0;
}