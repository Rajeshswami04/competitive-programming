// 816b
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod = 998244353;
//  void solve(){
//    int n,r,q;
//    cin>>n>>r>>q;
//    vector<int>diff(200001,0);
//    for(int i=0;i<n;i++){
//     int x,y;
//     cin>>x>>y;
//     diff[x]+=1;
//     diff[y+1]-=1;
//    }
//    for(int i=1;i<=200000;i++)diff[i]+=diff[i-1];
//    for(int i=1;i<=200000;i++)if(diff[i]>=r)diff[i]=1; else diff[i]=0;
//    for(int i=1;i<=200000;i++)diff[i]+=diff[i-1];
//    while(q--){
//     int a,b;
//     cin>>a>>b;
//     cout<<diff[b]-diff[a-1]<<'\n';
//    }
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//         solve();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod = 998244353;
//  void solve(){
//   string s;
//   cin>>s;
//   int m;
//   cin>>m;
//   int n=s.size();
//   vector<int>pref(n+1,0);
//   for(int i=1;i<n;i++){
//     if(s[i]==s[i-1])pref[i]+=1;
//   }
//   for(int i=1;i<=n;i++)pref[i]+=pref[i-1];
//   while(m--){
//     int a,b;
//     cin>>a>>b;
//     cout<<pref[b-1]-pref[a-1]<<'\n';
//   }
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//         solve();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod = 998244353;
//  void solve(){
//  string s;
//  cin>>s;
//  int n=s.size();
//  if(n<=2){cout<<0; return;}
//  if(n==3){
//     if(s=="010"||s=="101"){cout<<1; return;}
//     cout<<0; return;
//  }
//  int p0=0;
//  int p1=0;
//  int s0=0;
//  int s1=0;
//  for(char i:s){
//     if(i=='0')s0++;
//     else s1++;
//  }
//  int ans=1e9;
//  for(char i:s){
//     if(i=='0')p0++;
//     else p1++;
//     int rem0=s0-p0;
//     int rem1=s1-p1;
//     int aa=min(p0+rem1,p1+rem0);
//     ans=min(ans,aa);
//  }
//  cout<<ans;
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
//         solve(); cout<<'\n';}
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod = 998244353;
//  void solve(){
//    int n,k;
//    cin>>n;
//    cin>>k;
//    vector<int>v(n);
//    for(auto &it:v)cin>>it;
//    vector<int>pref(n+1,0);
//    for(int i=1;i<n-1;i++){if(v[i]>v[i-1]&&v[i]>v[i+1])pref[i]+=1;}
//    for(int i=1;i<=n;i++)pref[i]+=pref[i-1];
//    int ans=-inf; int idx=-1;
//    for(int i=0;i<=n-k;i++){
//       if(pref[i+k-2]-pref[i] > ans){ans=pref[i+k-2]-pref[i]; idx=i;}
//    }
//    cout<<ans+1<<" "<<idx+1<<'\n';
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
// while(t--){        solve();}
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod = 998244353;
//  void solve(){
//    string  s;
//    cin>>s;
//    string ans="";
//    set<string>st;
//    int m=s.size();
//    for(int i=0;i<m-1;i++){
//       int p=s[i]-'0';
//       if(p%2==0){
//          if(s[i]<s[m-1]){
//          swap(s[m-1],s[i]);
//          cout<<s; return;
//       }
//       }
//    }
//    for(int i=m-2;i>=0;i--){
//       int p=s[i]-'0';
//       if(p%2==0){
//          swap(s[m-1],s[i]);
//          cout<<s; return;
//       }
//    }
//    cout<<-1;
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//        solve(); cout<<'\n';
//     return 0;
// }


//  #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];
    
//     sort(v.begin(), v.end());
    
//     double ans = 0;
//     for(int i = 1; i < n; i++){
//         ans = max(ans, (v[i] - v[i-1]) / 2.0);
//     }
//     ans = max(ans, v[0] * 1.0);
//     ans = max(ans, (k - v[n-1]) * 1.0);
    
//     cout << fixed << setprecision(10) << ans << "\n";
//     return 0;
// }



// // onhold
// https://codeforces.com/problemset/problem/1355/C


// class Solution {
// public:
//     int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
//         int m = matrix.size();
//         int n = matrix[0].size();
//         vector<vector<int>> pref(m + 1, vector<int>(n + 1, 0));
//         int ans = INT_MIN;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (matrix[i][j] <= k)
//                     ans = max(ans, matrix[i][j]);
//                 pref[i + 1][j + 1] =
//                     matrix[i][j] + pref[i + 1][j] + pref[i][j + 1] - pref[i][j];
//             }
//         }
//         //   for(int d=1;d<=min(m,n);d++){
//         for (int x = 1; x <= m; x++) {
//             for (int y = 1; y <= n; y++) {
//                 for (int i = 0; i <= m - x; i++) {
//                     for (int j = 0; j <= n - y; j++) {
//                         int s = pref[i + x][j + y] - pref[i + x][j] -
//                                 pref[i][j + y] + pref[i][j];
//                         if (s <= k)
//                             ans = max(ans, s);
//                     }
//                 }
//                 // int s=pref[i][j];
//                 // if(s<=k)ans=max(ans,s);
//             }
//         }

//         return ans;
//     }
// };