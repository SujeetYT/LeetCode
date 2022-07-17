#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>copyHeights;
        for(auto a: heights) copyHeights.push_back(a);
        sort(heights.begin(), heights.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != copyHeights[i]){
                count++;
            }
        }
        return count;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {1,2,3,4,5};
    Solution obj;
    cout<<obj.heightChecker(arr)<<endl;
    return 0;
}