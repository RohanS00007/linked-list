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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        // ListNode*temp=head;
        // ListNode*prev=NULL;
        // ListNode*front=NULL;
        // stack<int>st;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;



        // }
        // temp=head;
        // while(temp!=NULL){
        //     temp->val=st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head;

        //iterative approach
        // while(temp!=NULL){
        //     front=temp->next;
        //     temp->next=prev;
        //     prev=temp;
        //     temp=front;
            



        // }
        // return prev;

        // recursive approach
        ListNode*newhead=reverseList(head->next);
        ListNode*front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;


        

        

        


    }
};
int main(){
    
}