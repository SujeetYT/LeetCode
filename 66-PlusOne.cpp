#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i >= 0){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i] += 1;
                break;
            }
            i--;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> digits = {9,9};

    Solution obj;
    vector<int> n = obj.plusOne(digits);
    for(int i = 0; i < n.size(); i++){
        cout<<n[i]<<" ";
    }
    return 0;
}