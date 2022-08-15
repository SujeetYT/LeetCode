#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    ListNode* InsertAtBegin(ListNode* &head, int d){
        ListNode* temp = new ListNode;
        temp->val = d;

        if(head == NULL) return temp;

        temp->next = head;
        head = temp;
        return head;
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* headptr = NULL;
        ListNode* ptr = head;
        while(ptr != NULL){
            headptr = InsertAtBegin(headptr, ptr->val);
            ptr = ptr->next;
        }
        return headptr;
    }
};


void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

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

    // head = InsertAtBegin(head, 46);

    // printList(head);

    Solution obj;
    ListNode*ans = obj.reverseList(head);
    printList(ans);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}