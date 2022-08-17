#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size()-1;
        int m = s + (e - s)/2;
        
        while(s < e){
            if(arr[m] < arr[m+1]){
                s = m + 1;
            }else if(arr[m] > arr[m+1]){
                e = m;
            }
            m = s + (e - s)/2;
        }
        
        return s;        
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>arr = {0,10,5,2};
    Solution obj;
    cout<<obj.peakIndexInMountainArray(arr);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}