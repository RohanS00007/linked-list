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
        if(head==NULL || head->next==NULL) return head;
        // int cnt=0;
        // ListNode*temp=head;
        // while(temp!=NULL){
        //     cnt++;
        //     temp=temp->next;

        // }
        // temp=head;
        // cnt=(cnt/2)+1;
        // while(temp!=NULL){
        //     cnt--;
        //     if(cnt==0) break;
        //     temp=temp->next;
           
            
            
            
        // }
        // return temp;

        // optimal solution-tortoise hare algo
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;


        
    }
};

int main(){

}