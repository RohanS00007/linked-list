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
//convert an array in to LL
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
node*deletehead(node*head){
    if(head==nullptr) return head;
    node*temp=head;
    head=head->next;
    return head;
    free(temp);
    
}
node *deletetail(node*head){
    if(head==NULL|| head->next==NULL) return NULL;
    node*temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;

    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
node* deletek(node*head,int k){
    if(head==NULL) return head;
    
    if(k==1){
        node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    node*temp=head;
    node*prev=NULL;
    
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int>arr={2,5,6,3,4};
    node*head=convertarr2ll(arr);
    // head=deletehead(head);
    //head=deletetail(head);
    head=deletek(head,3);
    printLL(head);

}