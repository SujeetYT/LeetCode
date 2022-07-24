#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        while(i<m && j<n){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                j++;
                i++;
            }else if(nums1[i] > nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> ans, nums1, nums2;
    nums1 = {1,2,2,1};
    nums2 = {2,2};
    Solution obj;
    ans = obj.intersect(nums1, nums2);
    for(int a : ans) cout<<a<<" ";
    return 0;
}