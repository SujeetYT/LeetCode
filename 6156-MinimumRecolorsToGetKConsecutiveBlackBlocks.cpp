#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int countW = 0;
        
        for(int j = 0; j < blocks.length(); j++){
            if(blocks[j] == 'W'){
                countW++;
            }
        }

        int minimum = countW;
        countW = 0;
        for(int i = 0; i <= blocks.length() - k; i++){
            for(int j = i; j < i+k; j++){
                if(blocks[j] == 'W'){
                    countW++;
                }
            }
            if(minimum >= countW){
                minimum = countW;
            }
            countW = 0;
        }
        return minimum;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string blocks = "WBBWWWWBBWWBBBBWWBBWWBBBWWBBBWWWBWBWW";
    int k = 15;
    Solution obj;
    cout<<obj.minimumRecolors(blocks, k);
    
    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}