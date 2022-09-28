#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    void printList(ListNode* head){
        ListNode* temp = head;
        while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
        }
    }

    int countList(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
        cnt++;
        temp = temp->next;
        }
        return cnt;
    }

    ListNode* addFront(ListNode* head, int val){
        ListNode* newNode = new ListNode(val);
        
        newNode->next = head;
        head = newNode;

        return head;
    }

    ListNode* newReverseList(ListNode* head){
        if(head == NULL) return NULL;

        ListNode* revList = NULL;
        ListNode* temp = head;
        
        while(temp != NULL){
            revList = addFront(revList, temp->val);
            temp = temp->next;
        }
        return revList;
    }

public:
    bool isPalindrome(ListNode* head) {
        bool ans = false;

        int check = countList(head);
        ListNode* temp = head;

        ListNode* revList = newReverseList(head);

        while(check--){
            // cout<<revList->val<<" "<<temp->val<<'\n';
            if(revList->val == temp->val){
                ans = true;
            }else{
                ans = false;
                break;
            }

            revList = revList->next;
            temp = temp->next;
        }
        return ans;
    }
};


void solve(){
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(2);
    ListNode* four = new ListNode(1);

    one->next = two;
    two->next = three;
    three->next = four;
    
    Solution obj;
    cout<<obj.isPalindrome(one);
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