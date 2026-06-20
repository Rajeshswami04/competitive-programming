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
//         int k=log10(t)/log10(2);
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
//         int k=log10(t)/log10(2);
//         return max(arr[rmqma[l][k]],arr[rmqma[l+t-pow(2,k)][k]]);
//     }
//     long long maxTotalValue(vector<int>& nums, int k) {
//         int n=nums.size();
//         int t=log10(n)/log10(2)+1;
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




//3559
class Solution {
public:
    long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
    }
    vector<int> euler, depth, first;
    // eular is tour ie preorder and storing each node while visiting each node
    // depth stores depth of each node in tree from 0
    // first denoted index of element in eular vector only first occurence 
    //that is why depth of node-depth of lca is positive
    vector<vector<int>> adj, st;
    int LOG;
    const int mod=1e9+7;
    void dfs(int u, int p, int d){
        depth[u] = d;
        first[u] = euler.size();
        euler.push_back(u);
        for(auto v: adj[u]){
            if(v == p) continue;
            dfs(v, u, d+1);
            euler.push_back(u);
        }
    }

    void buildSparse(){
        int m = euler.size();
        LOG = log2(m) + 1;
        st.assign(m, vector<int>(LOG));
        for(int i=0;i<m;i++)
            st[i][0] = euler[i];
        for(int j=1;j<LOG;j++){
            for(int i=0;i+(1<<j)<=m;i++){
                int x = st[i][j-1];
                int y = st[i+(1<<(j-1))][j-1];
                st[i][j] =
                    (depth[x] < depth[y]) ? x : y;
            }
        }
    }
    int lca(int u,int v){
        int l = first[u];// first denotes first occurence of element in eular tour
        int r = first[v];
        if(l > r) swap(l,r);
        int k = log2(r-l+1);
        int x = st[l][k];
        int y = st[r-(1<<k)+1][k];
        return depth[x] < depth[y] ? x : y;
    }
    vector<int> assignEdgeWeights(vector<vector<int>>& edges,
                                  vector<vector<int>>& queries) {
        int n = edges.size()+1;
        adj.resize(n+1);
        for(auto &e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        depth.resize(n+1);
        first.assign(n+1, -1);
        dfs(1, -1, 0);
        buildSparse();
        vector<int> ans;
        const int mod = 1e9+7;
        for(auto &q: queries){
            int u = q[0];
            int v = q[1];

            int L = lca(u,v);

            int len =
                (depth[u]-depth[L]) +
                (depth[v]-depth[L]);

            long long ways = 0;
            if(len!=0){
                ways=binpow(2,len-1,mod);
            }
            
            ans.push_back(ways);
        }

        return ans;
    }
};