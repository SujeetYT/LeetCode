#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* convertarr2LL(vector<int>& arr){
    ListNode* head= new ListNode(arr[0]); //creating head 
    ListNode* mover=head; //pointer pointing towards head
    for (int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]); //creating new node every time
        mover->next=temp; //pointing mover to temp
        mover=mover->next; //moving mover to the next node
    }
    return head;
}

void printList(ListNode* head){
  ListNode* temp = head;
  while(temp != NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
  }
  cout<<endl;
}


class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        int i = 0;
        unordered_map<int, ListNode*> prefixSums;
        prefixSums[i] = dummy; // 0 : dummy
        ListNode* curr = head;

        while(curr){
            i += curr->val;
            if(prefixSums.find(i) != prefixSums.end()){
                ListNode* toDelete = prefixSums[i]->next;
                int tempSum = i + toDelete->val;

                while(toDelete != curr){
                    prefixSums.erase(tempSum);
                    toDelete = toDelete->next;
                    tempSum += toDelete->val;
                }
                
                prefixSums[i]->next = curr->next;
            }else{
                prefixSums[i] = curr;
            }

            curr = curr->next;
        }

        return dummy->next;
    }
};

void solve(){
  vector<int>arr = {1,2,-3,3,1};
  ListNode*head = convertarr2LL(arr);

  Solution* s = new Solution();
  ListNode* ans = s->removeZeroSumSublists(head);
  printList(ans);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif // ONLINE_JUDGE

  // int t;
  // cin>>t;
  // while(t--){
  //   solve();
  // }
  solve();
  return 0;
}