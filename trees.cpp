#include <bits/stdc++.h>
using namespace std;

struct treenode
{
    int val;
    treenode *left;
    treenode *right;
    treenode(int v) : val(v), left(nullptr), right(nullptr) {}
};

// vector<int> pre;
// vector<int> ino;
// vector<int> post;
// void mixtraversal(treenode *root)
// {
//     stack<pair<treenode *, int>> st;
//     st.push({root, 1});
//     while (!st.empty())
//     {
//         auto it = st.top();
//         st.pop();
//         treenode *temp = it.first;
//         int val = it.second;
//         if (val == 1)
//         {
//             pre.push_back(temp->val);
//             val++;
//             st.push({temp, val});
//             if (temp->left != nullptr)
//                 st.push({temp->left, 1});
//         }
//         else if (val == 2)
//         {
//             ino.push_back(temp->val);
//             val++;
//             st.push({temp, val});
//             if (temp->right)
//                 st.push({temp->right, 1});
//         }
//         else
//         {
//             post.push_back(temp->val);
//         }
//     }
// }


// void iterativepre(treenode*root){
//     treenode*head=root;
//     stack<treenode*>st;
//     st.push(root);
//     while(!st.empty()){
//         auto it=st.top(); st.pop();
//         cout<<it->val<<" ";
//         if(it->right)st.push(it->right);
//         if(it->left)st.push(it->left);
//     }

// }

// void iterativeino(treenode*root){
//     treenode*head=root;
//     stack<treenode*>st;
//     st.push(root);
//     set<treenode*>vis;
//     while(!st.empty()){
//         auto it=st.top(); st.pop();
//         if(vis.find(it)!=vis.end()){cout<<it->val<<' '; if(it->right)st.push(it->right);  continue;}
//         vis.insert(it);
//         st.push(it);
//         if(it->left){ st.push(it->left); }
//     }
// }
// use a node !=null||!st.empty() condition in while loop no need of vis set;


// void iterativepost(treenode*root){
//     treenode*head=root;
//     stack<treenode*>st;
//     st.push(root);
//     map<treenode*,int>vis;
//     while(!st.empty()){
//         auto it=st.top(); 
//         if(vis.find(it)==vis.end()){if(it->left)st.push(it->left); vis[it]++; continue; }
//         if(vis[it]==1){vis[it]++; if(it->right)st.push(it->right); continue;}
//         if(vis[it]==2){ cout<<it->val<<' '; st.pop(); }
//     }
// }
// int maxdepth(treenode*root){
//     if(root){
//         return 1+max(maxdepth(root->left),maxdepth(root->right));
//     }
//     return 0;
// }
// int mindepth(treenode*root){
//     if(root){
//         int left=mindepth(root->left);
//         int right=mindepth(root->right);
//         if(left&&right)return min(left,right)+1;
//         else return 1+max(left,right);
//     }
//     return 0;
// }
// int balbintr(treenode*root){
//     if(root){
//         int left=balbintr(root->left);
//         if(left==-1)return left;
//         int right=balbintr(root->right);
//         if(right==-1)return right;
//         if(abs(left-right)>1)return -1;
//         return 1+max(left,right);
//     }
//     return 0;
// }


// int maxpathsum(treenode*root,int& ans){
//     if(root){
//         int left=max(0,maxpathsum(root->left,ans));
//         int right=max(0,maxpathsum(root->right,ans));
//         ans=max(ans,left+right+root->val);
//         return root->val+max(left,right);
//     }
//     return 0;
// }

// bool identical(treenode*root1,treenode*root2){
//     if((root1==0&&root2)||(root2==0&&root1))return 0;
//     if((root1==0)&&(root2==0))return 1;
//     return root1->val==root2->val && identical(root1->left,root2->left)&&identical(root1->right,root2->right);
// }

//boundry traversal
// vector<int>ans;
// vector<int>ans1;
// void leftbound(treenode*root){
//     treenode*head=root;
//     while(head){
//         ans.push_back(head->val);
//         if(head->left)head=head->left;
//         else if(head->right)head=head->right;
//         else { head=0;}
//     }
// }
// void rightbound(treenode*root){
//     treenode*head=root;
//     while(head){
//         ans1.push_back(head->val);
//         if(head->right)head=head->right;
//         else if(head->left)head=head->left;
//         else { head=0;}
//     }
// }
// void dfs(treenode*root){
//     if(root==0)return;
//     if(root->left==0&&root->right==0){ans.push_back(root->val); return ;}
//     if(root){
//     dfs(root->left);
//     dfs(root->right);}
// }


//vertical order traversal of tree
// map<int,map<int,multiset<int>>>mp;
// void dfs(int x,int y,treenode*root){
//     if(root==0)return;
//     mp[x][y].insert(root->val);
//     if(root->left)dfs(x-1,y+1,root->left);
//     if(root->right)dfs(x+1,y+1,root->right);
// }

// top view
// vector<int>ans;
// void leftbound(treenode*root){
//     treenode*head=root;
//     while(head){
//         ans.push_back(head->val);
//         if(head->left)head=head->left;
//         else if(head->right)head=head->right;
//         else { head=0;}
//     }
// }
// void rightbound(treenode*root){
//     treenode*head=root;
//     while(head){
//         ans.push_back(head->val);
//         if(head->right)head=head->right;
//         else if(head->left)head=head->left;
//         else { head=0;}
//     }
// }

// left view
// map<int,int>mp;
// void dfs(int x,int y,treenode*root){
//     if(root==0)return;
//     if(mp.count(y)==0)mp[y]=root->val;
//     dfs(x-1,y+1,root->left);
//     dfs(x+1,y+1,root->right);
// }
//right view
// map<int,int>mp;
// void dfs(int x,int y,treenode*root){
//     if(root==0)return;
//     mp[y]=root->val;
//     dfs(x-1,y+1,root->left);
//     dfs(x+1,y+1,root->right);
// }


// bool symett(treenode*root1,treenode*root2){
//     if((root1==0&&root2)||(root2==0&&root1))return 0;
//     if((root1==0)&&(root2==0))return 1;
//     return root1->val==root2->val && symett(root1->left,root2->right)&&symett(root1->right,root2->left);
// }

//root to leaf path
// int v=-12;
// bool func(treenode*root,vector<int>&ans){
//     if(root==0)return 0;
//     ans.push_back(root->val);
//     if(root->val==v)return 1;
//     if(func(root->left,ans))return 1;
//     if(func(root->right,ans))return 1;
//     ans.pop_back();
//     return 0;
// }

// treenode* lca(treenode*head,treenode*root1,treenode*root2){
//     if(head==root1||head==root2||head==nullptr)return head;
//     treenode*left=lca(head->left,root1,root2);
//     treenode*right=lca(head->right,root1,root2);
//     if(left==0)return right;
//     else if(right==0)return left;
//     else if(left&&right)return head;
//     return 0;
// }

// have a look on sparse tree for lca calc..


// maximum width of binary tree 
// int maxwidth(treenode*root){
//     if(root==0)return 0;
//     queue<pair<treenode*,int>>q;
//     q.push({root,0});
//     int ans=0;
//     while(!q.empty()){
//         int m=q.size(); int mini=q.front().second;
//         for(int i=0;i<m;i++){
//             auto it=q.front(); q.pop();
//             int tt=it.second-mini;
//             if(i==m-1){
//             ans=max(ans,tt+1);}
//             if(it.first->left)q.push({it.first->left,(tt<<1)});
//             if(it.first->right)q.push({it.first->right,(tt<<1)+1});
//         }
//     }
//     return ans;
// }



// nodes at distance k
//  unordered_map<treenode*,treenode*>par;
//  void dfs(treenode*head){
//     if(head==0)return ;
//     if(head->left)par[head->left]=head;
//     if(head->right)par[head->right]=head;
//     dfs(head->left);
//     dfs(head->right);
//  }
// vector<int> nodesatdistancek(treenode*root,treenode*target,int k){
//     queue<treenode*>q;
//     int t=0;
//     q.push(target);
//     unordered_set<treenode*>st;
//     while(t<k){
//         t++;
//         int n=q.size();
//         for(int j=0;j<n;j++){
//             auto it=q.front(); q.pop();
//             st.insert(it);
//             if(it->left&&st.count(it->left)==0){q.push(it->left); st.insert(it->left);}
//             if(it->right&&st.count(it->right)==0){q.push(it->right); st.insert(it->right);}
//             if(par.count(it)&&st.count(par[it])==0){q.push(par[it]); st.insert(par[it]);}
//         }
//     }
//     vector<int>ans;
//     while(!q.empty()){ans.push_back(q.front()->val); q.pop();}
//     return ans;
// }


// unordered_map<int,int>ind;
// vector<int>inorder={4,2,5,1,6,3,7};
// vector<int>preorder={1,2,4,5,3,6,7};
// int idx=0;
// treenode* pre_ino(int l,int r){
//     if(l==r)return new treenode(preorder[idx]);
//     if(l>r)return 0;
//     treenode*root=new treenode(preorder[idx]);
//     int mid=ind[preorder[idx]];
//     idx++;
//     root->left=treebu(l,mid-1);
//     idx++;
//     root->right=treebu(mid+1,r);
//     return root;
// }
// void inordert(treenode*root){
//     if(root){
//         inordert(root->left);
//         cout<<root->val<<' ';
//         inordert(root->right);
//     }
// }
// unordered_map<int,int>ind;
// vector<int>inorder={4,2,5,1,6,3,7};
// vector<int>postorder={4,5,2,6,7,3,1};
// int idx=6;
// treenode* post_ino(int l,int r){
//     if(l==r)return new treenode(postorder[idx]);
//     if(l>r)return 0;
//     treenode*root=new treenode(postorder[idx]);
//     int mid=ind[postorder[idx]];
//     idx--;
//     root->right=post_ino(mid+1,r);
//     idx--;
//     root->left=post_ino(l,mid-1);
//     return root;
// }

// treenode* rightmost(treenode*root){
//     treenode*head=root;
//     while(head){
//         if(head->right)head-right;
//         else return head;
//     }
//     return nullptr;
// }
// void morrispreord(treenode*root){
//     treenode*head=root;
//     while(head){
//         if(head->left==0){
//         cout<<head->val<<' ';
//         head=head->right;
//         }else{
//         treenode*prev=head->left;
//         while(prev->right && prev->right!=head){prev=prev->right;}
//         if(prev->right==head){prev->right=nullptr; head=head->right; }
//         else{
//             prev->right=head;
//             cout<<head->val<<' ';
//             head=head->left;
//         }
//     }
// }
// }

// void morrisinord(treenode*root){
//     treenode*head=root;
//     while(head){
//         if(head->left==0){
//         cout<<head->val<<' ';
//         head=head->right;
//         }else{
//         treenode*prev=head->left;
//         while(prev->right && prev->right!=head){prev=prev->right;}
//         if(prev->right==head){prev->right=nullptr;  cout<<head->val<<' ';    head=head->right; }
//         else{
//             prev->right=head;
//             head=head->left;
//         }
//     }
// }
// }

// vector<int>ans;
// void morrispostord(treenode*root){
//  treenode*head=root;
//     while(head){
//         if(head->right==0){
//         ans.push_back(head->val);
//         head=head->left;
//         }else{
//         treenode*prev=head->right;
//         while(prev->left && prev->left!=head){prev=prev->left;}
//         if(prev->left==head){prev->left=nullptr; head=head->left; }
//         else{
//             prev->left=head;
//             ans.push_back(head->val);
//             head=head->right;
//         }
//     }
// }
// }


// flatten into linked list
// treenode*prev1;
// void flatten(treenode*head){
//     if(head){
//         flatten(head->right);
//         flatten(head->left);
//         head->right=prev1;
//         prev1=head;
//     }
// }

/// 
///binary search tree
// int k=0,p=0,bk=0;
// void inorder(treenode*root){
//     if(root){
        
//         inorder(root->left);
//         p++;
//         if(p==k)cout<<root->val<<" ";
//         if(p==bk)cout<<root->val;
//         inorder(root->right);
//     }
// }

// bool validate(int a,int b,treenode*head){
//     if(head==0)return 1;
//     if(head->val<=a||head->val>b)return 0;
//     return validate(a,min(b,head->val),head->left)&&validate(max(a,head->val),b,head->right);
// }

// treenode* lca(treenode*head,treenode*h1,treenode*h2){
//     if(head==0)return 0;
//     if(head->val < h1->val &&head->val < h2->val)return lca(head->right,h1,h2);
//     else if(head->val > h1->val &&head->val > h2->val)return lca(head->left,h1,h2);
//     else return head;
// }


// bst tree iterator
class BSTIterator {
public:
    stack<treenode*> st;
    bool reverse;
    BSTIterator(treenode* root,bool reverse) { this->reverse=reverse;  pushall(root); }
    int next() {
        if(hasNext()){
        treenode* p = st.top();
        int pd = p->val;
        st.pop();
        if (reverse) {
            pushall(p->left);
        } else {
            pushall(p->right);
        }
        return pd;
    } return 0;
}
    bool hasNext() { return !st.empty(); }
    void pushall(treenode* root) {
        while (root) {
        st.push(root);
        if (reverse) {
            root = root->right;
            }
         else {
            root = root->left;
            }
        }
    }
};



// struct result {
//     bool isValid;
//     int minVal;
//     int maxVal;
//     int sum;
// };
// unordered_map<TreeNode*,bool>mp;
// result validateBottomUp(TreeNode* root) {
//     if (!root) {
//         return {0,true, INT_MAX, INT_MIN};
//     }
//     result left = validateBottomUp(root->left);
//     result right = validateBottomUp(root->right);
//     if (!left.isValid || !right.isValid) {
//         return mp[root]= {0,false, 0, 0};
//     }
//     if ((root->left && left.maxVal >= root->val) ||
//         (root->right && right.minVal <= root->val)) {
//         return mp[root]= {0,false, 0, 0};
//     }
//     int minVal = root->left ? left.minVal : root->val;
//     int maxVal = root->right ? right.maxVal : root->val;
//     int sum = root->val;
//     sum+=root->right ? right.sum : 0;
//     sum+=root->left ? left.sum : 0;
//     return mp[root]={sum,true, minVal, maxVal};
// }

// bool isValidBST(TreeNode* root) {
//     return validateBottomUp(root).isValid;
// }


// largest bst having maximum sum
// class Solution {
// public:
// struct result {
//     int sum;
//     bool isValid;
//     int minVal;
//     int maxVal;
    
// };
// unordered_map<TreeNode*,result>mp;
// result validateBottomUp(TreeNode* root) {
//     if (!root) {
//         return {0,true, INT_MAX, INT_MIN};
//     }
//     result left = validateBottomUp(root->left);
//     result right = validateBottomUp(root->right);
//     if (!left.isValid || !right.isValid) {
//         return mp[root]= {0,false, 0, 0};
//     }
//     if ((root->left && left.maxVal >= root->val) ||
//         (root->right && right.minVal <= root->val)) {
//         return mp[root]= {0,false, 0, 0};
//     }
//     int minVal = root->left ? left.minVal : root->val;
//     int maxVal = root->right ? right.maxVal : root->val;
//     int sum = root->val;
//     sum+=root->right ? right.sum : 0;
//     sum+=root->left ? left.sum : 0;
//     return mp[root]={sum,true, minVal, maxVal};
// }

// bool isValidBST(TreeNode* root) {
//     return validateBottomUp(root).isValid;
// }
//     int maxSumBST(TreeNode* root) {
//         mp.clear();
//         isValidBST(root);
//         int sum=0;
//         for(auto it:mp){
//             if(it.second.isValid==1){sum=max(sum,it.second.sum);}
//         }
//         return sum;
//     }
// };


// int main()
// {
//     treenode *head = new treenode(10);
//     head->left = new treenode(5);
//     head->left->left = new treenode(2);
//     head->left->left->left= new treenode(1);
//     head->left->right = new treenode(8);
//     head->right = new treenode(15);
//     head->right->right = new treenode(20);
//     head->right->right->left = new treenode(17);
//     head->right->left = new treenode(12);
//     cout<<lca(head,head->left->left->left, head->left->left)->val;
// }


