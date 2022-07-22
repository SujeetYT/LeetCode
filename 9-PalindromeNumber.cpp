#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        int num = 0;
        int i = 0;
        while(x != 0){
            int r = x%10;
            cout<<num<<" "<<r*pow(10, i)<<endl;
            num += r*pow(10,i);
            cout<<num<<endl;
            i++;
            x/=10;
        }
        cout<<num<<" "<<copy<<endl;
        if(num == copy) return true;
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 120;
    Solution obj;
    cout<<obj.isPalindrome(x);
    return 0;
}