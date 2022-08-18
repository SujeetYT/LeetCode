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
    ListNode* middleNode(ListNode* head) {
        int nodeCount = 0;
        ListNode* temp = head;

        // counting the total nodes
        while(temp != NULL){
            nodeCount++;
            temp = temp->next;
        }
        temp = head;
        int mid = 0;
        while(temp != NULL){
            if(mid == nodeCount/2){
                return temp;
            }
            mid++;
            temp = temp->next;
        }

        return temp;
    }
};

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

    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    Solution obj;
    ListNode* ans = obj.middleNode(head);
    cout<<ans->val;

    end = clock();
    double time_taken = double(end - start)/1000;
    cout<<endl;
    cout<<fixed<<time_taken<<setprecision(5);
    return 0;
}