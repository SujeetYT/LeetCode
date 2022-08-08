#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        bool flag = false;
        for(int i = 0; i < arr1.size(); i++){
            for(int j = 0; j < arr2.size(); j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    flag = false;
                    break;
                }
                flag = true;
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>arr1 = {1,4,2,3}, arr2 = {-4,-3,6,10,20,30};
    int d = 3;

    Solution obj;
    cout<<obj.findTheDistanceValue(arr1, arr2, d);
    return 0;
}