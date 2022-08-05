#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches){

        queue<int> q;
    // pushing students to queue
        for(auto a : students) q.push(a);
    // Processing
            int cnt = 0;
            int i = 0;
            while(true){
                if(cnt == q.size() || i == students.size() && q.empty()) break;
                if(q.front() == sandwiches[i]){
                    q.pop();
                    i++;
                    cnt = 0;
                }else{
                    int front = q.front();
                    q.pop();
                    q.push(front);
                    cnt++;
                }
            }
        return q.size();
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>students = {1,1,0,0}, sandwiches = {0,1,0,1};
    Solution obj;
    cout<<obj.countStudents(students, sandwiches);
    return 0;
}