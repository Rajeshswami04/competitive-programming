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



#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e15;
const int mod = 998244353;
 void solve(){
 string s;
 cin>>s;
 int n=s.size();
 if(n<=2){cout<<0; return;}
 if(n==3){
    if(s=="010"||s=="101"){cout<<1; return;}
    cout<<0; return;
 }
 int p0=0;
 int p1=0;
 int s0=0;
 int s1=0;
 for(char i:s){
    if(i=='0')s0++;
    else s1++;
 }
 int ans=1e9;
 for(char i:s){
    if(i=='0')p0++;
    else p1++;
    int rem0=s0-p0;
    int rem1=s1-p1;
    int aa=min(p0+rem1,p1+rem0);
    ans=min(ans,aa);
 }
 cout<<ans;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve(); cout<<'\n';}
    return 0;
}
