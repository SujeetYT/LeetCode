#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        float s = 0, e = x;
        long mid = s + (e - s)/2;

        int ans = -1;
        while(s <= e){
            if(mid*mid == x){
                return mid;
            }
            if(mid*mid < x){
                ans = mid;
                s = mid+1;
            }
            if(mid*mid > x){
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 8;
    Solution obj;
    cout<<obj.mySqrt(n);    

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}