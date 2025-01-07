# include <bits/stdc++.h>
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
// length of LL
int lenll(node*head){
    int cnt=0;
    node*temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
// search in LL
int check(node*head,int val){
    node*temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int>arr={2,5,6,3,4};
    node*head=convertarr2ll(arr);
    cout<<head->data<<endl;
    //traversal of LL
    node*temp=head;
    while(temp){
        cout<<temp->data<< " ";
        temp=temp->next;
        
    }
    cout<<endl;
    cout<<lenll(head);
    cout<<endl;
    cout<<check(head,6);
    
    


    

}
