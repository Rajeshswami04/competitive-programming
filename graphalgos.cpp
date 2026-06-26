#include <bits/stdc++.h>
using namespace std;
//dense graph 
// int n;
// vector<vector<int>> adj; 
// const int INF = 1000000000; 

// struct Edge {
//     int w = INF, to = -1;
// };

// void prim() {
//     int total_weight = 0;
//     vector<bool> selected(n, false);
//     vector<Edge> min_e(n);
//     min_e[0].w = 0;

//     for (int i = 0; i < n; ++i) {
//         int v = -1;

//         // Find minimum edge
//         for (int j = 0; j < n; ++j) {
//             if (!selected[j] && (v == -1 || min_e[j].w < min_e[v].w))
//                 v = j;
//         }

//         if (min_e[v].w == INF) {
//             cout << "No MST!" << endl;
//             return;
//         }

//         selected[v] = true;
//         total_weight += min_e[v].w;

//         if (min_e[v].to != -1)
//             cout << "Edge: " << v << " - " << min_e[v].to 
//                  << "  Weight: " << min_e[v].w << endl;

//         // Update adjacent vertices
//         for (int to = 0; to < n; ++to) {
//             if (adj[v][to] < min_e[to].w && !selected[to])
//                 min_e[to] = {adj[v][to], v};
//         }
//     }

//     cout << "Total Weight of MST: " << total_weight << endl;
// }

//sparse graph

// const int INF = 1000000000;

// struct Edge {
//     int w = INF, to = -1;
//     bool operator<(Edge const& other) const {
//         return make_pair(w, to) < make_pair(other.w, other.to);
//     }
// };

// int n;
// vector<vector<Edge>> adj;

// void prim() {
//     int total_weight = 0;
//     vector<Edge> min_e(n);
//     min_e[0].w = 0;
//     set<Edge> q;
//     q.insert({0, 0});
//     vector<bool> selected(n, false);
//     for (int i = 0; i < n; ++i) {
//         if (q.empty()) {
//             cout << "No MST!" << endl;
//             exit(0);
//         }

//         int v = q.begin()->to;
//         selected[v] = true;
//         total_weight += q.begin()->w;
//         q.erase(q.begin());

//         if (min_e[v].to != -1)
//             cout << v << " " << min_e[v].to << endl;

//         for (Edge e : adj[v]) {
//             if (!selected[e.to] && e.w < min_e[e.to].w) {
//                 q.erase({min_e[e.to].w, e.to});
//                 min_e[e.to] = {e.w, v};
//                 q.insert({e.w, e.to});
//             }
//         }
//     }

//     cout << total_weight << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int INF = 1000000000;

// struct Edge {
//     int w, to;
// };

// int n;
// vector<vector<Edge>> adj;

// void prim() {

//     int total_weight = 0;

//     vector<int> min_w(n, INF);      // best weight to connect vertex
//     vector<int> parent(n, -1);      // store MST parent
//     vector<bool> selected(n, false);

//     // min heap: (weight, vertex)
//     priority_queue<
//         pair<int,int>,
//         vector<pair<int,int>>,
//         greater<pair<int,int>>
//     > pq;

//     min_w[0] = 0;
//     pq.push({0, 0});

//     while (!pq.empty()) {

//         int v = pq.top().second;
//         int weight = pq.top().first;
//         pq.pop();

//         // skip if already selected (important!)
//         if (selected[v])
//             continue;

//         selected[v] = true;
//         total_weight += weight;

//         if (parent[v] != -1)
//             cout << v << " " << parent[v] << endl;

//         for (Edge e : adj[v]) {
//             if (!selected[e.to] && e.w < min_w[e.to]) {

//                 min_w[e.to] = e.w;
//                 parent[e.to] = v;

//                 // push new pair (duplicate allowed)
//                 pq.push({e.w, e.to});
//             }
//         }
//     }

//     cout << total_weight << endl;
// }

// graph coloring problem
// vector<int>vis;
// int cnt1=0;
// int cnt2=0;
// bool dfs(int c,int i, int p,vector<vector<int>>&adj){
//     vis[i]=c;
//     cnt1+=(c==0);
//     cnt2+=(c==1);
//     for(auto it:adj[i]){
//         if(it!=p){
//             if(vis[it]==c)return 0;
//             if(vis[it]==-1){
//             if(dfs(c^1,it,i,adj)==0)return 0;
//         }
//     }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>a={{1,2,4,5},{0,3},{0},{1,4},{0,3},{0}};
//     vis.assign(n,-1);
//     dfs(0,0,-1,a);
//     cout<<max(cnt1,cnt2);
// }

// you are given map of a colony , some houses know each other, whenever there is thieft they inform all their neighbours , 
// a thief want to take maximum gold from colony in one night, neighbours are given by array neighbours , total houses are given by n , '
// and gold in each house given by goldi array,
// plan max benifit as a branded thief.



// #include <bits/stdc++.h>
// using namespace std;
// const int INF = 1000000000;
// struct Edge {
//     int a, b, cost;
// };
// int n, m;
// vector<Edge> edges;
// vector<int> d;
// void solve(int start) {
//     d.assign(n, INF);
//     d[start] = 0;
//     for (;;) {
//         bool any = false;
//         for (auto &e : edges) {
//             if (d[e.a] < INF && d[e.b] > d[e.a] + e.cost) {
//                 d[e.b] = d[e.a] + e.cost;
//                 any = true;
//             }
//         }
//         if (!any)
//             break;
//     }
//     bool negCycle = false;
//     for (auto &e : edges) {
//         if (d[e.a] < INF && d[e.b] > d[e.a] + e.cost) {
//             negCycle = true;
//             break;
//         }
//     }

//     if (negCycle) {
//         cout << "Negative-weight cycle detected!\n";
//         return;
//     }
//     // Display distances
//     for (int i = 0; i < n; i++) {
//         if (d[i] == INF)
//             cout << "Distance to " << i << " = INF\n";
//         else
//             cout << "Distance to " << i << " = " << d[i] << "\n";
//     }
// }
// int main() {
//     cout << "Enter number of vertices and edges: ";
//     cin >> n >> m;
//     cout << "Enter edges (from to cost), 0-indexed:\n";
//     for (int i = 0; i < m; i++) {
//         Edge e;
//         cin >> e.a >> e.b >> e.cost;
//         edges.push_back(e);
//     }
//     int start;
//     cout << "Enter start vertex: ";
//     cin >> start;
//     solve(start);
//     return 0;
// }



// leetcode 1857


// class Solution {
// public:
//     int largestPathValue(string colors, vector<vector<int>>& edges) {
//         int n=colors.size();
//         vector<vector<int>>dp(n,vector<int>(26,0));
//         unordered_map<int,vector<int>>adj;
//         for(auto it:edges)adj[it[0]].push_back(it[1]);
//         queue<int>q;
//         vector<int>ind(n,0);
//         for(auto it:edges){ind[it[1]]++;}
//         for(int i=0;i<n;i++){if(ind[i]==0)q.push(i);  dp[i][colors[i]-'a']=1;}
//         int ans=0; int v=0;
//         while(!q.empty()){
//             v++;
//             int u=q.front();
//             int c=colors[u]-'a';
//             for(int v:adj[u]){
//                 int c1=colors[v]-'a';
//                 for(int j=0;j<26;j++){
//                 dp[v][j]=max(dp[v][j],dp[u][j]+(j==c1));
//                 }
//                 ind[v]--;
//                 if(ind[v]==0)q.push(v);
//             }
//             ans=max(ans,dp[u][c]);
//             q.pop();
//         }
//         if(v!=n)return -1;
//         return ans;
//     }
// };


