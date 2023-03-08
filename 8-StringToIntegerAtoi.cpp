#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    int myAtoi(string s){
        int i = 0, sign;
        long int n = 0;                       
        while (s[i] == ' ') { i++; } 
        sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-') 
            i++;
        while (isdigit(s[i])) {  
            int digit = (s[i] - '0');                                 
            if( ((n*10 + digit) * sign >= INT_MIN ) && ((n*10 + digit) * sign <= INT_MAX) ) { 
                n = 10 * n + (s[i] - '0');                       
            } else {
                return ((sign == -1)? INT_MIN: INT_MAX);  
            }
            i++;
        }
        return sign * n;   
    }
    // int myAtoi(string s) {
        
    //     bool sign = false;
    //     vector<int>nums;
        
    //     for(int i = 0; i < s.length(); i++){
    //         int num = s[i] - '0';
    //         if(s[i] != '.'){
    //             if(num <= 9 && num >= 0){
    //                 nums.push_back(num);
    //             } 
    //         }else{
    //             break;
    //         }
            
    //         if(s[i] == '-' && isdigit(s[i+1])){
    //             sign = true;
    //         }else if(s[i] == '+' && isdigit(s[i+1])){
    //             sign = false;
    //         }else{
    //             break;
    //         }
                
            
    //     }
        
    //     if(nums.size() == 0) return 0;
        
    //     long ans = 0;
    //     for(int i = 0; i < nums.size(); i++){
    //         ans += nums[i] * pow(10, nums.size() - 1 - i);
    //     }
    //     // cout<<ans<<"\n";
    //     if(sign == true){
    //         if(-ans < INT_MIN) return INT_MIN;
    //         else return -ans;
    //     }else if(ans > INT_MAX){
    //         return INT_MAX;
    //     }else if(s[0] < '0' || s[0] > '9'){
    //         return 0;
    //     }
            
        
    //     return ans;
    // }
};

void solve(){
    string s; cin>>s;
    Solution obj;
    cout<<obj.myAtoi(s);
}

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    solve();

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}