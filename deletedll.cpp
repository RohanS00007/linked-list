# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*back;

    node(int data1,node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
node*convertdll(vector<int>arr){
    node*head=new node(arr[0]);
    node*prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;


}
void printLL(node*head){
    node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node*deletehead(node*head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    free(prev);
    return head;
}
node*deletetail(node*head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    node*tail=head;
    
    while(tail->next!=NULL){
        tail=tail->next;
        
    }
    node*prev=tail->back;
    tail->back=NULL;
    prev->next=NULL;
    free(tail);
    return head;


}
node*deletek(node*head,int k){
    if(head==NULL) return NULL;
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    node*prev=temp->back;
    node*front=temp->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);

    }
    else if(front ==NULL){
        return deletetail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    free(temp);
    return head;
}
int main(){
    vector<int>arr={2,5,6,3,4};
    node*head=convertdll(arr);
    //head=deletehead(head);
    //head=deletetail(head);
    head=deletek(head,1);
    printLL(head);

}