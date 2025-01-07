# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data1,node*next1){
        data=data1;
        next=next1;
    }
    node(int data1){
        data=data1;
        next=nullptr;

    }
};
node* convertarr2ll(vector<int>arr){
    node*head=new node(arr[0]);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;
}
void printLL(node*head){
    node*temp=head;
    while(temp){
        cout<<temp->data<< " ";
        temp=temp->next;
        
    }

}
node*inserthead(node*head,int val){
    if(head==NULL){
        return new node(val);
    }
    node*temp=new node(val,head);
    return temp;
}
node*insertlast(node*head,int val){
    if(head==NULL){
        return new node(val);
    }
    node*newnode=new node(val);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=newnode;
    return head;
}
node*insertk(node*head,int val,int k){
    if(head==NULL){
        if(k==1){
            return new node(val);

        }
        
    }
    if(k==1){
        node*temp=new node(val,head);
        return temp;
    }
    int cnt=0;
    node*temp=head;
    while(temp){
        
        cnt++;
        if(cnt==k-1){
            node*newnode=new node(val);
            newnode->next=temp->next;
            temp->next=newnode;
            break;

        }
        temp=temp->next;
    }
    return head;
    
}

int main(){
    vector<int>arr={2,5,6,3,4};
    node*head=convertarr2ll(arr);
    //head=inserthead(head,10);
    head=insertlast(head,10);
   // head=insertk(head,10,6);
    printLL(head);

}