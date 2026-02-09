#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&arr,int x){
    if(arr[x]<0)return x;
    return arr[x]=find(arr,arr[x]);
}
void unionf(int x, int y,vector<int>&arr){
    int px=find(arr,x);
    int py=find(arr,y);
    if(px==py)return;
    if(arr[px]<=arr[py]){
        arr[px]+=arr[py];
        arr[py]=px;
    }else{
        arr[py]+=arr[px];
        arr[px]=py;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>>v(m,vector<char>(n));
    queue<pair<int,int>>q;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
            if(v[i][j]=='.')q.push({i,j});
        }
    }
    
    unordered_set<int>st;
    vector<int>dsu(m*n,-1);
    vector<vector<int>>dir={{0,-1},{-1,0},{1,0},{0,1}};
    while(!q.empty()){
        auto it=q.front(); q.pop();
        int x=it.first; int y=it.second;
        int p=x*n+y;
        for(auto it : dir){
            int x1=x+it[0]; int y1=y+it[1];
            int p2=x1*n+y1;
            if(x1>=0&&y1>=0&&x1<m&&y1<n&&v[x1][y1]=='.'&&find(dsu,p)!=find(dsu,p2)){
                unionf(p,p2,dsu);

            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == '.') {
                st.insert(find(dsu, i * n + j));
            }
        }
    }
    cout<<st.size()<<endl;
}

