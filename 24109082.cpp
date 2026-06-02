#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

// #define int long long
// const int MAX_SIZE = 1000;

// void count(int arr[], int n, int exp){
//     int bucket[10][MAX_SIZE];
//     int bucketSize[10] = {0};

//     for(int i = 0; i < n; i++){
//         int d = (arr[i] / exp) % 10;
//         bucket[d][bucketSize[d]++] = arr[i];
//     }

//     int idx = 0;
//     for(int d = 0; d < 10; d++){
//         for(int j = 0; j < bucketSize[d]; j++){
//             arr[idx++] = bucket[d][j];
//         }
//     }
// }

// void radix(int arr[], int n){
//     if(n <= 1) return;
//     if(n > MAX_SIZE) return;

//     int mx = arr[0];
//     for(int i = 1; i < n; i++){
//         mx = max(mx, arr[i]);
//     }

//     for(int exp = 1; mx / exp > 0; exp *= 10){
//         count(arr, n, exp);
//     }
// }

// signed main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     radix(arr, n);

//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }




// void countSort(int arr[], int n){
//     if(n <= 1) return;

//     int mx = arr[0];
//     for(int i = 1; i < n; i++){
//         mx = max(mx, arr[i]);
//     }

//     int cnt[mx + 1] = {0};
//     for(int i = 0; i < n; i++){
//         cnt[arr[i]]++;
//     }

//     int idx = 0;
//     for(int i = 0; i <= mx; i++){
//         while(cnt[i] > 0){
//             arr[idx++] = i;
//             cnt[i]--;
//         }
//     }
// }

// signed main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     countSort(arr, n);

//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }

// void bucketsort(float arr[], int n) {
//     vector<float> buckets[n];
//     for (int i = 0; i < n; i++) {
//         int idx = n * arr[i];
//         buckets[idx].push_back(arr[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         sort(buckets[i].begin(), buckets[i].end());
//     }
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//         for (float x : buckets[i]) {
//             arr[k++] = x;
//         }
//     }
// }

// int main() {
//     float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     bucketsort(arr, n);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }



// int parent(int i){
//     return i / 2;
// }

// int left(int i){
//     return 2 * i;
// }

// int right(int i){
//     return 2 * i + 1;
// }




// void minHeapify(int arr[], int n, int i){
//     int smallest = i;
//     int l = left(i);
//     int r = right(i);

//     if(l <= n && arr[l] < arr[smallest]){
//         smallest = l;
//     }

//     if(r <= n && arr[r] < arr[smallest]){
//         smallest = r;
//     }

//     if(smallest != i){
//         swap(arr[i], arr[smallest]);
//         minHeapify(arr, n, smallest);
//     }
// }

// void buildMinHeap(int arr[], int n){
//     for(int i = n / 2; i >= 1; i--){
//         minHeapify(arr, n, i);
//     }
// }

// void insertmin(int arr[], int &n, int ele){
//     n++;
//     arr[n] = ele;
//     int i = n;
//     while(i > 1 && arr[parent(i)] > arr[i]){
//         swap(arr[i], arr[parent(i)]);
//         i = parent(i);
//     }
// }

// int extractMin(int arr[], int &n){
//     if(n == 0) return -1;

//     int mn = arr[1];
//     arr[1] = arr[n];
//     n--;

//     if(n >= 1){
//         minHeapify(arr, n, 1);
//     }

//     return mn;
// }

// void printHeap(int arr[], int n){
//     for(int i = 1; i <= n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// signed main(){
//     int n;
//     cin >> n;
//     int arr[100];

//     for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//     }

//     buildMinHeap(arr, n);
//     printHeap(arr, n);

//     int x;
//     cin >> x;
//     insertmin(arr, n, x);
//     printHeap(arr, n);

//     cout << extractMin(arr, n) << "\n";
//     printHeap(arr, n);

//     return 0;
// }
// // 5
// // 2 3 4 1 6
// // 1 2 4 3 6 
// // 4
// // 1 2 4 3 6 4 
// // 3
// // 1 2 4 3 6 
// // 1
// // 2 3 4 6 


// write a program to implement max heap and its operations

// void maxheapify(int arr[], int n, int i){
//     int largest = i;
//     int l = left(i);
//     int r = right(i);

//     if(l <= n && arr[l] > arr[largest]){
//         largest = l;
//     }
//     if(r <= n && arr[r] > arr[largest]){
//         largest = r;
//     }

//     if(largest != i){
//         swap(arr[i], arr[largest]);
//         maxheapify(arr, n, largest);
//     }
// }
// void buildMaxHeap(int arr[], int n){
//     for(int i = n / 2; i >= 1; i--){
//         maxheapify(arr, n, i);
//     }
// }
// void insertmax(int arr[], int &n, int ele){
//     n++;
//     arr[n] = ele;

//     int i = n;
//     while(i > 1 && arr[parent(i)] < arr[i]){
//         swap(arr[i], arr[parent(i)]);
//         i = parent(i);
//     }
// }
// void heapsort(int arr[], int n){
//     buildMaxHeap(arr, n);
//     for(int i = n; i > 1; i--){
//         swap(arr[1], arr[i]);
//         maxheapify(arr, i - 1, 1);
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[100];
//     for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//     }
//     heapsort(arr, n);
//     for(int i = 1; i <= n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }


// int mcm(vector<int>&arr,int i,int j){
//     if(i==j)return 0;
//     int mini=INT_MAX;
//     for(int k=i;k<j;k++){
//         mini=min(mini,arr[i-1]*arr[k]*arr[j]+mcm(arr,i,k)+mcm(arr,k+1,j));
//     }
//     return mini;
// }
// int main(){
//     vector<int>arr={10,20,30,40,30};
//     cout<<mcm(arr,1,4);
//     return 0;
// }



// vector<vector<int>>dp;
// int mcm(vector<int>&arr,int i,int j){
//     if(i==j)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     int mini=INT_MAX;
//     for(int k=i;k<j;k++){
//         mini=min(mini,arr[i-1]*arr[k]*arr[j]+mcm(arr,i,k)+mcm(arr,k+1,j));
//     }
//     return dp[i][j]=mini;
// }
// int main(){
//     vector<int>arr={10,20,30,40,30,32,43,12};
//     dp.assign(8,vector<int>(8,-1));
//     cout<<mcm(arr,1,7);
//     return 0;
// }




// int main(){
//     vector<int>arr={10,20,30,40,30,32,43,12};
//     vector<vector<int>>dp;
//     int n=arr.size();
//     dp.assign(9,vector<int>(9,INT_MAX));
//     for(int l=1;l<n;l++)dp[l][l]=0;
//     for(int l=2;l<n;l++){
//         for(int i=1;i<n-l+1;i++){
//             int j=i+l-1;
//             dp[i][j]=INT_MAX;
//             for(int k=i;k<j;k++){
//                 dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+arr[i-1]*arr[j]*arr[k]);
//             }
//         }
//     }
//     cout<<dp[1][7];
//     return 0;
// }



// int lcs(string &s1,string&s2,int j,int i){
//     if(i<0||j<0)return 0;
//     int maxi=0;
//     if(s1[i]==s2[j])maxi=1+lcs(s1,s2,j-1,i-1);
//     maxi=max({maxi,lcs(s1,s2,j-1,i),lcs(s1,s2,j,i-1)});
//     return maxi; 
// }
// int main(){
//     string s1="rajesh";
//     string s2="swaraje";
//     cout<<lcs(s1,s2,s2.size()-1,s1.size()-1);
// }


// vector<vector<int>>dp;
// int lcs(string &s1,string&s2,int j,int i){
//     if(i<0||j<0)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     int maxi=0;
//     if(s1[i]==s2[j])maxi=1+lcs(s1,s2,j-1,i-1);
//     maxi=max({maxi,lcs(s1,s2,j-1,i),lcs(s1,s2,j,i-1)});
//     return dp[i][j]=maxi; 
// }
// int main(){
//     string s1="rajesh";
//     string s2="swarajesh";
//     dp.assign(s1.size()+1,vector<int>(s2.size()+1,-1));
//     cout<<lcs(s1,s2,s2.size()-1,s1.size()-1);
// }


// int main(){
//     string s1="rajehs";
//     string s2="rajeswahmi";
//     int m=s1.size();
//     int n=s2.size();
//     vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,0));
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
//             else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//         }
//     }
//     cout<<dp[s1.size()][s2.size()];
// }

//fractional knapsack


// int main(){
//     vector<vector<double>>v={{60,10},{100,20},{120,30}};
//     sort(v.begin(),v.end(),[&](vector<double>&v1,vector<double>&v2){return (v1[1]/v1[0])>(v2[1]/v2[0]);});
//     double wgt=90; double p=0;
//     int f=0;
//     for(int i=0;i<3;i++){
//         if(v[i][0]<=wgt){p+=v[i][1];
//         wgt-=v[i][0];}
//         else{
//             p+= (v[i][1]/v[i][0])*wgt;
//             f=1;
//         }
//         if(f)break;
//     }
//     cout<<p;
// }



//kruskal algo

// vector<int>dsu;
// int find(int u){
//     if(dsu[u]<0)return u;
//     return dsu[u]=find(dsu[u]);
// }
// void unionf(int u,int v){
//     int pu=find(u);
//     int pv=find(v);
//     if(pu==pv)return ;
//     if(dsu[pu]<=dsu[pv]){
//         dsu[pu]+=dsu[pv]; dsu[pv]=pu;
//     }else{
//         dsu[pv]+=dsu[pu]; dsu[pu]=pv;
//     }
// }

// int kruskal(int v, vector<vector<int>>&e){
//     int n=e.size();
//     int p=0; int cst=0;
//     dsu.assign(v,-1);
//     sort(e.begin(),e.end(),[&](vector<int>&a,vector<int>&b){return a[2]<b[2];});
//     for(int i=0;i<n;i++){
//         int u=e[i][0];
//         int t=e[i][1];
//         int c=e[i][2];
//         if(find(u)!=find(t)){cst+=c; p++; unionf(u,t);}
//         if(p==v-1)break;
//     }
//     return cst;
// }
// int main(){
//     vector<vector<int>>e={{0,1,3},{0,2,5},{1,3,4},{1,2,2},{3,4,6},{2,4,2}};
//     cout<<kruskal(5,e);
// }
// #include <iostream>
// #include <vector>
// #include <queue>


//prims algo
// using namespace std;

// int prims(int v, vector<vector<pair<int, int>>>& e, int src) {

//     priority_queue<
//         pair<int, int>,
//         vector<pair<int, int>>,
//         greater<pair<int, int>>
//     > pq;

//     int cost = 0;
//     vector<int> vis(v, 0);

//     pq.push(make_pair(0, src));

//     while(!pq.empty()) {

//         auto it = pq.top();
//         pq.pop();

//         int u = it.second;
//         int w = it.first;

//         if(vis[u])
//             continue;

//         vis[u] = 1;
//         cost += w;

//         for(auto vec : e[u]) {

//             int adjNode = vec.first;
//             int edgeWeight = vec.second;

//             if(!vis[adjNode]) {
//                 pq.push(make_pair(edgeWeight, adjNode));
//             }
//         }
//     }

//     return cost;
// }

// int main() {

//     int v = 5;
//     vector<vector<pair<int, int>>> adj(v);

//     adj[0].push_back({1, 3});
//     adj[0].push_back({2, 5});

//     adj[1].push_back({0, 3});
//     adj[1].push_back({3, 4});
//     adj[1].push_back({2, 2});

//     adj[2].push_back({0, 5});
//     adj[2].push_back({1, 2});
//     adj[2].push_back({4, 2});

//     adj[3].push_back({1, 4});
//     adj[3].push_back({4, 6});

//     adj[4].push_back({2, 2});
//     adj[4].push_back({3, 6});

//     cout << "MST Total Cost: "
//          << prims(v, adj, 0);

//     return 0;
// }




//01 knapsack 
#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int solve(vector<pair<int,int>>&arr,int i,int w){
    if(i==arr.size())return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int p=0;
        int v=arr[i].first;
        int we=arr[i].second;
        if(we<=w){p=v+solve(arr,i+1,w-we);}
        p=max(p,solve(arr,i+1,w));
    return dp[i][w]=p;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;}
    int w;
    cin>>w;
    memset(dp,0,sizeof(dp));
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=w;j++){
            int val=0;
            if(v[i].second<=j){val=v[i].first+dp[i+1][j-v[i].second];}
            val=max(val,dp[i+1][j]);
            dp[i][j]=val;
        }
    }
    cout<<dp[0][w];
}

// 3
// 1 1
// 7 2
// 11 3
// 5
// 18



// for rbt tree help is taken


// #include <iostream>

// using namespace std;

// struct node {
//     int data;
//     node* par;
//     node* left;
//     node* right;
//     bool color; // red = 0

//     node(int data) {
//         this->data = data;
//         par = nullptr;
//         left = nullptr;
//         right = nullptr;
//         color = 0;
//     }
// };

// class RedBlackTree {
// private:
//     node* root;

//     void rotateleft(node*& pt) {
//         node* y = pt->right;
//         pt->right = y->left;

//         if (pt->right != nullptr) {
//             pt->right->par = pt;
//         }

//         y->par = pt->par;

//         if (pt->par == nullptr) {
//             root = y;
//         } else if (pt == pt->par->left) {
//             pt->par->left = y;
//         } else {
//             pt->par->right = y;
//         }

//         y->left = pt;
//         pt->par = y;
//     }

//     void rotateright(node*& pt) {
//         node* y = pt->left;
//         pt->left = y->right;

//         if (pt->left != nullptr) {
//             pt->left->par = pt;
//         }

//         y->par = pt->par;

//         if (pt->par == nullptr) {
//             root = y;
//         } else if (pt == pt->par->left) {
//             pt->par->left = y;
//         } else {
//             pt->par->right = y;
//         }

//         y->right = pt;
//         pt->par = y;
//     }

//     void fixup(node*& pt) {
//         node* parpt = nullptr;
//         node* grandparpt = nullptr;

//         while (pt != root && pt->color == 0 && pt->par != nullptr && pt->par->color == 0) {
//             parpt = pt->par;
//             grandparpt = parpt->par;

//             if (grandparpt == nullptr) {
//                 break;
//             }

//             if (parpt == grandparpt->left) {
//                 node* unclpt = grandparpt->right;

//                 if (unclpt != nullptr && unclpt->color == 0) {
//                     grandparpt->color = 0;
//                     parpt->color = 1;
//                     unclpt->color = 1;
//                     pt = grandparpt;
//                 } else {
//                     if (pt == parpt->right) {
//                         rotateleft(parpt);
//                         pt = parpt;
//                         parpt = pt->par;
//                     }

//                     rotateright(grandparpt);
//                     swap(parpt->color, grandparpt->color);
//                     pt = parpt;
//                 }
//             } else {
//                 node* unclpt = grandparpt->left;

//                 if (unclpt != nullptr && unclpt->color == 0) {
//                     grandparpt->color = 0;
//                     parpt->color = 1;
//                     unclpt->color = 1;
//                     pt = grandparpt;
//                 } else {
//                     if (pt == parpt->left) {
//                         rotateright(parpt);
//                         pt = parpt;
//                         parpt = pt->par;
//                     }

//                     rotateleft(grandparpt);
//                     swap(parpt->color, grandparpt->color);
//                     pt = parpt;
//                 }
//             }
//         }

//         if (root != nullptr) {
//             root->color = 1;
//         }
//     }

//     node* BSTInsert(node*& currentRoot, node*& pt) {
//         if (currentRoot == nullptr) {
//             return pt;
//         }

//         if (pt->data < currentRoot->data) {
//             currentRoot->left = BSTInsert(currentRoot->left, pt);
//             currentRoot->left->par = currentRoot;
//         } else {
//             currentRoot->right = BSTInsert(currentRoot->right, pt);
//             currentRoot->right->par = currentRoot;
//         }

//         return currentRoot;
//     }

//     void inorder(node* currentRoot) const {
//         if (currentRoot == nullptr) {
//             return;
//         }

//         inorder(currentRoot->left);
//         cout << currentRoot->data << " ";
//         inorder(currentRoot->right);
//     }

// public:
//     RedBlackTree() {
//         root = nullptr;
//     }

//     void insert(int data) {
//         node* pt = new node(data);
//         root = BSTInsert(root, pt);
//         fixup(pt);
//     }

//     void inorder() const {
//         inorder(root);
//     }
// };

// int main() {
//     RedBlackTree tree;
//     tree.insert(10);
//     tree.insert(20);
//     tree.insert(30);
//     tree.insert(20);
//     tree.insert(15);

//     cout << "inorder traversal of tree: ";
//     tree.inorder();
//     cout << "\n";

//     return 0;
// }
