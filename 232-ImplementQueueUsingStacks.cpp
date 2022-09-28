#include<bits/stdc++.h>
#define ll long long
using namespace std;

class MyQueue {
    stack<int>st1;
    stack<int>st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
            while(!st1.empty()){
                int val = st1.top();
                st2.push(val);
                st1.pop();
            }
        }
        int val = st2.top();
        st2.pop();
        return val;
    }
    
    int peek() {
        if(st2.empty()){
            while(!st1.empty()){
                int val = st1.top();
                st2.push(val);
                st1.pop();
            }
        }
        return st2.top();
    }
    
    bool empty() {
        return (st1.empty() && st2.empty());
    }
};

void solve(){
    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    // obj->push(3);
    // obj->push(4);
    int param_2 = obj->pop();
    int param_3 = obj->peek();
    bool param_4 = obj->empty();

    cout<<param_2<<'\n';
    cout<<param_3<<'\n';
    cout<<param_4<<'\n';
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

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}