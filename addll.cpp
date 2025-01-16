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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*dummy=new ListNode(-1);
        ListNode*current=dummy;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL){
            int sum=carry;
            if(temp1) {sum+=temp1->val;}
            if(temp2) {sum+=temp2->val;}
            ListNode*newnode=new ListNode(sum%10);
            carry=sum/10;
            current->next=newnode;
            current=current->next;

            if(temp1!=NULL) {temp1=temp1->next;}
            if(temp2!=NULL) {temp2=temp2->next;}





        }
        if(carry!=0){
            ListNode*newnode=new ListNode(carry);
        current->next=newnode;

        }
        
        return dummy->next;
        
    }
};
int main(){

}