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
    bool hasCycle(ListNode *head) {
        if( head==NULL || head->next==NULL ) return false;
        // ListNode*temp=head;
        // map<ListNode*,int>hash;
        // while(temp!=NULL){
        //     if(hash.find(temp)!=hash.end() ) return true;
        //     hash[temp]=1;
        //     temp=temp->next;
        // }
        // return false;
        
        // optimal code(tortoise hare algo)
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;

        }
        return false;



        
    }
};