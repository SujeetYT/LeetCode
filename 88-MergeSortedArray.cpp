#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>mergedArray(m+n);
        int i = 0, j = 0, k = 0;

        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                mergedArray[k++] = nums1[i++];
            }else{
                mergedArray[k++] = nums2[j++];
            }
        }
        while(i < m){
            mergedArray[k++] = nums1[i++];
        }

        while(j < n){
            mergedArray[k++] = nums2[j++];
        }

        nums1 = mergedArray;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int m = 3, n = 3;
    Solution obj;
    obj.merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }

    return 0;
}