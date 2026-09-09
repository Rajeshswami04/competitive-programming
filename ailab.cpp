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
// 1 15 5 5 1 0 enter number of edges isand cost 8 enter edges 0 1 1 1 4 11 2 4 11 0 2 12 0 3 5 2 3 6 3 5 14 2 5 8 cost is 19 path is : 0 3 5

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
    // enter constraints in terms of time  for each node;1 15 5 5 1 0
    // enter number of edges 8
    // enter edges isand time
    // 0 1 1
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
// enter flight cost in terms of time  for each node;1 15 5 5 1 0
// enter number of edges 8
// enter edges isand cost of flight   0 1 1
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
//     graph[2].child.push_back({5, 10});
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
//     graph[3].child.push_back({7, 10});
//     int answer = AOStar(0);
//     cout << "Minimum Cost = " << answer << endl;
//     printpath(0);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int cntconflicts(vector<vector<int>>&c){
//     int cnt=0;
//     set<vector<int>>mp; 
//     set<vector<int>>st; 
//     set<vector<int>>rm; 
//     for(auto it:c){
//         if(mp.find({it[0],it[3]})!=mp.end() || st.find({it[1],it[3]})!=st.end() || rm.find({it[2],it[3]})!=rm.end()){
//             cnt++; 
//             continue;
//         }
//         mp.insert({it[0],it[3]});
//         st.insert({it[1],it[3]});
//         rm.insert({it[2],it[3]});
//     }
//     return cnt;
// }
// int main(){
//     vector<vector<int>> c; 
//     int s;
//     cout<<"enter slots in one timetable ";
//     cin>>s;
//     int timeslots = 5; 
//     for(int i=0; i<s; i++){
//         int p,cid,r,t;
//         cout<<"pid cid room_id time ";
//         cin>>p>>cid>>r>>t;
//         c.push_back({p,cid,r,t});
//     }
//     int current = cntconflicts(c);
//     int iterations = 10; 
//     while(iterations-- && current > 0){
//         vector<vector<int>> temp = c;
//         int randompos = rand() % s;
//         int newt = rand() % timeslots;
//         temp[randompos][3] = newt;
//         int next = cntconflicts(temp);
//         if(next < current){
//             current = next;
//             c = temp;
//         }
//     }
//     cout<<"conflicts in best timetable - "<<current<<"\n";
//     cout<<"pid\tcid\troom\ttime\n";
//     for(auto it: c){
//         cout<<it[0]<<"\t"<<it[1]<<"\t"<<it[2]<<"\t"<<it[3]<<"\n";
//     }
//     return 0;
// }
// enter slots in one timetable 3
// pid cid room_id time 11 1 12 1
// pid cid room_id time 12 2 12 1
// pid cid room_id time 11 3 14 2
// conflicts in best timetable -0
// pid     cid     room    time
// 11     1       12      1
// 12     2       12      0
// 11     3       14      2

// //2
// #include<bits/stdc++.h>
// using namespace std;
// vector<double> wgts;
// double findaccuracy(vector<int>& c){
//     double twscore = 0.0;
//     int featurecnt = 0;
//     for(int i = 0; i < c.size(); i++){
//         if(c[i] == 1){
//             twscore += wgts[i]; 
//             featurecnt++;
//         }
//     }
//     if(featurecnt == 0) return 0.0;
//     double pen = 0.5 * featurecnt;
//     double finalscore = twscore -pen;
//     return finalscore;
// }
// int countfeatures(vector<int>& c){
//     int cnt = 0;
//     for(int it : c) cnt += it;
//     return cnt;
// }
// int main(){
//     int n = 10;
//     wgts.assign(10,0.0);
//     for(int i=0;i<n;i++)cin>>wgts[i];
//     vector<int> cls(n, 0); 
//     for(int i = 0; i < 10; i++){
//         cls[rand() % n] = 1;
//     }
//     double current = findaccuracy(cls);
//     int iterations = 100;
//     while(iterations--){
//         vector<int> temp = cls;
//         int randompos = rand() % n;
//         temp[randompos] = 1 - temp[randompos];
//         double next = findaccuracy(temp);
//           if(next > current){
//             current = next;
//             cls = temp;
//         }
//     }
//     cout << "best model score: " << current << "\n";
//     cout << "total selected features: " << countfeatures(cls) << " out of " << n << "\n";
//     cout << "selected weature indices & wgts:\n";
//     for(int i = 0; i < n; i++){
//         if(cls[i] == 1){
//             cout << "feature " << i << "  wgt: " << wgts[i] << "\n";
//         }
//     }
//     return 0;
// }
// 15.5, 12.0, 18.2, 22.1, 14.3, 11.0, 9.5, 13.4, 1.2, 16.0,  
//     0.0,  0.0,  -0.5, 0.0,  -1.2, 0.0,  0.0,  -0.8, 0.0,  0.0,  
//     0.0,  -0.2, 0.0,  0.0,  0.0,  -0.9, 0.0,  2.0,  -1.5, 0.0,  
//     0.0,  0.0,  -0.4, 0.0,  0.0,  0.0,  -0.7, 0.0,  2.0,  0.0,  
//     0.0,  11.1, 0.0,  0.0,  -0.3, 13.4,  0.0,  1.0,  -0.6, 0.0,  
//     0.0,  0.0,  0.0,  -0.5, 0.0,  0.0,  -1.0, 0.0,  0.0,  0.0,  
//     0.0,  -0.8, 0.0,  0.0,  0.0,  -0.4, 0.0,  0.0,  -0.2, 0.0,  
//     0.0,  20.0,  -1.3, 0.0,  0.0,  0.0,  -0.5, 0.0,  0.0,  0.0,  
//     0.0,  -0.9, 0.0,  0.0,  -0.1, 1.0,  0.0,  0.0,  -0.7, 40.0,  
//     0.0,  1.0,  0.0,  -0.3, 0.0,  0.0,  -0.6, 0.0,  1.0,  1.0  
// best model score: 252.2
// total selected features: 21 out of 10
// selected weature indices & wgts:
// feature 0  wgt: 15.5
// feature 1  wgt: 12
// feature 2  wgt: 18.2
// feature 3  wgt: 22.1
// feature 4  wgt: 14.3
// feature 5  wgt: 11
// feature 6  wgt: 9.5
// feature 7  wgt: 13.4
// feature 8  wgt: 1.2
// feature 9  wgt: 16
// feature 27  wgt: 2
// feature 38  wgt: 2
// feature 41  wgt: 11.1
// feature 45  wgt: 13.4
// feature 47  wgt: 1
// feature 71  wgt: 20
// feature 85  wgt: 1
// feature 89  wgt: 40
// feature 91  wgt: 1
// feature 98  wgt: 1
// feature 99  wgt: 1

//3



// #include <bits/stdc++.h>
// using namespace std;

// #define INF 999999

// int n;
// int nodesvisited = 0;
// int bruteforcesearch = 0;
// struct Node {
//     vector<pair<int, int>> path;
//     vector<vector<int>> reducedmatrix;
//     int cost;
//     int vertex;
//     int level;
// };
// int reduceMatrix(vector<vector<int>>& matrix) {
//     int reducedcost = 0;
//     for (int i = 0; i < n; i++) {
//         int minval = INF;
//         for (int j = 0; j < n; j++) {
//             if (matrix[i][j] < minval) minval = matrix[i][j];
//         }
//         if (minval != INF && minval != 0) {
//             reducedcost += minval;
//             for (int j = 0; j < n; j++) {
//                 if (matrix[i][j] != INF) matrix[i][j] -= minval;
//             }
//         }
//     }
//     for (int j = 0; j < n; j++) {
//         int minval = INF;
//         for (int i = 0; i < n; i++) {
//             if (matrix[i][j] < minval) minval = matrix[i][j];
//         }
//         if (minval != INF && minval != 0) {
//             reducedcost += minval;
//             for (int i = 0; i < n; i++) {
//                 if (matrix[i][j] != INF) matrix[i][j] -= minval;
//             }
//         }
//     }
//     return reducedcost;
// }
// Node* createnode(vector<vector<int>> const &parmatrix, vector<pair<int, int>> const &path, int level, int i, int j) {
//     Node* node = new Node;
//     node->path = path;
//     if (level != 0) {
//         node->path.push_back({i, j});
//     }
//     node->reducedmatrix = parmatrix;
//     if (level != 0) {
//         for (int k = 0; k < n; k++) {
//             node->reducedmatrix[i][k] = INF; 
//             node->reducedmatrix[k][j] = INF; 
//         }
//         node->reducedmatrix[j][0] = INF;     
//     }
//     node->level = level;
//     node->vertex = j;
//     return node;
// }
// struct comp {
//     bool operator()(const Node* a, const Node* b) const {
//         return a->cost > b->cost;
//     }
// };
// int solveTSP(vector<vector<int>>& costmatrix) {
//     priority_queue<Node*, vector<Node*>, comp> pq;
//     vector<pair<int, int>> initpath;
//     Node* root = createnode(costmatrix, initpath, 0, 0, 0);
//     root->cost = reduceMatrix(root->reducedmatrix);
//     pq.push(root);
//     while (!pq.empty()) {
//         Node* minnode = pq.top();
//         pq.pop();
//         nodesvisited++;
//         int u = minnode->vertex;
//         if (minnode->level == n - 1) {
//             minnode->path.push_back({u, 0});
//             cout << "\noptimal tour Path: 1";
//             for (auto edge : minnode->path) {
//                 cout << " to " << edge.second + 1;
//             }
//             cout << "\n";
//             return minnode->cost;
//         }
//         for (int v = 0; v < n; v++) {
//             if (minnode->reducedmatrix[u][v] != INF) {
//                 Node* child = createnode(minnode->reducedmatrix, minnode->path, minnode->level + 1, u, v);
//                 int edge_cost = minnode->reducedmatrix[u][v];
//                 int reducedcost = reduceMatrix(child->reducedmatrix);
//                 child->cost = minnode->cost + edge_cost + reducedcost;
//                 pq.push(child);
//             }
//         }
//     }
//     return INF;
// }
// void countbruteforcenodes(int level) {
//     bruteforcesearch++;
//     if (level == n - 1) return;
//     for (int i = level + 1; i < n; i++) {
//         countbruteforcenodes(level + 1);
//     }
// }
// int main() {
//     cout << "enter number of cities  ";
//     cin>>n;
//     vector<vector<int>> costmatrix(n, vector<int>(n));
//     cout << "enter cost matrix " << n << " by " << n << " -1 for no route\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> costmatrix[i][j];
//             if (costmatrix[i][j] == -1 || i == j) {
//                 costmatrix[i][j] = INF;
//             }
//         }
//     }
//     int minicosttour = solveTSP(costmatrix);
//     countbruteforcenodes(0);
//     cout << "Minimum Tour Cost: " << minicosttour << "\n";
//     cout << "branch and bound nodes explored: " << nodesvisited << "\n";
//     cout << "brute force search total nodes: " << bruteforcesearch << "\n";
//     return 0;
// }
// enter number of cities  5
// enter cost matrix 5 by 5 -1 for no route
// -1 20 30 1 11
// 15 -1 16 4 2
// 3 5 -1 2 4
// 19 6 18 -1 3
// 16 4 7 16 -1

// optimal tour Path: 1 to 4 to 2 to 5 to 3 to 1
// Minimum Tour Cost: 28
// branch and bound nodes explored: 5
// brute force search total nodes: 65

// #include <bits/stdc++.h>
// using namespace std;

// int n;
// int capacity;

// struct Item {
//     int wgt;
//     int prof;
//     int id;
// };

// struct Node {
//     int level;
//     int prof;
//     int wgt;
//     double u;     
//     double cost; 
//     vector<int> nodessel;
// };

// bool compareitems(Item a, Item b) {
//     double r1 = (double)a.prof / a.wgt;
//     double r2 = (double)b.prof / b.wgt;
//     return r1 > r2;
// }

// void calculatebounds(Node* node, vector<Item>& items) {
//     if (node->wgt > capacity) {
//         node->u = INT_MAX;
//         node->cost = INT_MAX;
//         return;
//     }
//     int currwe = node->wgt;
//     int currpro = node->prof;
//     int currcostwei = node->wgt;
//     int currcopro = node->prof;
//     int j = node->level + 1;

//     while (j < n && currcostwei + items[j].wgt <= capacity) {
//         currcostwei += items[j].wgt;
//         currcopro += items[j].prof;
//         j++;
//     }
//     node->cost = -currcopro; 

//     j = node->level + 1;
//     while (j < n && currwe + items[j].wgt <= capacity) {
//         currwe += items[j].wgt;
//         currpro += items[j].prof;
//         j++;
//     }
//     if (j < n) {
//         currpro += (capacity - currwe) * ((double)items[j].prof / items[j].wgt);
//     }
//     node->u = -currpro; 
// }
// struct comp {
//     bool operator()(const Node* a, const Node* b) const {
//         return a->u > b->u;
//     }
// };
// int solveknapsack(vector<Item>& items, vector<int>& bestitems) {
//     sort(items.begin(), items.end(), compareitems);
//     priority_queue<Node*, vector<Node*>, comp> pq;
//     Node* root = new Node;
//     root->level = -1;
//     root->prof = 0;
//     root->wgt = 0;
//     calculatebounds(root, items);
//     pq.push(root);
//     double finalcost = root->cost; 
//     int maxactualprof = 0;
//     while (!pq.empty()) {
//         Node* minnode = pq.top();
//         pq.pop();
//         if (minnode->u > finalcost) {
//             delete minnode;
//             continue;
//         }
//         if (minnode->prof > maxactualprof && minnode->wgt <= capacity) {
//             maxactualprof = minnode->prof;
//             bestitems = minnode->nodessel;
//         }
//         int nextlevel = minnode->level + 1;
//         if (nextlevel >= n) {
//             delete minnode;
//             continue;
//         }
//         Node* left = new Node;
//         left->level = nextlevel;
//         left->wgt = minnode->wgt + items[nextlevel].wgt;
//         left->prof = minnode->prof + items[nextlevel].prof;
//         left->nodessel = minnode->nodessel;
//         left->nodessel.push_back(items[nextlevel].id);
//         calculatebounds(left, items);
//         if (left->wgt <= capacity) {
//             if (left->cost < finalcost) {
//                 finalcost = left->cost;
//             }
//             if (left->prof > maxactualprof) {
//                 maxactualprof = left->prof;
//                 bestitems = left->nodessel;
//             }
//             if (left->u <= finalcost) {
//                 pq.push(left);
//             } else {
//                 delete left;
//             }
//         } else {
//             delete left;
//         }
//         Node* right = new Node;
//         right->level = nextlevel;
//         right->wgt = minnode->wgt;
//         right->prof = minnode->prof;
//         right->nodessel = minnode->nodessel;
//         calculatebounds(right, items);
//         if (right->u <= finalcost) {
//             if (right->cost < finalcost) {
//                 finalcost = right->cost;
//             }
//             if (right->prof > maxactualprof) {
//                 maxactualprof = right->prof;
//                 bestitems = right->nodessel;
//             }
//             pq.push(right);
//         } else {
//             delete right;
//         }
//         delete minnode;
//     }

//     return (int)(-finalcost);
// }

// int main() {
//     cout << "enter number of items: ";
//     cin >> n;
//     cout << "enter knapsack capacity: ";
//     cin >> capacity;

//     vector<Item> items(n);
//     cout << "enter prof and wgt for each item:\n";
//     for (int i = 0; i < n; i++) {
//         items[i].id = i + 1;
//         cin >> items[i].prof >> items[i].wgt;
//     }

//     vector<int> ans;
//     int maxprof = solveknapsack(items, ans);

//     cout << "max prof: " << maxprof << "\n";
//     cout << "selected item  ";
//     sort(ans.begin(), ans.end());
//     for (int id : ans) {
//         cout << id << " ";
//     }
//     cout << "\n";

//     return 0;
// }

// enter number of items: 4
// enter knapsack capacity: 15
// enter prof and wgt for each item:
// 1 2
// 1 4
// 12 6
// 18 9
// max prof: 38
// selected item  1 2 4 




// #include <bits/stdc++.h>
// using namespace std;

// #define INF 999999

// int n;
// int nodesvisited = 0;
// int bruteforcesearch = 0;

// struct Node {
//     int wid;
//     int jid;
//     int cost;
//     int bound;
//     vector<bool> asjobs;
//     vector<pair<int, int>> path;
// };

// int calculatebound(int worker, int job, const vector<bool>& assigned, const vector<vector<int>>& costmatrix) {
//     int lowerbound = 0;
//     vector<bool> availjobs = assigned;
//     availjobs[job] = true;

//     // Estimate minimum remaining cost for unassigned workers
//     for (int i = worker + 1; i < n; i++) {
//         int mincost = INF;
//         for (int j = 0; j < n; j++) {
//             if (!availjobs[j] && costmatrix[i][j] < mincost) {
//                 mincost = costmatrix[i][j];
//             }
//         }
//         if (mincost != INF) {
//             lowerbound += mincost;
//         }
//     }

//     return lowerbound;
// }

// struct comp {
//     bool operator()(const Node* a, const Node* b) const {
//         return a->bound > b->bound; 
//     }
// };

// int solvejobassignment(const vector<vector<int>>& costmatrix, vector<pair<int, int>>& bass) {
//     priority_queue<Node*, vector<Node*>, comp> pq;
//     Node* root = new Node;
//     root->wid = -1;
//     root->jid = -1;
//     root->cost = 0;
//     root->bound = 0;
//     root->asjobs.assign(n, false);

//     for (int i = 0; i < n; i++) {
//         int mincost = INF;
//         for (int j = 0; j < n; j++) {
//             if (costmatrix[i][j] < mincost) mincost = costmatrix[i][j];
//         }
//         root->bound += mincost;
//     }

//     pq.push(root);

//     int mintotalcost = INF;

//     while (!pq.empty()) {
//         Node* minnode = pq.top();
//         pq.pop();
//         nodesvisited++;

//         int nextwor = minnode->wid + 1;
//         if (nextwor == n) {
//             if (minnode->cost < mintotalcost) {
//                 mintotalcost = minnode->cost;
//                 bass = minnode->path;
//             }
//             delete minnode;
//             continue;
//         }
//         for (int j = 0; j < n; j++) {
//             if (!minnode->asjobs[j]) {
//                 Node* child = new Node;
//                 child->wid = nextwor;
//                 child->jid = j;
//                 child->cost = minnode->cost + costmatrix[nextwor][j];
//                 child->asjobs = minnode->asjobs;
//                 child->asjobs[j] = true;
//                 child->path = minnode->path;
//                 child->path.push_back({nextwor, j});
//                 child->bound = child->cost + calculatebound(nextwor, j, minnode->asjobs, costmatrix);
//                 if (child->bound < mintotalcost) {
//                     pq.push(child);
//                 } else {
//                     delete child;
//                 }
//             }
//         }
//         delete minnode;
//     }
//     return mintotalcost;
// }
// void countbruteforcenodes(int level) {
//     bruteforcesearch++;
//     if (level == n) return;
//     for (int i = 0; i < n - level; i++) {
//         countbruteforcenodes(level + 1);
//     }
// }

// int main() {
//     cout << "enter matrix dimension  ";
//     cin >> n;
//     vector<vector<int>> costmatrix(n, vector<int>(n));
//     cout << "enter " << n << "x" << n << " cost matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> costmatrix[i][j];
//         }
//     }
//     vector<pair<int, int>> ans;
//     int mincost = solvejobassignment(costmatrix, ans);
//     countbruteforcenodes(0);
//     cout << "minimum total cost " << mincost << "\n";
//     cout << "answer worker = job\n";
//     for (auto p : ans) {
//         cout << "w " << p.first + 1 << " job " << p.second + 1 << "\n";
//     }
//     cout << " nodes explored: " << nodesvisited << "\n";
//     cout << "brute force search total nodes: " << bruteforcesearch << "\n";
//     return 0;
// }
// // enter matrix dimension  4
// // enter 4x4 cost matrix:
// // 9 2 7 8
// // 6 4 3 7
// // 5 8 1 8
// // 7 6 9 4
// // minimum total cost 13
// // answer worker = job
// // w 1 job 2
// // w 2 job 1
// // w 3 job 3
// // w 4 job 4
// //  nodes explored: 11
// // brute force search total nodes: 65



// #include <iostream>

// using namespace std;
// double f(double x) {
//     return -(x - 3) * (x - 3) + 1;
// }
// int main() {
//     double x, step;
//     cin >> x >> step;
//     while (true) {
//         double current = f(x);
//         double left = f(x - step);
//         double right = f(x + step);
//         if (left > current) {
//             x = x - step;
//         } else if (right > current) {
//             x = x + step;
//         } else {
//             break;
//         }
//     }
//     cout << "best x " << x << endl;
//     cout << "max ans " << f(x) << endl;
//     return 0;
// }
// 2
// .2
// best x 3
// max ans 1

