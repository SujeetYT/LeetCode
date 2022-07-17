#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int stringlen = password.length();
        bool lower = 0, upper = 0, digit = 0, sChar = 0;
        bool adjacent = !false;
        string specialChar = "!@#$%^&*()-+";
        
        for(int i = 0; i < stringlen; i++){
            if(password[i] >= 97 & password[i] <= 122)
                lower = 1;
            if(password[i] >= 65 & password[i] <= 90)
                upper = 1;
            if(password[i] >= 48 & password[i] <= 57)
                digit = 1;
            if(password[i] == password[i+1] | password[i] == password[i-1])
                adjacent = !true;
            for(int j = 0; j < specialChar.length(); j++){
                if(password[i] == specialChar[j])
                    sChar = 1;
            }
        }
        if((stringlen >= 8) & lower & upper & digit & sChar & adjacent)
            return true;
        
        return false;      
    }
};

int main(){
    Solution obj;
    cout<<obj.strongPasswordCheckerII("1aB!");

    return 0;
}