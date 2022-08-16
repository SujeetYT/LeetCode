#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* extra = NULL; // pointer of node which is before the node to be deleted
        ListNode* del = NULL; // pointer of node which is to be deleted
        ListNode* nextNode = NULL; // pointer of node which is after the node to be deleted

        // Getting the size of the linked list
        int totalNodes = 0;
        while(temp != NULL){
            totalNodes++;
            temp = temp->next;
        }
        
        if(totalNodes == n){
            del = head;
            head = head->next;
            delete del;
            return head;
        }
        
        temp = head;
        int currentNode = 0;
        while(temp != NULL){

            currentNode++;

            if(currentNode == (totalNodes - n)){
                extra = temp;
            }
            if(currentNode == ( totalNodes - n + 1)){
                del = temp; // saving so that we will delete it from heap
                nextNode = temp->next;
                extra->next = nextNode;
            }

            temp = temp->next;
        }
        delete del;
        return head;
    }
};


void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ListNode* head = NULL;
    ListNode* one = new ListNode;
    ListNode* two = new ListNode;
    ListNode* three = new ListNode;
    ListNode* four = new ListNode;
    ListNode* five = new ListNode;

    one->val = 1;
    two->val = 2;
    three->val = 3;
    four->val = 4;
    five->val = 5;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;
    head = one;

    printList(head);
    Solution obj;
    ListNode*afterDelete =  obj.removeNthFromEnd(head, 2);
    printList(afterDelete);

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}