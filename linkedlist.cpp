#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node*next;
    node(int v):val(v),next(nullptr){}
};

// void findmidd(node*head){
//     node*first=head;
//     node*second=head;
//     while(second&&second->next){
//         first=first->next;
//         second=second->next->next;
//     }
//     cout<<first->val;
// }

// void reverse(node*head){
//     node*prev2=0;
//     node*prev1=0;
//     node*curr=head;
//     while(curr){
//         prev2=prev1;
//         prev1=curr;
//         curr=curr->next;
//         prev1->next=prev2;
//     }
//     while(prev1){cout<<prev1->val<<' '; prev1=prev1->next;}
// }

// void findloop(node*head){
//     node*slow=head;
//     node*fast=head;
//     while (fast&&fast->next)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast){
//             slow=head;
//             while(slow!=fast){slow=slow->next; fast=fast->next; }
//             cout<<slow->val;
//             return;
//         }
//     }
//     // return 0;
// }

// node* kthnode(node*head,int k){
//     while(k&&head){
//         head=head->next;
//         k--;
//     }
//     return head;
// }
// node* reversek(node* &head,int k){
//     node*prev2=0;
//     node*prev1=0;
//     node*temp=head;
//     while(k--){
//         prev2=prev1;
//         prev1=temp;
//         temp=temp->next;
//         prev1->next=prev2;
//     }
//     head=temp;
//     return prev1;
// }
// void reverse(node*head,int k){
//     node*root=0;
//     node*temp=head;
//     node*prev=0;
//     while(temp){
//         node*kth=kthnode(temp,k);
//         node*gh=temp;
//         if(kth!=0){
//         node*nhe=reversek(temp,k);
//         if(root==0)root=nhe;
//         if(prev)prev->next=nhe;
//         prev=gh;}
//         else {
//         if(root==0)root=temp;
//         if(prev)prev->next=temp;
//         break;
//         }
//     }
//     while(root){
//         cout<<root->val<<' ';
//         root=root->next;
//     }
// }

// int main(){
// node*head=new node(1);
// head->next=new node(2);
// head->next->next=new node(3);
// head->next->next->next=new node(4);
// head->next->next->next->next=new node(5);
// head->next->next->next->next->next=new node(6);
// head->next->next->next->next->next->next=new node(7);
// reverse(head,3);
// }