#include <bits/stdc++.h>
using namespace std;
// sign=mark 5 vivas 4 best vivas
// quiz is also possible

// void bfs(vector<vector<int>> &adj, int src, int tar)
// {
//     int n = adj.size();
//     queue<pair<int, vector<int>>> q;
//     vector<int> vis(n, 0);
//     q.push({src, {src}});
//     vis[src] = 1;
//     while (!q.empty())
//     {
//         int p = q.size();
//         for (int i = 0; i < p; i++)
//         {
//             auto it = q.front().first;
//             vector<int> vec = q.front().second;
//             q.pop();
//             // cout<<it<<" ";
//             if (it == tar)
//             {
//                 for (int j : vec)
//                 {
//                     cout << j << " ";
//                 }
//                 return;
//             }
//             for (auto v : adj[it])
//             {
//                 if (vis[v] == 0)
//                 {
//                     vector<int>a=vec;
//                     a.push_back(v);
//                     q.push({v, a});
//                     vis[v] = 1;
//                 }
//             }
//         }
//     }
//     cout << "no target";
// }

// void dfs(int tar,int i,vector<int>&path,vector<vector<int>>&adj,vector<int>&vis){
//     if(vis[i])return;
//     vis[i]=1;
//     if(i==tar){
//         for(int j:path){cout<<j<<" ";} return; 
//     }
//     for(auto it:adj[i]){
//         if(vis[it]==0){path.push_back(it); dfs(tar,it,path,adj,vis); path.pop_back();}
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
    // vector<vector<int>> edges(n, vector<int>(2, 0));
    // for (auto &it : edges)
    //     cin >> it[0] >> it[1];
//     int v = 7;
//     vector<vector<int>> adj(v);
//     for (auto &it : edges)
//     {
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[0]);
//     }
//     vector<int>vis(v,0);
//     // bfs(adj, 0, 4);
//     vector<int>path={0};
//     dfs(4,0,path,adj,vis);
// }

// time complexity= o(v+e) bfs ,  for dfs o(v+e)
// space complexity bfs=o(v*v+e) , dfs(v+e) + recursion stack and vis and path array so O(3v+e)


//

// void dfs(int i,vector<int>&trap,vector<vector<int>>&adj,vector<int>&vis,vector<int>&path){
//     if(vis[i])return;
//     vis[i]=1;
//     if(trap[i]){
//         for(int j:path){cout<<j<<" ";} cout<<"\n";   
//     }
//     for(auto it:adj[i]){
//         if(vis[it]==0){path.push_back(it); dfs(it,trap,adj,vis,path); path.pop_back();}
//     }
// }
// int main(){
//     int n;
//     cout<<"enter number of rooms:"; cin>>n;
//     vector<int>trap(n);
//     // vector<int>dead(n);
//     cout<<"enter traped people number ;";
//     int t; cin>>t;
//     cout<<"ener their index;";
//     for(int i=0;i<t;i++){
//         int a; cin>>a;
//         trap[a]=1;
//     }
//     int e; cout<<"enter number of edges:"; cin>>e;
//     vector<vector<int>> edges(e, vector<int>(2, 0));
//     for (auto &it : edges){
//         cin >> it[0] >> it[1];}
//     vector<vector<int>> adj(n);
//     for (auto &it : edges)
//     {
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[0]);
//     }
//     vector<int>vis(n,0);
//     vector<int>path={0};
//     dfs(0,trap,adj,vis,path);
// }

// // enter number of rooms:7
// // enter traped people number ;2
// // ener their index;1 6
// // enter number of edges:6
// // 0 1
// // 1 2
// // 2 6
// // 2 5
// // 2 3
// // 3 4
// // 0 1 
// // 0 1 2 6 


//second question


// void bfs(vector<vector<int>> &adj, int src)
// {
//     int n = adj.size();
//     queue<int>q;
//     vector<int> vis(n, 0);
//     q.push(src);
//     vis[src] = 1;
//     int l=0;
//     while (!q.empty())
//     {
//         int p = q.size();
//         if(l>=3)return;
//         cout<<"\nlevel "<<l+1<<" people:";
//         l++;
//         for (int i = 0; i < p; i++)
//         {
//             auto it = q.front();
//             q.pop();
//             for (auto v : adj[it])
//             {
//                 if (vis[v] == 0)
//                 {
//                     cout<<v<<" ";
//                     q.push(v);
//                     vis[v] = 1;
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int v;
//     cout<<"enter number of people:";
//     cin >> v;
//     int n;
//     cout<<"enter connections between friends which are friends:";
//     cin>>n;
//     vector<vector<int>> edges(n, vector<int>(2, 0));
//     for (auto &it : edges)
//         cin >> it[0] >> it[1];
//     vector<vector<int>> adj(v);
//     for (auto &it : edges)
//     {
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[0]);
//     }
//     vector<int>vis(v,0);
//     bfs(adj, 0);
// }
// enter number of people:7
// enter connections between friends which are friends:6
// 0 1
// 1 2
// 2 6
// 2 5
// 2 3
// 3 4

// level 1 people:1 
// level 2 people:2 
// level 3 people:6 5 3 