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
node*inserthead(node*head,int val){
    node*newnode=new node(val,head,nullptr);
    head->back=newnode;
    head=newnode;
    return head;


}
node*inserttail(node*head,int val){
    
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*pretemp=temp->back;
    node*newnode=new node(val,temp,pretemp);
    pretemp->next=newnode;
    temp->back=newnode;
    return head;
}
node*insertk(node*head,int val,int k){
    if(head==NULL) return NULL;
    if(k==1) return inserthead(head,val);
    int cnt=0;
    node*temp=head;
    while(temp->next!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;

    }
    node*pretemp=temp->back;
    node*newnode=new node(val,temp,pretemp);
    pretemp->next=newnode;
    temp->back=newnode;
    return head;
}
int main(){
    vector<int>arr={2,5,6,3,4};
    node*head=convertdll(arr);
    //head=inserthead(head,10);
    //head=inserttail(head,10);
    head=insertk(head,10,5);
    printLL(head);

}