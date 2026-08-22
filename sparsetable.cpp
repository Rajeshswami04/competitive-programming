#include<bits/stdc++.h>
using namespace std;


// //maximum total subarray sum 2
// //3691

// class Solution {
// public:
//     vector<int>arr;
//     vector<vector<int>>rmqm;
//     void preprocessm(int n,int m){
//         rmqm.assign(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){rmqm[i][0]=i;}
//         for(int j=1;pow(2,j)<=n;j++){
//             for(int i=0;i-1+pow(2,j)<n;i++){
//                if(arr[rmqm[i][j-1]]<arr[rmqm[i+pow(2,j-1)][j-1]]){
//                 rmqm[i][j]=rmqm[i][j-1];}else{
//                     rmqm[i][j]=rmqm[i+pow(2,j-1)][j-1];
//                 }
//             }
//         }
//     }
//     int qm(int l,int r){
//         int t=r-l+1;
//         int k=log2(t);
//         return min(arr[rmqm[l][k]],arr[rmqm[l+t-pow(2,k)][k]]);
//     }
//     vector<vector<int>>rmqma;
//     void preprocessma(int n,int m){
//         rmqma.assign(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){rmqma[i][0]=i;}
//         for(int j=1;pow(2,j)<=n;j++){
//             for(int i=0;i-1+pow(2,j)<n;i++){
//                if(arr[rmqma[i][j-1]]>arr[rmqma[i+pow(2,j-1)][j-1]]){
//                 rmqma[i][j]=rmqma[i][j-1];}else{
//                     rmqma[i][j]=rmqma[i+pow(2,j-1)][j-1];
//                 }
//             }
//         }
//     }
//     int qma(int l,int r){
//         int t=r-l+1;
//         int k=log2(t);
//         return max(arr[rmqma[l][k]],arr[rmqma[l+t-pow(2,k)][k]]);
//     }
//     long long maxTotalValue(vector<int>& nums, int k) {
//         int n=nums.size();
//         int t=log(n)+1;
//         arr=nums;
//         preprocessm(n,t);
//         preprocessma(n,t);
//         set<pair<int,int>>st;
//         priority_queue<pair<long long,pair<int,int>>>q;
//         int fq=qma(0,n-1);
//         int sq=qm(0,n-1);
//         q.push({fq-sq,{0,n-1}});
//         st.insert({0,n-1});
//         long long ans=0;
//         while(!q.empty()&&k){
//             auto top=q.top();
//             q.pop();
//             int val=top.first;
//             int l=top.second.first;
//             int r=top.second.second;
//             k--;
//             ans+=val;
//             if(l+1<=r&&!st.count({l+1,r})){
//                 fq=qma(l+1,r);
//                 sq=qm(l+1,r);
//                 st.insert({l+1,r});
//                 q.push({(long long)fq-sq,{l+1,r}});
//             }
//             if(r-1>=l&&!st.count({l,r-1})){
//                 fq=qma(l,r-1);
//                 sq=qm(l,r-1);
//                 st.insert({l,r-1});
//                 q.push({(long long)fq-sq,{l,r-1}});
//             }
//         }
//         return ans;
//     }
// };




// //3559
// class Solution {
// public:
//     long long binpow(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
//     }
//     vector<int> euler, depth, first;
//     // eular is tour ie preorder and storing each node while visiting each node
//     // depth stores depth of each node in tree from 0
//     // first denoted index of element in eular vector only first occurence 
//     //that is why depth of node-depth of lca is positive
//     vector<vector<int>> adj, st;
//     int LOG;
//     const int mod=1e9+7;
//     void dfs(int u, int p, int d){
//         depth[u] = d;
//         first[u] = euler.size();
//         euler.push_back(u);
//         for(auto v: adj[u]){
//             if(v == p) continue;
//             dfs(v, u, d+1);
//             euler.push_back(u);
//         }
//     }

//     void buildSparse(){
//         int m = euler.size();
//         LOG = log2(m) + 1;
//         st.assign(m, vector<int>(LOG));
//         for(int i=0;i<m;i++)
//             st[i][0] = euler[i];
//         for(int j=1;j<LOG;j++){
//             for(int i=0;i+(1<<j)<=m;i++){
//                 int x = st[i][j-1];
//                 int y = st[i+(1<<(j-1))][j-1];
//                 st[i][j] =
//                     (depth[x] < depth[y]) ? x : y;
//             }
//         }
//     }
//     int lca(int u,int v){
//         int l = first[u];// first denotes first occurence of element in eular tour
//         int r = first[v];
//         if(l > r) swap(l,r);
//         int k = log2(r-l+1);
//         int x = st[l][k];
//         int y = st[r-(1<<k)+1][k];
//         return depth[x] < depth[y] ? x : y;
//     }
//     vector<int> assignEdgeWeights(vector<vector<int>>& edges,
//                                   vector<vector<int>>& queries) {
//         int n = edges.size()+1;
//         adj.resize(n+1);
//         for(auto &e: edges){
//             adj[e[0]].push_back(e[1]);
//             adj[e[1]].push_back(e[0]);
//         }
//         depth.resize(n+1);
//         first.assign(n+1, -1);
//         dfs(1, -1, 0);
//         buildSparse();
//         vector<int> ans;
//         const int mod = 1e9+7;
//         for(auto &q: queries){
//             int u = q[0];
//             int v = q[1];

//             int L = lca(u,v);

//             int len =
//                 (depth[u]-depth[L]) +
//                 (depth[v]-depth[L]);

//             long long ways = 0;
//             if(len!=0){
//                 ways=binpow(2,len-1,mod);
//             }
            
//             ans.push_back(ways);
//         }

//         return ans;
//     }
// };


// wrong approach , binary lifting is better than this
// class Solution {
// public:
//     vector<int> euler, depth, first;
//     // eular is tour ie preorder and storing each node while visiting each node
//     // depth stores depth of each node in tree from 0
//     // first denoted index of element in eular vector only first occurence 
//     //that is why depth of node-depth of lca is positive
//     vector<vector<int>> adj, st;
//     int LOG;
//     const int mod=1e9+7;
//     void dfs(int u, int p, int d){
//         depth[u] = d;
//         first[u] = euler.size();
//         euler.push_back(u);
//         for(auto v: adj[u]){
//             if(v == p) continue;
//             dfs(v, u, d+1);
//             euler.push_back(u);
//         }
//     }
//      vector<int>dsu;
// int find(int u){
//     if(dsu[u]<0)return u;
//     return dsu[u]=find(dsu[u]);
// }
// void unionf(int u,int v){
//     int pu=find(u);
//     int pv=find(v);
//     if(pu==pv)return;
//     if(dsu[pu]<dsu[pv]){
//         dsu[pu]+=dsu[pv];
//         dsu[pv]=pu;
//     }else{
//         dsu[pv]+=dsu[pu];
//         dsu[pu]=pv;
//     }
// }
//     void buildSparse(){
//         int m = euler.size();
//         LOG = log2(m) + 1;
//         st.assign(m, vector<int>(LOG));
//         for(int i=0;i<m;i++)
//             st[i][0] = euler[i];
//         for(int j=1;j<LOG;j++){
//             for(int i=0;i+(1<<j)<=m;i++){
//                 int x = st[i][j-1];
//                 int y = st[i+(1<<(j-1))][j-1];
//                 st[i][j] =
//                     (depth[x] < depth[y]) ? x : y;
//             }
//         }
//     }
//     int lca(int u,int v){
//         int l = first[u];// first denotes first occurence of element in eular tour
//         int r = first[v];
//         if(l > r) swap(l,r);
//         int k = log2(r-l+1);
//         int x = st[l][k];
//         int y = st[r-(1<<k)+1][k];
//         return depth[x] < depth[y] ? x : y;
//     }
//     void buildAdjFromDSU(int n){
//     adj.resize(n);
//     for(int u = 0; u < n; u++){
//         if(dsu[u] >= 0){          // u is not a root, dsu[u] is its parent
//             int p = dsu[u];
//             adj[u].push_back(p);
//             adj[p].push_back(u);
//         }
//     } }
//      vector<int> pathExistenceQueries(int n, vector<int> nums, int maxDiff, vector<vector<int>>q) {
        
//         vector<vector<int>>p;
//         for(int i=0;i<n;i++)p.push_back({nums[i],i});
//         sort(begin(p),end(p));
//         dsu.assign(n,-1);
//         for(int i =1;i<n;i++){
//             if(abs(p[i][0]-p[i-1][0])<=maxDiff)unionf(p[i][1],p[i-1][1]);
//         }
//         buildAdjFromDSU(n);
//         depth.resize(n);
//         first.resize(n,-1);
//         for(int i=0;i<n;i++){
//             if(first[i]==-1)dfs(i,-1,0);
//         }
//         buildSparse();
//         vector<int>ans(q.size(),0);
//         for(int i=0;i<q.size();i++)
//         {int u = q[i][0];
//         int v = q[i][1];
//         if(find(u)==find(v)){
//         int L = lca(u,v);
//         int len =(depth[u]-depth[L]) +(depth[v]-depth[L]);
//         ans[i]=len;}else ans[i]=-1;
//     }
//     return ans;
//     }
// };

// int main(){
//     Solution s;
//     vector<int>ans=s.pathExistenceQueries(5,{5,3,1,9,10},2,{{0,1},{0,2},{2,3},{4,3}});
//     for(auto it:ans)cout<<it<<' ';
// }

//revision
//rmq 
// vector<vector<int>>st;
// vector<int>nums;
// void build(){
//     int n=nums.size();
//     int m=log2(n)+1;
//     st.assign(n,vector<int>(m,0));
//     for(int i=0;i<n;i++)st[i][0]=i;
//     for(int j=1;j<m;j++){
//         for(int i=0;i<=n-(1<<j);i++){
//             int idx=i;
//             int sidx=i+(1<<j)-1;
//             if(nums[st[idx][j-1]]<nums[st[sidx][j-1]]){st[i][j]=st[idx][j-1];}
//             else st[i][j]=st[sidx][j-1];
//         }
//     }
// }
// int rmq(int l,int r){
//     int k=r-l+1;
//     int p=log2(k);
//     int rem=k-(1<<p);
//     int si=l+rem;
//     int sk=log2(r-si+1);
//     return min(nums[st[l][p]],nums[st[si][sk]]);
// }
// int main(){
//     nums.assign(6,0);
//     for(auto &it:nums)cin>>it;
//     build();
//     cout<<rmq(0,5)<<endl;
//     cout<<rmq(3,4)<<endl;
//     cout<<rmq(2,4)<<endl;
//     cout<<rmq(1,1)<<endl;
// }


//gcd calc


// vector<vector<int>>st;
// vector<int>nums;
// void build(){
//     int n=nums.size();
//     int m=log2(n)+1;
//     st.assign(n,vector<int>(m,0));
//     for(int i=0;i<n;i++)st[i][0]=nums[i];
//     for(int j=1;j<m;j++){
//         for(int i=0;i<=n-(1<<j);i++){
//             int idx=i;
//             int sidx=i+(1<<(j-1));
//             st[i][j]=__gcd(st[idx][j-1],st[sidx][j-1]);
//         }
//     }
// }
// int rgcdq(int l,int r){
//     int k=r-l+1;
//     int p=log2(k);
//     int rem=k-(1<<p);
//     int si=l+rem;
//     int sk=log2(r-si+1);
//     return __gcd(st[l][p],st[si][sk]);
// }
// int main(){
//     nums.assign(10,0);
//     for(auto &it:nums)cin>>it;
//     build();
//     for(int i=0;i<10;i++){
//         for(int j=i;j<10;j++)cout<<rgcdq(i,j)<<" ";
//     }
// }