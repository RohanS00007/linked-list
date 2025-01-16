# include <bits/stdc++.h>
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

node*reverse(node*head){
    stack<int>st;
    node*temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;

    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;

    }
    return head;
}
node*reverselink(node*head){
    node*current=head;
    node*last=NULL;
    while(current!=NULL){
        last=current->back;
        current->back=current->next;
        current->next=last;
        current=current->back;

    }
    return last->back;
}
int main(){
    vector<int>arr={2,5,6,3,4};
    node*head=convertdll(arr);
    //printLL(head);
    //cout<<endl;
    node*newhead=reverselink(head);
    printLL(newhead);

}