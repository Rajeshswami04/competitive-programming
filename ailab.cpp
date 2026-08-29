#include <bits/stdc++.h>
using namespace std;
// sign=mark 5 vivas 4 best vivas
// quiz is also possible

// // void dfs(int tar, int i, vector<int> &path, vector<vector<int>> &adj, vector<int> &vis)
// // {
// //     if (vis[i])
// //         return;
// //     vis[i] = 1;
// //     if (i == tar)
// //     {
// //         for (int j : path)
// //         {
// //             cout << j << " ";
// //         }
// //         return;
// //     }
// //     for (auto it : adj[i])
// //     {
// //         if (vis[it] == 0)
// //         {
// //             path.push_back(it);
// //             dfs(tar, it, path, adj, vis);
// //             path.pop_back();
// //         }
// //     }
// // }
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

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> edges(n, vector<int>(2, 0));
//     for (auto &it : edges)
//         cin >> it[0] >> it[1];
//     int v = 7;
//     vector<vector<int>> adj(v);
//     for (auto &it : edges)
//     {
//         adj[it[0]].push_back(it[1]);
//         adj[it[1]].push_back(it[0]);
//     }
//     vector<int> vis(v, 0);
//     bfs(adj, 0, 4);
//     vector<int> path = {0};
//     // dfs(4, 0, path, adj, vis);
// }

// time complexity= o(v+e) bfs ,  for dfs o(v+e)
// space complexity bfs=o(v*v+e) , dfs(v+e) + recursion stack isand vis isand path array so O(3v+e)

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

// second question

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

// simple program
// simple program
//  first ques
// second ques
// simple astar
// three questions in different assignments
//  total 8 assigne
// included in index
#include <bits/stdc++.h>
using namespace std;

// void astar()
// {
//     int n;
//     cout << "enter number of nodes:";
//     cin >> n;
//     vector<int> h(n);
//     cout << "enter heuristic values for each node;";
//     for (auto &it : h)
//         cin >> it;
//     int m;
//     cout << "enter number of edges isand cost";
//     cin >> m;
//     vector<vector<int>> e(m, vector<int>(3, 0));
//     cout << "enter edges ";
//     for (auto &it : e)
//     {
//         cin >> it[0] >> it[1] >> it[2];
//     }
//     vector<vector<pair<int, int>>> adj(n);
//     for (auto it : e)
//     {
//         adj[it[0]].push_back({it[1], it[2]});
//         adj[it[1]].push_back({it[0], it[2]});
//     }
//     vector<int> dis(n, 1e9);
//     dis[0] = 0;
//     priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
//     pq.push({h[0], 0, 0});
//     vector<int> path(n, -1);
//     while (!pq.empty())
//     {
//         auto it = pq.top();
//         pq.pop();
//         int u = it[2];
//         int hh = it[0] + dis[u];
//         int ac = it[1];
//         for (auto v : adj[u])
//         {
//             int newh = dis[v.first] + h[v.first];
//             int cost = ac + v.second;
//             if (dis[v.first] > cost)
//             {
//                 path[v.first] = u;
//                 dis[v.first] = cost;
//                 pq.push({newh, cost, v.first});
//             }
//         }
//     }
//     cout << "cost is " << dis[n - 1] << endl;
//     int i = n - 1;
//     vector<int> ans;
//     cout << "path is:";
//     while (i != -1)
//     {
//         ans.push_back(i);
//         i = path[i];
//     }
//     reverse(begin(ans), end(ans));
//     for (int i : ans)
//         cout << i << " ";
// }
// int main()
// {
//     astar();
// }
// enter number of nodes:6
// enter heuristic values for each node;
// 10 15 5 5 10 0 enter number of edges isand cost 8 enter edges 0 1 10 1 4 11 2 4 11 0 2 12 0 3 5 2 3 6 3 5 14 2 5 8 cost is 19 path is : 0 3 5

    // void transportastar(){
    //     int n;
    //     cout<<"enter number of nodes:";
    //     cin>>n;
    //     vector<int>h(n);
    //     cout<<"enter constraints in terms of time  for each node;";
    //     for(auto &it:h)cin>>it;
    //     int m;
    //     cout<<"enter number of edges ";
    //     cin>>m;
    //     vector<vector<int>>e(m,vector<int>(3,0));
    //     cout<<"enter edges isand time ";
    //     for(auto &it:e){cin>>it[0]>>it[1]>>it[2];}
    //     cout<<"enter target node:";
    //     int t;
    //     cin>>t;
    //     vector<vector<pair<int,int>>>adj(n);
    //     for(auto it:e){adj[it[0]].push_back({it[1],it[2]}); adj[it[1]].push_back({it[0],it[2]});}
    //     vector<int>dis(n,1e9);
    //     dis[0]=0;
    //     priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
    //     pq.push({h[0],0,0});
    //     while(!pq.empty()){
    //         auto it=pq.top();
    //         pq.pop();
    //         int u=it[2];
    //         int hh=it[0]+dis[u];  int ac=it[1];
    //         for(auto v:adj[u]){
    //             int newh=dis[v.first]+h[v.first];
    //             int cost=ac+v.second;
    //             if(dis[v.first]>cost){
    //                 dis[v.first]=cost;
    //                 pq.push({newh,cost,v.first});
    //             }
    //         }
    //     }
    //     cout<<"time requiered to trauma centre "<<dis[t];
    // }
    // int main(){
    //     transportastar();
    // }
    // enter number of nodes:6
    // enter constraints in terms of time  for each node;10 15 5 5 10 0
    // enter number of edges 8
    // enter edges isand time
    // 0 1 10
    // 1 4 11
    // 2 4 11
    // 0 2 12
    // 0 3 5
    // 2 3 6
    // 3 5 14
    // 2 5 8
    // enter target node:5
    // time requiered to trauma centre 19

//     void robotautonoumus()
// {
//     int m, n;
//     cout << "enter number of rows:";
//     cin >> m;
//     cout << "enter number of cols:";
//     cin >> n;
//     vector<vector<int>> mat(m, vector<int>(n, 0));
//     cout << "enter matrix values their costs isand -1 for blocks:";
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }
//     vector<vector<int>> h(m, vector<int>(n, 0));
//     cout << "enter matrix values for heuritstic costs ";
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> h[i][j];
//         }
//     }
//     cout << "enter target node coordinate:";
//     int tx, ty;
//     cin >> tx >> ty;
//     if (tx < 0 || tx >= m || ty < 0 || ty >= n)
//     {
//         cout << "invalid target ";
//         return;
//     }
//     if (mat[0][0] == -1)
//     {
//         cout << 0;
//         return;
//     }
//     vector<vector<int>> dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
//     vector<vector<int>> dis(m, vector<int>(n, 1e9));
//     dis[0][0] = mat[0][0];
//     priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
//     pq.push({h[0][0], mat[0][0], 0, 0});
//     unordered_map<int, unordered_map<int, pair<int, int>>> par;
//     par[0][0] = {-1, -1};
//     while (!pq.empty())
//     {
//         auto it = pq.top();
//         pq.pop();
//         int x = it[2];
//         int y = it[3];
//         int ac = it[1];
//         for (auto d : dir)
//         {
//             int x1 = x + d[0];
//             int y1 = y + d[1];
//             if (x1 < 0 | y1 < 0 || y1 >= n || x1 >= m || mat[x1][y1] == -1)
//                 continue;
//             int newh = ac + mat[x1][y1] + h[x1][y1];
//             int cost = ac + mat[x1][y1];
//             if (dis[x1][y1] > cost)
//             {
//                 par[x1][y1] = {x, y};
//                 dis[x1][y1] = cost;
//                 pq.push({newh, cost, x1, y1});
//             }
//         }
//     }
//     cout << "shortes cost:" << dis[tx][ty] << endl;
//     cout << "path is:";
//     int ttx = tx;
//     int tty = ty;
//     vector<vector<int>> p;
//     while (ttx != -1)
//     {
//         p.push_back({ttx, tty});
//         ttx = par[ttx][tty].first;
//         tty = par[ttx][tty].second;
//     }
//     reverse(begin(p), end(p));
//     for (auto it : p)
//     {
//         cout << it[0] << " " << it[1] << endl;
//     }
// }
// int main(){
//     robotautonoumus();
// }
// // enter number of rows:3
// enter number of cols:3
// enter matrix values their costs isand -1 for blocks:
// 1 2 3
// -1 0 -1
// 3 5 6
// enter matrix values for heuritstic costs
// 3 5 2
// 3 2 5
// 4 2 3
// enter target node coordinate:2 2
// shortes cost:14
// path is:0 0
// 1 1
// 2 1
// 2 2

// void dronsupply(){
//     int n;
//     cout<<"enter number of nodes:";
//     cin>>n;
//     vector<int>h(n);
//     cout<<"enter flight cost in terms of time  for each node;";
//     for(auto &it:h)cin>>it;
//     int m;
//     cout<<"enter number of edges ";
//     cin>>m;
//     vector<vector<int>>e(m,vector<int>(3,0));
//     cout<<"enter edges isand cost of flight  ";
//     for(auto &it:e){cin>>it[0]>>it[1]>>it[2];}
//     cout<<"enter target node:";
//     int t;
//     cin>>t;
//     vector<vector<pair<int,int>>>adj(n);
//     for(auto it:e){adj[it[0]].push_back({it[1],it[2]}); adj[it[1]].push_back({it[0],it[2]});}
//     vector<int>dis(n,1e9);
//     dis[0]=0;
//     priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
//     pq.push({h[0],0,0});
//      vector<int>path(n,-1);
//     while(!pq.empty()){
//         auto it=pq.top();
//         pq.pop();
//         int u=it[2];
//         int hh=it[0]+dis[u];  int ac=it[1];
//         for(auto v:adj[u]){
//             int newh=dis[v.first]+h[v.first];
//             int cost=ac+v.second;
//             if(dis[v.first]>cost){
//                 path[v.first]=u;
//                 dis[v.first]=cost;
//                 pq.push({newh,cost,v.first});
//             }
//         }
//     }
//     cout<<"cost is "<<dis[n-1]<<endl;
//     int i=n-1;
//     vector<int>ans;
//     cout<<"path is:"; while(i!=-1){ans.push_back(i); i=path[i];}
//     reverse(begin(ans),end(ans));
//     for(int i:ans)cout<<i<<" ";
// }
// int main(){
//     dronsupply();
// }
// enter number of nodes:6
// enter flight cost in terms of time  for each node;10 15 5 5 10 0
// enter number of edges 8
// enter edges isand cost of flight   0 1 10
// 1 4 11
// 2 4 11
// 0 2 12
// 0 3 5
// 2 3 6
// 3 5 14
// 2 5 8
// enter target node:5
// cost is 19
// path is:0 3 5




// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// void func1(){
//     int n;
//     cout << "number of nodes:";
//     if (!(cin >> n) || n <= 0) return;
//     vector<double> v(n);
//     cout << "enter the probabilty  of each node:";
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     vector<int> ava(n, 0);
//     cout << "enter the for each node it is failed or not :";
//     for (int i = 0; i < n; i++) {
//         cin >> ava[i]; // 1 = failed
//     }
//     vector<vector<int>> adj(n);
//     cout << "number of edges:";
//     int a;
//     cin >> a;
//     for (int i = 0; i < a; i++) {
//         int x, y; 
//         cin >> x >> y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     int t = -1;
//     vector<int> path(n, -1);
//     vector<double> vis(n, -1.0); 
//     priority_queue<pair<double, int>> pq; 
//     vis[0] = v[0];
//     pq.push({v[0], 0});
//     while (!pq.empty()) {
//         auto it = pq.top();
//         pq.pop();
//         double cost = it.first;
//         int node = it.second;
//         if (cost < vis[node]) continue;
//         if (ava[node] == 1) {
//             t = node;
//             break;   }
//         for (auto u : adj[node]) {
//             double ncost = cost * v[u];
//             if (ncost > vis[u]) {
//                 vis[u] = ncost;
//                 path[u] = node;
//                 pq.push({vis[u], u});
//             }
//         }
//     }
//     if (t == -1) {
//         cout << -1 << " we can not reach " << endl;
//     } else {
//         cout << "maximum  probability " << vis[t] << endl;
//         vector<int> p;
//         int i = t;
//         while (i != -1) {
//             p.push_back(i); 
//             i = path[i];
//         }
//         reverse(begin(p), end(p));
//         for (auto g : p) {
//             cout << g << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     func1();
//     return 0;
// }
// number of nodes:4
// enter the probabilty  of each node:.9 .8 .4 .95
// enter the for each node it is failed or not :0 0 0 1
// number of edges:3
// 0 1
// 0 2 
// // 2 3
// maximum  probability 0.342
// 0 2 3 








// #include <iostream>
// #include <vector>
// #include <queue>
// #include <climits>
// #include <algorithm>
// using namespace std;
// void func2(){
//     int n;
//     cout << "number of nodes:";
//     cin >> n;
//     vector<int> v(n);
//     cout << "enter the estimated  distance  of each node or space :";
//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }
//     vector<int> ava(n, 0);
//     cout << "enter the for each node it is avaiable or not :";
//     for(int i = 0; i < n; i++){
//         cin >> ava[i];
//     }
//     vector<vector<int>> adj(n);
//     cout << "number of coneections:";
//     int a;
//     cin >> a;
//     for(int i = 0; i < a; i++){
//         int x, y; 
//         cin >> x >> y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     int t = -1;
//     vector<int> path(n, -1);
//     vector<int> vis(n, INT_MAX);
//     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//     vis[0] = v[0];
//     pq.push({v[0], 0});
//     while(!pq.empty()){
//         auto it = pq.top();
//         pq.pop();
//         int cost = it.first;
//         int node = it.second;
//         if(cost > vis[node]) continue;
//         if(ava[node] == 1){
//             t = node;
//             break; 
//         }
//         for(auto u : adj[node]){
//             int ncost = v[u] + cost;
//             if(vis[u] > ncost){
//                 vis[u] = ncost;
//                 path[u] = node;
//                 pq.push({vis[u], u});
//             }
//         }
//     }
//     if(t == -1){
//         cout << -1 << " we can not reach ";
//     } else {
//         cout << "minimum cost " << vis[t] << endl;
//         vector<int> p;
//         int i = t;
//         while(i != -1){
//             p.push_back(i); 
//             i = path[i];
//         }
//         reverse(begin(p), end(p));
//         for(auto g : p){
//             cout << g << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     func2();
//     return 0;
// }
// number of nodes:7
// enter the estimated  distance  of each node or space :4 2 4 3 5 7 8
// enter the for each node it is avaiable or not :0 0 0 1 1 1 1
// number of coneections:6
// 0 1
// 0 2
// 1 3
// 1 4
// 2 5
// 2 6
// minimum cost 9
// 0 1 3 

// //3
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// struct node {
//     bool isand;
//     vector<pair<int, int>> child;
// };
// vector<node> graph;
// vector<int> path;
// int AOStar(int u) {
//     if (graph[u].child.size() == 0) {
//         return 0;
//     }
//     if (graph[u].isand == true) {
//         int total = 0;
//         for (auto x : graph[u].child) {
//             int v = x.first;
//             int cost = x.second;
//             int childcost = AOStar(v);
//             total += cost + childcost;
//         }
//         return total;
//     }
//     else {
//         int minimum = INT_MAX;
//         int bestChild = -1;
//         for (auto x : graph[u].child) {
//             int v = x.first;
//             int cost = x.second;
//             int childcost = AOStar(v);
//             int totalcost = cost + childcost;
//             if (totalcost < minimum) {
//                 minimum = totalcost;
//                 bestChild = v;
//             }
//         }
//         path[u] = bestChild;
//         return minimum;
//     }
// }
// void printpath(int u) {
//     cout << u;
//     if (graph[u].child.size() == 0) {
//         return;
//     }
//     cout << " to ";
//     if (graph[u].isand) {
//         cout << "AND" << endl;
//         for (auto x : graph[u].child) {
//             int v = x.first;
//             cout << " ";
//             printpath(v);
//         }
//     }
//     else {
//         cout << "OR" << endl;
//         int v = path[u];
//         printpath(v);
//     }
// }
// int main() {
//     graph.resize(6);
//     path.resize(6, -1);
//     graph[0].isand = false;
//     graph[1].isand = true;
//     graph[2].isand = false;
//     graph[3].isand = false;
//     graph[4].isand = false;
//     graph[5].isand = false;
//     graph[0].child.push_back({1, 0});
//     graph[0].child.push_back({2, 0});
//     graph[1].child.push_back({3, 50});
//     graph[1].child.push_back({4, 40});
//     graph[2].child.push_back({5, 100});
//     int answer = AOStar(0);
//     cout << "Minimum Cost = " << answer << endl;
//     printpath(0);
//     return 0;
// }
// Minimum Cost = 90
// 0 to OR
// 1 to AND
//  3 4





// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// struct node {
//     bool isand;
//     vector<pair<int, int>> child;
// };
// vector<node> graph;
// vector<int> path;
// int AOStar(int u) {
//     if (graph[u].child.empty()) {
//         return 0;
//     }
//     if (graph[u].isand) {
//         int total = 0;
//         for (auto x : graph[u].child) {
//             int v = x.first;
//             int cost = x.second;
//             int childcost = AOStar(v);
//             total += cost + childcost;
//         }
//         return total;
//     }
//  else {
//         int minimum = INT_MAX;
//         int bestChild = -1;
//         for (auto x : graph[u].child) {
//             int v = x.first;
//             int cost = x.second;
//             int childcost = AOStar(v);
//             int totalcost = cost + childcost;
//             if (totalcost < minimum) {
//                 minimum = totalcost;
//                 bestChild = v;
//             }
//         }
//         path[u] = bestChild;
//         return minimum;
//     }
// }
// void printpath(int u) {
//     cout<<u;
//     if (graph[u].child.empty()) {
//         return;
//     }
//     if (graph[u].isand) {
//         cout << " AND " << endl;
//         for (auto x : graph[u].child) {
//             cout << " ";
//             printpath(x.first);
//         }
//     }
//     else {
//         cout << " OR " << endl;
//         int v = path[u];
//         printpath(v);
//     }
// }

// int main() {

//     graph.resize(8);
//     path.resize(8, -1);
//     graph[0].isand = false;       
//     graph[1].isand = true;        
//     graph[2].isand = false;       
//     graph[3].isand = false;       
//     graph[4].isand = false;
//     graph[5].isand = false;
//     graph[6].isand = false;
//     graph[7].isand = false;
//     graph[0].child.push_back({1, 0});
//     graph[0].child.push_back({2, 0});
//     graph[0].child.push_back({3, 0});
//     graph[1].child.push_back({4, 30});
//     graph[1].child.push_back({5, 40});
//     graph[2].child.push_back({6, 70});
//     graph[3].child.push_back({7, 100});
//     int answer = AOStar(0);
//     cout << "Minimum Cost = " << answer << endl;
//     printpath(0);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int cntconflicts(vector<vector<int>>&c){
    int cnt=0;
    set<vector<int>>mp;
    set<vector<int>>st;
    for(auto it:c){
        if(mp.find({it[0],it[2]})!=mp.end()||st.find({it[1],it[2]})!=st.end()){cnt++; continue;}
        st.insert({it[1],it[2]});
        mp.insert({it[0],it[2]});
    }
    return cnt;
}
int main(){
    vector<vector<vector<int>>>cls;
    int n;
    cout<<"enter timetable"; cin>>n;
    cls.assign(n,vector<vector<int>>());
    int i=0;
    while(i<n){
        int s;
        cout<<"enter slots in one timetable ";
        cin>>s;
        while(s--){
            int p,c,t;
            cout<<"pid cid time ";
            cin>>p>>c>>t;
            cls[i].push_back({p,c,t});
        }
        i++;
    }
    int randompos=(0+n)/2;
    int best=-1;
    int current=cntconflicts(cls[randompos]);
    while(randompos>=0&&randompos<n){
        int prev=((randompos>0)?(cntconflicts(cls[randompos-1])):INT_MAX);
        int next=((randompos<n)?(cntconflicts(cls[randompos+1])):INT_MAX);
        if(current<=prev&&current<=next){
            best=randompos;
            break;
        }else if(prev<current&&randompos>0){
            randompos-=1;
        }else if(next<current&&randompos<n){
            randompos+=1;
        }else{
            break;
        }
    }
    cout<<"best timetable is at index "<<best;
}


// enter timetable3
// enter slots in one timetable 3
// pid cid time 0 0 1 
// pid cid time 1 0 2
// pid cid time 3 0 1
// enter slots in one timetable 3
// pid cid time 0 2 0
// pid cid time 0 2 1
// pid cid time 0 2 2
// enter slots in one timetable 4
// pid cid time 1 2 0
// pid cid time 0 2 1
// pid cid time 0 4 1
// pid cid time 1 0 0
// best timetable is at index 1


//3

// double func(vector<int>&take,vector<double>&wt,vector<double>&p,int w){
//      double pro=0;
//     double rem=w;
//     for(int i=0;i<n;i++){
//         if(take[i])continue;
//         if(wt[i]<=rem){pro-=p[i]; rem-=wt[i];}
//         else{
//             pro-=((rem)/(wt[i]))*p[i]*1.0;}}
//     return 0-pro;}
// int main(){
//     int w;
//     cout<<"max weight ";
//     cin>>w;
//     int n;
//     cout<<"numper of weights";
//     vector<double>wt(n),p(n);
//     for(int i=0;i<n;i++){
//         cin>>wt[i]>>p[i];
//     }
//     // int best=INT_MAX;
//     vector<int>best(n,INT_MAX);
//     priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>pq;
//     vector<int>leave(n,0);
//     double zerot=func(leave,wt,p,w);
//     leave[0]=1;
//     double zeront=func(leave,wt,p,w);
//     best[0]=min(zeront,zerot);
//     pq.push({best[0],{1,zerot}});
//     pq.push({best[0],{1,zeront}});
//     while(!pq.empty()){
//         auto it=pq.top();
//         int idx=it.second[0];
//         int cost=it.first;
//         if(best[idx]<cost)break;
//         best[idx]=cost;
//         int nextidx=idx+1;
//         double nt=func(it,wt,p,w);
//         double t=func(,wt,p,w);
//     }
// }