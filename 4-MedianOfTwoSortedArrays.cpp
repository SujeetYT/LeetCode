#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int>mergeArray(vector<int>&nums1, vector<int>& nums2){
        int n = nums1.size();
        int m = nums2.size();
        vector<int>mergedArray(m+n);
        int i = 0, j = 0, k = 0;

        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                mergedArray[k++] = nums1[i++];
            }else{
                mergedArray[k++] = nums2[j++];
            }
        }
        while(i < n){
            mergedArray[k++] = nums1[i++];
        }

        while(j < m){
            mergedArray[k++] = nums2[j++];
        }
        return mergedArray;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = mergeArray(nums1, nums2);
        for(auto a : ans) cout<<a<<" ";
        cout<<"\n";
        int a = ans.size()/2;
        cout<<a<<endl;
        double sum;
        if(ans.size()%2 == 0){
            sum = double((ans[a-1]+ans[a]));
            sum /=2;
        }else{
            sum = double(ans[a]);
        }
        cout<<sum<<endl;
        return sum;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums1 = {1,2},
    nums2 = {3,4};
    Solution obj;
    cout<<obj.findMedianSortedArrays(nums1, nums2);
    return 0;
}