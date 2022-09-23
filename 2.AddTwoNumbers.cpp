#include <bits/stdc++.h>
using namespace std;

/* Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void print(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

class Solution {
    ListNode* reverse(ListNode* head){
        ListNode* pre = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        
        while(curr != NULL){
            // swaping nodes
            next = curr->next;
            curr->next = pre;            
            
            pre = curr;
            curr = next;
        }
        return pre;
    }
    
    void insertAtTail(ListNode* &ansHead, ListNode* &ansTail, int val){
        ListNode* temp = new ListNode(val);
        if(ansHead == NULL){
            ansHead = temp;
            ansTail = temp;
        }else{
            ansTail->next = temp;
            ansTail = temp;
            return;
        }
    }
    
    ListNode* add(ListNode* h1, ListNode* h2){
        int carry = 0;
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        while(h1 != NULL || h2 != NULL || carry != 0){
            // int sum = (h1 ? h1->val : NULL) + (h2 ? h2->val : NULL)+ carry;
            int sum = h1->val + h2->val;
            
            cout<<sum;
            
            insertAtTail(ansHead, ansTail, sum%10);
            
            carry = sum/10;
            h1 = (h1 ? h1->next : NULL);
            h2 = (h2 ? h2->next : NULL);
        }
        
        return ansHead;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1 = reverse(l1);
        ListNode* h2 = reverse(l2);
        
        ListNode* ans = add(h1, h2);
                
        ans = reverse(ans);
        
        // print(ans);
        
        return ans;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ListNode *head, *one, *two, *three;
    one = new ListNode;
    two = new ListNode;
    three = new ListNode;
    head = one;

    one->val = 1;
    one->next = two;

    two->val = 2;
    two->next = three;

    three->val = 3;
    three->next = NULL;

    Solution obj;
    ListNode* ans = obj.addTwoNumbers(head, head);

    print(ans);


    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}