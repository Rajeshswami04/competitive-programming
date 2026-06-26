
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
///additionaly the thief is very greedy he want to rob every second house.
// plan max benifit as a branded thief.

// #include<bits/stdc++.h>
// using namespace std;
// int rotten(vector<vector<int>>mat){
//     queue<pair<int,int>>q;
//     int m=mat.size();
//     int n=mat[0].size();
//     vector<vector<int>>vis(m,vector<int>(n,0));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//           if(mat[i][j]==2){q.push({i,j});
//           vis[i][j]=1;}
//         }
//     }
//     int t=0;
//     vector<vector<int>>dir={{0,1},{1,0},{-1,0},{0,-1}};
//     while(!q.empty()){
//         t++;
//         int p=q.size();
//         for(int i=0;i<p;i++){
//         auto it=q.front(); q.pop();
//         int x=it.first; int y=it.second;
//         for(auto d:dir){
//             int nx=x+d[0];
//             int ny=y+d[1];
//             if(nx<m&&nx>=0&&ny<n&&ny>=0){
//                 if(vis[nx][ny]==0&&mat[nx][ny]==1){vis[nx][ny]=1;  mat[nx][ny]=2; q.push({nx,ny});}
//             }
//         }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==1)return -1;
//         }
//     }
//     return t-1;
// }
// int main(){
//     cout<<rotten({{0,2,1},{2,1,2},{1,0,2}});
// }




//bfs cycle detection
// #include<bits/stdc++.h>
// using namespace std;
// bool cyclebfs(vector<vector<int>>adj,int src){
//     int m=adj.size();
//     // int n=adj[0].size();
//     queue<int>q;
//     vector<int>vis(m);
//     vis[src]=1;
//     q.push(src);
//     while(!q.empty()){
//         auto it=q.front(); q.pop();
//         for(auto v:adj[it]){
//            if(it!=v){ if(vis[v]){return 1;}
//             vis[v]=1;
//             q.push(v);}
//         }
//     }
//     return 0;
// }
// int main(){
//     cout<<cyclebfs({{1},{2},{3},{4},{5},{}},0);
// }


//dsu code
#include<bits/stdc++.h>
using namespace std;
#define  print cout<<
// vector<int>dsu;
// int find(int u){
//     if(dsu[u]<0)return u;
//     return dsu[u]=find(dsu[u]);
// }
// void unionf(int u,int v){
//     int pu=find(u);
//     int pv=find(v);
//     if(pu==pv)return ;
//     if(dsu[pu]<=dsu[pv]){dsu[pu]+=dsu[pv]; dsu[pv]=pu;}
//     else{
//         dsu[pv]+=dsu[pu]; dsu[pu]=pv;
//     }
// }

// int main(){
//     int n=4;
//     dsu.assign(4,-1);
//     unionf(0,2);
//     unionf(0,3);
//     int t=(find(2)==find(3));
//     print t;
// }


// distnace of nearest cell having one
// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<

// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// vvi distance01(vvi& mat){
//     int m=mat.size();
//     int n=mat[0].size();
//     vvi ans(m,vi(n,0));
//     vvi dir={{0,1},{1,0},{0,-1},{-1,0}};
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==1)ans[i][j]=0;
//             else{
//                 queue<pi>q;
//                 q.push({i,j});
//                 vvi vis(m,vi(n,0));
//                 vis[i][j]=1;
//                 int t=0;
//                 while(!q.empty()){
//                 int p=q.size();
//                 t++;
//                 bool vvv=0;
//                 for(int k=0;k<p;k++){
//                 auto it=q.front();
//                 int x=it.first; int y=it.second;
//                 q.pop();
//                 int b=0;
//                 if(mat[x][y]==1){ans[i][j]=t-1; b=1;}
//                 if(b){vvv=1; break;}
//                 for(auto d:dir){
//                     int nx=x+d[0]; int ny=y+d[1];
//                     if(nx<m&&ny<n&&nx>=0&&ny>=0&&vis[nx][ny]==0){q.push({nx,ny}); vis[nx][ny]=1;}
//                 }    
//             } if(vvv)break;
//             }
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vvi mat={{0,0,1},{0,1,0},{1,0,1}};
//     vvi ans=distance01(mat);
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             print ans[i][j]<<" ";
//         }
//         print "\n";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>

// int wordladder(string beg,vector<string>dict,string end){
//     queue<pair<string,int>>q;
//     unordered_set<string>st(dict.begin(),dict.end());
//     st.erase(beg);
//     q.push({beg,1});
//     while(!q.empty()){
//         auto it=q.front(); q.pop();
//         string s=it.first;
//         int step=it.second;
//         if(s==end)return step;
//         for(int i=0;i<s.size();i++){
//             char temp=s[i];
//             for(char c='a';c<='z';c++){
//                 s[i]=c;
//                 if(st.find(s)!=st.end()){q.push({s,step+1}); st.erase(s);}
//             }
//             s[i]=temp;
//         }
//     }
//     return -1;
// }
// int main(){
//     cout<<wordladder("hit",{"hot","dog","dot","lot","log","cog"},"cog");
// }




// void wordladder2(string beg,vector<string>dict,string end){
//     queue<vector<string>>q;
//     unordered_set<string>st(dict.begin(),dict.end());
//     st.erase(beg);
//     q.push({beg});
//     vector<vector<string>>ans;
//     int level=0;
//      unordered_set<string>todel;
//     while(!q.empty()){
//         auto it=q.front(); q.pop();
//         string s=it.back();
//         if(s==end){
//             if(ans.size()==0||it.size()==ans[0].size()){
//             ans.push_back(it);}
//             continue;
//         }
//         if(it.size()>level){for(auto s:todel)st.erase(s);  level++; todel.clear();}
//         for(int i=0;i<s.size();i++){
//             char temp=s[i];
//             for(char c='a';c<='z';c++){
//                 s[i]=c;
//                 if(st.find(s)!=st.end()){
//                     it.push_back(s);
//                     q.push(it);
//                     it.pop_back();
//                     todel.insert(s);
//                 }
//             }
//             s[i]=temp;
//         }
//     }
//     for(auto it:ans){
//         for(string v:it)cout<<v<<" ";
//         cout<<'\n';
//     }
// }
// int main(){
//    wordladder2("bat",{"bot","pot","pat","poz","coz"},"coz");
// }


//cycle detection in dg
// vector<int>vis;
// bool dfs(int u,int p,vector<vector<int>>&adj){
//     vis[u]=2;
//     for(auto it:adj[u]){
//         if(it!=p&&vis[it]!=1){
//             if(vis[it]==2)return 1;
//             if(dfs(it,u,adj)==1)return 1;
//         }
//     }
//     vis[u]=1;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     vis.assign(n,0);
//     vector<vector<int>>adj={{1},{2},{3,6},{4},{5},{},{4},{8,1},{9},{7}};
//     for(int i=0;i<n;i++)
//         {if(vis[i]==0)if(dfs(i,-1,adj)==1){cout<<1<<"\n"; return 0;}}
//  cout<<0<<"\n";
// }



// topological sorting of array

// int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>>adj(n);
    // for(int i=0;i<n;i++){
    //     int m;
    //     cin>>m;
    //     for(int j=0;j<m;j++){int f; cin>>f; adj[i].push_back(f);}
    // }
    // vector<int>indeg(n,0);
    // for(auto it:adj){
    //     for(int i:it)indeg[i]++;
    // }
    // vector<int>ans;
    // queue<int>q;
    // for(int i=0;i<n;i++){if(indeg[i]==0)q.push(i);}
    // while(!q.empty()){
    //     auto it=q.front(); q.pop();
    //     ans.push_back(it);
    //     for(auto v:adj[it]){
    //         indeg[v]--;
    //         if(indeg[v]==0)q.push(v);
    //     }
    // }
    // if(ans.size()!=n){
    //     cout<<"cycle detected\n"; return 0;
    // }
    // for(auto it:ans)cout<<it<<" ";
// }


//alien dictionary

// int main(){
//     vector<string>vec;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         vec.push_back(s);
//     }
//     unordered_map<int,vector<int>>adj;
//     for(int i=0;i<n-1;i++){
//         string f=vec[i];
//         string s=vec[i+1];
//         int j=0; 
//         while(j<f.size()&&j<s.size()){if(f[j]==s[j]){j++; } else {adj[f[j]-'a'].push_back(s[j]-'a'); break;}}
//     }
//     vector<int>indeg(26,0);
//     unordered_set<int>st;
//     for(auto it:adj){
//         for(int i:it.second){indeg[i]++; st.insert(i);}
//         st.insert(it.first);
//     }
//     vector<int>ans;
//     queue<int>q;
//     for(int i=0;i<26;i++){if(indeg[i]==0&&st.find(i)!=st.end())q.push(i);}
//     while(!q.empty()){
//         auto it=q.front(); q.pop();
//         ans.push_back(it);
//         for(auto v:adj[it]){
//             indeg[v]--;
//             if(indeg[v]==0)q.push(v);
//         }
//     }
//     for(auto it:ans){char t=it+'a' ; cout<<t<<" ";}
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// // shortest path in ug 
// int shortestug(vvi&adj,int src,int tar){
//     int n=adj.size();
//     vector<int>vis(n,1e9);
//     vis[src]=0;
//     queue<int>q;
//     q.push(src);
//     int t=0;
//     while(!q.empty()){
//         int m=q.size();
//         t++;
//         for(int j=0;j<m;j++){
//         auto it=q.front();
//         q.pop();
//         for(auto v:adj[it]){
//             if(vis[v]==1e9){
//                 if(v==tar)return t;
//                 vis[v]=t;
//                 q.push(v);
//             }
//         }
//     }
// }
// return vis[tar];
// }


// int main(){
//     vvi adj={{1,3},{2,3,0},{1,6},{0,1,4},{3,5},{4,6},{2,5,7,8},{6,8},{6,7}};
//     cout<<shortestug(adj,0,8);
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
//shortest in dag
// void topo(vvpi&adj,vi&vis,int u,stack<int>&st){
//     vis[u]=1;
//     for(auto it:adj[u]){
//         if(vis[it.first]==0){
//             topo(adj,vis,it.first,st);
//         }
//     }
//     st.push(u);
// }
// void shortestdag(vvpi&adj,int src){
//     int n=adj.size();
//     vector<int>vis(n,0);
//     stack<int>st;
//     topo(adj,vis,src,st);
//     vector<int>dist(n,1e9);
//     dist[src]=0;
//     while(!st.empty()){
//         auto it=st.top();
//         st.pop();
//         int wt=dist[it];
//         for(auto v:adj[it]){
//             int nwt=v.second+wt;
//             if(dist[v.first]>nwt){
//                 dist[v.first]=nwt;
//             }
//         }
//     }
//     for(int i:dist)cout<<i<<' ';
// }
// int main(){
    // vvpi adj={{{1,2},{4,1}},{{2,3}},{{3,6}},{},{{2,2},{5,4}},{{3,1}}};
    // shortestdag(adj,0);
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// int dijkstraug(vvpi&adj,int src,int tar){
//     int n=adj.size();
//     vector<int>dist(n,1e9);
//     dist[src]=0;
//     priority_queue<pi,vector<pi>,greater<pi>>pq;
//     pq.push({0,src});
//     while (!pq.empty())
//     {
//         auto it=pq.top();
//         pq.pop();
//         int u=it.second;
//         int wt=it.first;
//         for(auto v:adj[u]){
//             if(dist[v.first]>v.second+wt){
//                 dist[v.first]=v.second+wt;
//                 pq.push({dist[v.first],v.first});
//             }
//         }
//     }
//     return dist[tar];
// }
// int main(){
//     vvpi adj={{{1,4},{2,4}},{{0,4},{2,2}},{{0,4},{1,2},{4,1},{5,6},{3,3}},{{2,3},{5,2}},{{2,1},{5,3}},{{3,2},{2,6},{4,3}}};
//     cout<<dijkstraug(adj,1,5);
// }





// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// #define tiii tuple<int,int,int>

// int cheapestflight(vvpi&adj,int src,int tar,int k){
//     priority_queue<tiii,vector<tiii>,greater<tiii>>q;
//     q.push({0,src,0});
//     int n=adj.size();
//     vector<int>dist(n,1e8);
//     dist[src]=0;
//     while(!q.empty()){
//         auto tu=q.top(); q.pop();
//         int wt = get<0>(tu);
//         int u = get<1>(tu);
//         int c = get<2>(tu);
//         if(u==tar)return wt;
//         if(c>k)continue;
//         for(auto it:adj[u]){
//             int v=it.first;
//             int w=it.second;
//             if(wt+w<dist[v]){dist[v]=w+wt; q.push({dist[v],v,c+1});}
//         }
//     }
//     return dist[tar];
// }

// int main(){
//     vvpi adj={{{1,100}},{{2,100},{3,600}},{{0,100},{3,200}},{}};
//     cout<<cheapestflight(adj,0,3,0);
// }

// applicaton of dijkstras algorithm of
// variation of cheapest flight problem 
// // 3970. Shortest Path With At Most K Consecutive Identical Characters
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
//        vector<vector<pair<int,int>>>adj(n);
//        for(auto &it:edges){
//         adj[it[0]].push_back({it[1],it[2]});
//        }
//        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq; 
//        vector<int>dist(n+1,1e9);
//        dist[0]=0;
//        pq.push({0,{0,1}});
//        while(!pq.empty()){
//         auto it=pq.top();
//         int c=it.first;
//         int u=it.second.first;
//         int cnt=it.second.second;
//         if(u==n-1)return c;
//         pq.pop();
//         if(c>dist[u])continue;
//         for(auto it:adj[u]){
//             int v=it.first;
//             int cc=it.second;
//             int ncnt=cnt;
//             if(labels[u]==labels[v])ncnt++;
//             else ncnt=1;
//             if(ncnt<=k){
//                 if(cc+c<dist[v]){
//                 dist[v]=cc+c;
//                 pq.push({cc+c,{v,ncnt}});}
//             }
//         }
//        }
//        return -1;
//     }
// };
// int main(){
//     Solution s;
//     vector<vector<int>>v={{0,1,1},{1,2,6},{2,3,5},{0,3,100},{3,4,2},{3,2,2},{2,5,4}};
//     cout<<s.shortestPath(6,v,"aaabce",3);
// }




// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// // no of shortest paths from dijkstra's algorithm
// int noofwaystoreachdst(vvpi&adj,int src,int tar){
//     int n=adj.size();
//     vector<int>dist(n,1e9);
//     vector<int>path(n,0);
//     dist[src]=0;
//     priority_queue<pi,vector<pi>,greater<pi>>pq;
//     pq.push({0,src});
//     path[src]=1;
//     while (!pq.empty())
//     {
//         auto it=pq.top();
//         pq.pop();
//         int u=it.second;
//         int wt=it.first;
//         // if(dist[u]==wt)path[u]++;
//         for(auto v:adj[u]){
//             if(dist[v.first]>v.second+wt){
//                 path[v.first]=path[u];
//                 dist[v.first]=v.second+wt;
//                 pq.push({dist[v.first],v.first});
//             }else if(dist[v.first]==wt+v.second){
//                 path[v.first]+=path[u];
//             }
//         }
//     }
//     return path[tar];
// }
// int main(){
//     vvpi adj={{{1,1},{2,2}},{{3,3},{5,6}},{{4,1}},{{5,3}},{{5,3}},{}};
//     cout<<noofwaystoreachdst(adj,0,5);
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// void bellman(vvi&edges,int n,int src){
//     vector<int>dist(n,1e9);
//     dist[src]=0;
//     for(int i=0;i<n-1;i++){
//         for(auto it:edges)
//         {int u=it[0];
//         int v=it[1];
//         int wt=it[2];
//         if(dist[u]!=1e9){
//             if(dist[v]>wt+dist[u]){dist[v]=wt+dist[u];}
//         }}
//     }
//     for(auto it:edges)
//         {int u=it[0];
//         int v=it[1];
//         int wt=it[2];
//         if(dist[u]!=1e9){
//             if(dist[v]>wt+dist[u]){ cout<<"cycle detected neg"; return; dist[v]=wt+dist[u];}
//         }}
//     for(int i:dist){cout<<i<<' ';}
// }
// int main(){
//     vvi adj={{0,1,5},{2,1,-2},{1,5,-3},{5,3,1},{3,2,-6},{2,4,3},{3,4,-2}};
//     bellman(adj,6,0);
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// const int mod=100000;
// //minimum multiplications need to reach target
// int func(int src,int tar,vector<int>&arr){
//     priority_queue<pi,vector<pi>,greater<pi>>pq;
//     pq.push({0,src});
//     vector<int>dist(mod,1e9);
//     dist[src]=0;
//     while (!pq.empty())
//     {
//         auto it=pq.top();
//         int step=it.first;
//         int u=it.second;
//         pq.pop();
//         if(dist[u]<step)continue;
//         if(u==tar){return step;}
//         for(int i:arr){
//             int p=(i*u)%mod;
//             if(dist[p]>step+1){
//                 dist[p]=step+1;
//                 pq.push({step+1,p});
//             }
//         }
//     }
//     return dist[tar];
// }
// int main(){
//     vi v={3,4,65};
//     cout<<func(7,66175,v);
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// // most stones removed from same row or columne
// vector<int>dsu;
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
// int solve(vvi&mat){
//     int m=mat.size();
//     int n=mat[0].size();
//     int cnt=0;
//     dsu.assign(m+n,-1);
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]){
//                 // cnt++;
//                 int u=i;
//                 int v=j+m;
//                 unionf(u,v);
//             }
//         }
//     }
//     unordered_set<int>st;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]){
//                 cnt++;
//             st.insert(find(i));
//             st.insert(find(j+m));
//             }
//         }
//     }
//     return cnt-st.size();
// }


// int main(){
//     vector<vector<int>>mat={{1,0,0,0},{0,1,0,1},{0,1,1,1}};
//     cout<<solve(mat);
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// vi dsu;
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
//  vvi dir={{0,1},{1,0},{0,-1},{-1,0}};
// int largestisland(vvi&mat){
//     int m=mat.size();
//     int n=mat[0].size();
//     dsu.assign(m*n,-1);
//     int cnt=0;
//     vvi vis(m,vi(n,0));
//     for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         if(mat[i][j]==1){
//             int u=i*n+j;

//             for(auto &d:dir){
//                 int x=i+d[0], y=j+d[1];

//                 if(x>=0 && x<m && y>=0 && y<n && mat[x][y]==1){
//                     int v=x*n+y;
//                     unionf(u,v);
//                 }
//             }
//         }
//     }
// }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==0){
//                 unordered_set<int>st;
//                 for(auto it:dir){int x=i+it[0]; int y=j+it[1];
//                 if(x>=0&&x<m&&y>=0&&y<n&&mat[x][y]==1){int b=(x)*n+y; st.insert(find(b));}
//                 }
//                 int t=0;
//                 for(auto it:st)t-=dsu[it];
//                 cnt=max(cnt,t+1);
//             }
//         }
//     }
//     return cnt;
// }
// int main(){
//     vvi mat={{1,1,0,1,1},{1,1,0,1,1},{1,1,0,1,1},{0,0,1,0,0},{0,0,1,1,1},{0,0,1,1,1}};
//     int t=largestisland(mat);
//     cout<<t;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// vi vis;
// vi  low;
// int timer=0;
// vi tin;
// vvi edges;
// void bridge(vvi&adj,int u,int n,int par){
//     vis[u]=1;
//     low[u]=tin[u]=timer++;
//     for(auto it:adj[u]){
//         if(it==par)continue;
//         if(vis[it]==0){
//             bridge(adj,it,n,u);
//             low[u]=min(low[u],low[it]);
//             if(tin[u]<low[it]){edges.push_back({u,it});}}
//             else { low[u]=min(low[u],low[it]);}
//     }
// }
// signed main(){
//     vvi adj={{1,3},{0,2},{1,3},{0,2,4},{3,5},{4,6,8},{5,7},{6,9,8},{5,7},{7,11,10},{9,11},{9,10}};
//     int n=adj.size();
//     vis.assign(n,0);
//     low.assign(n,0);
//     tin.assign(n,0);
//     bridge(adj,0,n,-1);
//     for(auto it:edges){cout<<it[0]+1<<" "<<it[1]+1<<'\n';} // edges that are bridges //
// } 





// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// vi vis;
// vi  low;
// int timer=0;
// vi tin;
// vi vertices;
// void articulationpoints(vvi&adj,int u,int n,int par){
//     vis[u]=1;
//     low[u]=tin[u]=timer++;
//     int hc=0;
//     for(auto it:adj[u]){
//         if(it==par)continue;
//         if(vis[it]==0){
//             hc++;
//             articulationpoints(adj,it,n,u);
//             low[u]=min(low[u],low[it]);
//             if(tin[u]<=low[it]&&par!=-1){vertices.push_back(u);}}
//             else { low[u]=min(low[u],tin[it]);}
//     }
//     if(hc>1&&par==-1)vertices.push_back(u);
// }
// signed main(){
//     vvi adj={{1,3},{0,2},{1,3},{0,2,4},{3,5},{4,6,8},{5,7},{6,9,8},{5,7},{7,11,10},{9,11},{9,10}};
//     int n=adj.size();
//     vis.assign(n,0);
//     low.assign(n,0);
//     tin.assign(n,0);
//     articulationpoints(adj,0,n,-1);
//     reverse(vertices.begin(),vertices.end());
//     for(auto it:vertices){cout<<it+1<<" ";} // vertices that are articulation //
// } 


// 1293. Shortest Path in a Grid with Obstacles Elimination
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// // #define int long long
// #define  vvpi vector<vector<pair<int,int>>>
// class Solution {
// public:
//     int shortestPath(vector<vector<int>>& grid, int k) {
//        priority_queue<vi,vector<vi>,greater<vi>>pq;
//        pq.push({0,0,0,k});
//        vvi dir={{0,1},{1,0},{-1,0},{0,-1}};
//        int m=grid.size();
//        int n=grid[0].size();
//        vector<vector<vector<int>>>vis(m,vvi(n,vi(k+1,1e9)));
//        vis[0][0][k]=0;
//        while(!pq.empty()){
//         auto it=pq.top(); pq.pop();
//         int x=it[1];
//         int y=it[2]; int st=it[0]; int kk=it[3];
//        if (x == m - 1 && y == n - 1) return st;
//         for(auto d:dir){
//             int i=x+d[0]; int j=y+d[1];
//             if(i>=0&&j>=0&&i<m&&j<n){
//                 int nk=kk-grid[i][j];
//                 if(nk>=0){
//                 if(st+1<vis[i][j][nk]){
//                     pq.push({st+1,i,j,nk});vis[i][j][nk]=st+1; }
//                 }
//                 }
//             }
//         }
       
//         return -1;
//     }
// };
