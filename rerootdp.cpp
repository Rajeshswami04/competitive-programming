// childans=parans-x+n-x

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int N;
int rootres=0;
vector<int>count;
int dfs(int i,int prev,unordered_map<int,vector<int>>&adj,int depth){
    int total=1;
    rootres+=depth;
    for(auto it:adj[i]){
        if(it==prev)continue;
        total+=dfs(it,i,adj,depth+1);
    }
    count[i]=total;
    return total;
}
void dfs1(int curr,int par, unordered_map<int,vector<int>>&adj,vector<int>&res){
    for(auto it:adj[curr]){
        if(it==par)continue;
        res[it]=res[curr]-count[it]+N-count[it];
        dfs1(it,curr,adj,res);
    }
}
  vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
     N=n;
     count.assign(n,0);
     unordered_map<int,vector<int>>adj;
     for(auto it:edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
     }
     rootres=0;
     dfs(0,-1,adj,0);
     vector<int>res(n,0);
     res[0]=rootres;
     dfs1(0,-1,adj,res);
     return res;
    }
};
