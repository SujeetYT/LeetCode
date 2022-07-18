#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x =0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "++X" || operations[i] == "X++"){
                x++;
            }else if(operations[i] == "--X" || operations[i] == "X--"){
                x--;
            }
        }
        return x;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> operations = {"X++","++X","--X","X--"};
    Solution obj;
    cout<<obj.finalValueAfterOperations(operations);
    return 0;
}