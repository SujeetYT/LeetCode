#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highestAlt = 0;
        int currentAlt = 0;
        for(int i = 0; i < gain.size(); i++){
            currentAlt += gain[i];
            highestAlt = max(currentAlt, highestAlt);
        }
        return max(highestAlt, 0);
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> gain = {-5,1,5,0,-7};
    Solution obj;
    cout<<obj.largestAltitude(gain);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}