#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {

        char slowK = keysPressed[0];
        int maxDuration = releaseTimes[0];

        for(int i = 1; i < keysPressed.size(); i++){
            int duration = abs(releaseTimes[i] - releaseTimes[i-1]);

            if(duration == maxDuration){
                slowK = max(slowK, keysPressed[i]);
            }
            if(duration > maxDuration){
                slowK = keysPressed[i];
                maxDuration = duration;
            }
        }

        return slowK;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> releaseTimes = {9,29,49,50};
    string keysPressed = "cbcd";
    Solution obj;
    cout<<obj.slowestKey(releaseTimes, keysPressed)<<endl;

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}