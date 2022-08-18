#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() -1; // getting first and last index
        int mid = s + (e - s)/2; // getting mid index

        while(s < e){  // if s == e then loop will break
            if(nums[0] <= nums[mid]){ // comparing 0th-index value with mid one because array is sorted till maximum element 
//like: [3 4 5 1 2] so 5 is maximun and getting minimum value just after that index
                s = mid + 1;  // this is index just after the maximum element
            } else if(nums[0] > nums[mid]){ // same but opposite condition
                e = mid;  // here we are not doint e = mid - 1 because
// suppose if you reach your minimum index value then in that case we will assign that index not the previous one
            }
            mid = s + (e - s)/2; // updating the mid
        }
        
// not we got our pivot element so we will compare with the 0th index value because that will be the minimum for the left part of the sorted elements
        if(nums[s] < nums[0]){
            return nums[s];
        }
        
        return nums[0];
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>nums = {4,5,6,7,0,1,2};
    Solution obj;
    cout<<obj.findMin(nums);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}