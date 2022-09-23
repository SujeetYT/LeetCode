
#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
* Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
       cout<<temp->val<<" ";
       temp = temp->next;
    }
}

class Solution {
    ListNode* addFront(ListNode* head, int val){
        ListNode* newNode = new ListNode(val);
        
        newNode->next = head;
        head = newNode;

        return head;
    }
public:
    int pairSum(ListNode* head) {
        ListNode* revList = NULL;
        ListNode* temp = head;
        
        int totalNodes = 0;
        
        while(temp != NULL){
            totalNodes++;
            revList = addFront(revList, temp->val);
            temp = temp->next;
        }
        
        int mxm = -1;
        temp = head;
        ListNode* temp2 = revList;
        
        totalNodes /= 2;
        while(totalNodes--){
            int cur = temp->val + temp2->val;
            if(cur > mxm) mxm = cur;

            temp = temp->next;
            temp2 = temp2->next;
        }        

        return mxm;
    }
};

int main(){
    time_t start, end;
    start = clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    ListNode* one = new ListNode(4);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(2);
    ListNode* four = new ListNode(3);

    one->next = two;
    two->next = three;
    three->next = four;

    Solution obj;
    cout<<obj.pairSum(one);
    
    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<"\n\n";
    cout<<fixed<<time_taken<<setprecision(5)<<"ms";
    return 0;
}
