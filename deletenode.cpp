# include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
// note-we dont have any access to the head of the linked list
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
        
        
    }
};
int main(){

}