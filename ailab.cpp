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
//     cout << "enter number of edges and cost";
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
// 10 15 5 5 10 0 enter number of edges and cost 8 enter edges 0 1 10 1 4 11 2 4 11 0 2 12 0 3 5 2 3 6 3 5 14 2 5 8 cost is 19 path is : 0 3 5

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
    //     cout<<"enter edges and time ";
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
    // enter edges and time
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
//     cout << "enter matrix values their costs and -1 for blocks:";
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
// enter matrix values their costs and -1 for blocks:
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
//     cout<<"enter edges and cost of flight  ";
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
// enter edges and cost of flight   0 1 10
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
void func1(){
    int n;
    cout<<"number of nodes:";
    cin>>n;

    vector<int>v(n);
    cout<<"enter the heuristic cost of each node:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<vector<int>>adj(n);
    cout<<"number of edges:";
    int a;
    cin>>a;

    for(int i=0;i<a;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int t;
    cout<<"enter target node:";
    cin>>t;

    vector<int>path(n,-1);
    vector<int>vis(n,0);
    vector<int>cost(n,INT_MAX);

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    pq.push({v[0],0});
    cost[0]=v[0];
    while(!pq.empty()){
        auto it =pq.top();
        int h=it.first;
        int node=it.second;
        pq.pop();

        if(vis[node]) continue;
        vis[node]=1;
        if(node==t) break;
        for(auto u:adj[node]){
            if(!vis[u] && cost[u]>cost[node]+v[u]){
                cost[u]=cost[node]+v[u];
                path[u]=node;
                pq.push({cost[u],u});
            }
        }
    }

    if(!vis[t]){
        cout<<-1<<" we can not reach ";
    }
    else{
        cout<<"minimum cost "<<cost[t]<<endl;

        vector<int>p;
        int i=t;

        while(i!=-1){
            p.push_back(i);
            i=path[i];
        }

        reverse(p.begin(),p.end());

        cout<<"path: ";
        for(auto g:p){
            cout<<g<<" ";
        }
    }
}

int main(){
    func1();
}
// number of nodes:7
// enter the heuristic cost of each node:4 2 4 3 3 4 5
// number of edges:6
// 0 1
// 0 2
// 1 3
// 1 4
// 2 5
// 2 6
// enter target node:5
// minimum cost 12
// 0 2 5 





// void func1(){
//     int n;
//     cout<<"number of nodes:";
//     cin>>n;
//     vector<double>v(n);
//     cout<<"enter the probabilty  of each node:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ava(n,0);
//     cout<<"enter the for each node it is failed or not :";
//     for(int i=0;i<n;i++){
//         cin>>ava[i];//1=failed
//     }
//     vector<vector<int>>adj(n);
//     cout<<"number of edges:";
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         int x,y; cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     int t;
//     vector<int>path(n,-1);
//     vector<double>vis(n,1e9);
//     vis[0]=v[0]*(-1.00);
//     priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>>pq;
//     pq.push({-1*v[0],0});
//     while(!pq.empty()){
//         auto it=pq.top();
//         pq.pop();
//         int node=it.second;
//         double cost=it.first;
//         for(auto u:adj[node]){
//             double ncost=1.0*v[u]*cost;
//             if(vis[u]>ncost){
//                 vis[u]=ncost;
//                 path[u]=node;
//                 pq.push({vis[u],u});
//                 if(ava[u]){t=u; break;}
//             }
//         }
//     }
//     if(vis[t]==1e9){
//         cout<<-1<<" we can not reach ";
//     }else{
//         cout<<"maximum  probability "<<abs(vis[t])<<endl;
//         vector<int>p;
//         int i=t;
//         while(i!=-1){p.push_back(i); i=path[i];}
//         reverse(begin(p),end(p));
//         for(auto g:p){
//             cout<<g<<" ";
//         }
//     }
// }
// int main(){
//     func1();
// }












// void func2(){
//     int n;
//     cout<<"number of nodes:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter the estimated  distance  of each node or space :";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int>ava(n,0);
//     cout<<"enter the for each node it is avaiable or not :";
//     for(int i=0;i<n;i++){
//         cin>>ava[i];
//     }
//     vector<vector<int>>adj(n);
//     cout<<"number of coneections:";
//     int a;
//     cin>>a;
//     for(int i=0;i<a;i++){
//         int x,y; cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     int t=-1;
//     vector<int>path(n,-1);
//     vector<int>vis(n,INT_MAX);
//     vis[0]=v[0];
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     pq.push({v[0],0});
//     while(!pq.empty()){
//         auto it=pq.top();
//         pq.pop();
//         int node=it.second;
//         int cost=it.first;
//         for(auto u:adj[node]){
//             int ncost=v[u]+cost;
//             if(vis[u]>ncost){
//                 vis[u]=ncost;
//                 path[u]=node;
//                 pq.push({vis[u],u});
//                 if(ava[u]){t=u;}
//             }
//             if(t!=-1)break;
//         }
//     }
//     if(t==-1){
//         cout<<-1<<" we can not reach ";
//     }else{
//         cout<<"minimum cost "<<vis[t]<<endl;
//         vector<int>p;
//         int i=t;
//         while(i!=-1){p.push_back(i); i=path[i];}
//         reverse(begin(p),end(p));
//         for(auto g:p){
//             cout<<g<<" ";
//         }
//     }
// }
// int main(){
//     func2();
// }
// number of nodes:7
// enter the estimated  distance  of each node or space:4 2 4 3  5 7 8
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



// vector<bool>status;
// vector<int>mincost;
// vector<vector<pair<int,int>>>g;

// void func3(){
//     int n;
//     cout<<"enter number of node:";
//     cin>>n;
//     status.assign(n,false);
//     mincost.assign(n,INT_MAX);
//     g.assign(n,vector<pair<int,int>>());

// }