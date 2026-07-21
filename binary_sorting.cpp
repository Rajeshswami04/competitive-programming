
// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vvvi vector<vector<vector<int>>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// int check(int low,vi&v,int k){
//     int high=k+low;
//     int ans=0;
//     while(low<=high){
//         int mid=(high-low)/2+low;
//         int t=0;
//         for(auto &it:v){if(it<mid)t+=mid-it;}
//         if(t<=k){ans=mid; low=mid+1;}
//         else high=mid-1;
//     }
//     return ans;
// }
// void solve(){
// int n,k;
// cin>>n>>k;
// vi v(n);
// int mini=1e14;
// for(auto &it:v){cin>>it; mini=min(mini,it); }
// int s=check(mini,v,k);
// int ans=s;
// ans=(ans+1LL*(s-1)*(n-1));
// for(auto &it:v){
//     if(it<s){ k-=s-it; it=s;}
// }
// if(k){
//     for(auto &it:v){if(it==s&&k){it++; k--;}}
// }
// int diff=0;
// for(auto &it:v){if(it!=s)ans++;}
// cout<<ans;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve(); cout<<"\n";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vvvi vector<vector<vector<int>>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     vi v(n);
//     int mini=LLONG_MAX;
//     for(auto &it:v){cin>>it; mini=min(mini,it);}
//     if(k>=3){cout<<0; return;}
//     // set<int>st;
//     int mm=LLONG_MAX;
//     sort(begin(v),end(v));
//         int minif=LLONG_MAX;
//         for(int j=0;j<n;j++){
//             for(int p=j+1;p<n;p++){
//             int t=abs(v[j]-v[p]);
//             mini=min(mini,t);
//             // st.insert(t);
//         }
//         }
//     if(k==1){cout<<mini; return;}
//     for(int j=0;j<n;j++){
//         for(int p=j+1;p<n;p++){
//             int t=abs(v[j]-v[p]);
//             auto tt=lower_bound(begin(v),end(v),t);
//             if(tt!=v.end())mini=min(mini,abs(*tt-t));
//             if(tt!=v.begin())mini=min(mini,abs(*(prev(tt))-t));
//         }
//         }
//     cout<<mini;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<"\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int sum=0;
//     for(auto &it:v){cin>>it; sum+=it;}
//     if(sum==0){cout<<"YES"; return;}
//     if(sum%2==1){cout<<"NO"; return;}
//     if(sum>0){
//     for(int i=0;i<n-1;i++){
//         if(v[i]>0&&v[i+1]>0){sum-=4; v[i]=-v[i]; v[i+1]=-v[i+1]; if(sum==0)break;}
//     }
//     }else{
//         for(int i=0;i<n-1;i++){
//         if(v[i]<0&&v[i+1]<0){sum+=4; v[i]=-v[i]; v[i+1]=-v[i+1]; if(sum==0){break;}}
//     }
//     }
//     int t=0;
//     for(int i:v){t+=i;}
//     if(t==0)cout<<"YES";
//     else cout<<"NO";
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<"\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n,k,m;
//     cin>>n>>k>>m;
//     int sum=0;
//     for(int i=1;i<=k-1;i++){
//         sum++;
//     }
//     int p=m-sum;
//     if(p<=0){cout<<"NO"; return;}
//     cout<<"YES\n";
//     for(int i=1;i<=k-1;i++){cout<<1<<' ';}
//     cout<<m-sum<<" ";
//     for(int i=1;i<=n-k;i++)cout<<1<<" ";
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<"\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     vector<int>b(n);
//     for(auto &it:a)cin>>it;
//     for(auto &it:b)cin>>it;
//     vector<int>vis(n);
//     int tt=0;
//     int ff1=0;
//     int ff2=0;
//     for(int i=0;i<n;i++){vis[i]=(a[i]==b[i]); if(vis[i]==0)tt=1;  if(vis[i]==1&&a[i]==1)ff1=1;   if(vis[i]==1&&a[i]==0)ff2=1; }
//     if((tt)==0){cout<<0; return;}
//     vector<int>pre(n);
//     if(vis[0]==0&&a[0]==1)pre[0]=1;
//     for(int i=1;i<n;i++){if(vis[i]==0&&a[i]==1)pre[i]+=1;   pre[i]+=pre[i-1];}
//     int t=pre[n-1];
//     if(t&1){cout<<1; return;}
//     if(t!=0&&t%2==0){cout<<2; return;}
//     // if(t==0){cout<<-1; return;}
//     if(ff1&&ff2){cout<<2; return;}
//     cout<<-1;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<"\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(auto &it:a)cin>>it;
//     int low=1;
//     int high=n;
//     int ans=n;
//     while(low<=high){
//         int mid=(high-low)/2+low;
//         set<int>st;
//         vector<int>tr(20,0);
//         int t=0;
//         int yy=0;
//         for(int i=0;i<n;i++){
//             yy=0;
//             if(i>=mid){  int aa=a[i-mid];   yy=0; while(aa){ if(aa&1){tr[yy]--;}  yy++; aa=aa>>1;}}
//             int p=a[i];
//             yy=0;
//             while(p){ if(p&1){tr[yy]++;}  yy++; p=p>>1;}
//             if(i>=mid-1){
//                 int cor=0;
//                 for(int j=0;j<20;j++){if(tr[j])cor|=(1<<j);}
//             st.insert(cor);}
//         }
//         if(st.size()==1){ans=mid; high=mid-1;}
//         else low=mid+1;
//     }
//     cout<<ans;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<"\n";
//     }
//     return 0;
// }



// https://codeforces.com/problemset/problem/1896/C
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long

// void solve(){
//     int n, x;
//     cin >> n >> x;
//     vector<pair<int, int>> v1(n); 
//     vector<int> v2(n);
//     for(int i = 0; i < n; i++) {
//         cin >> v1[i].first;
//         v1[i].second = i;
//     }
//     for(auto &it : v2) cin >> it;
//     sort(begin(v1), end(v1));
//     sort(begin(v2), end(v2));
//     vector<int> ans(n);
//     for(int i = 0; i < x; i++) {
//         int v1_idx = n - x + i;
//         int original_pos = v1[v1_idx].second;
//         ans[original_pos] = v2[i];
//     }
//     for(int i = 0; i < n - x; i++) {
//         int original_pos = v1[i].second;
//         ans[original_pos] = v2[x + i];
//     }
//     int actual_matches = 0;
//     for(int i = 0; i < n; i++) {
//         int original_pos = v1[i].second;
//         if(v1[i].first > ans[original_pos]) {
//             actual_matches++;
//         }
//     }
//     if(actual_matches == x) {
//         cout << "YES\n";
//         for(int i = 0; i < n; i++) {
//             cout << ans[i] << (i == n - 1 ? "" : " ");
//         }
//     } else {
//         cout << "NO";
//     }
// }
// signed main()
// {
//     cin.tie(0); cin.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long

// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int sum=0;
//     for(auto &it:v){cin>>it; sum+=it;}
//     sort(begin(v),end(v));
//     int m;
//     cin>>m;
//     while(m--){
//         int d,s;
//         cin>>d>>s;
//         int ans=0;
//         auto it=lower_bound(v.begin(),v.end(),d);
//         if(it!=v.end()&& *it==d){int p=sum-d; if(p<s)ans+=s-p; cout<<max(0LL,ans)<<"\n"; continue;}
//         else{
//             int pre=-1;
//             int post=-1;
//             if(it!=v.begin())pre= *prev(it);
//             if(it!=v.end())post= *it;
//                 int ans1=d-pre;
//                 int tt=s-sum+pre;
//                 ans1+=max(0LL,tt);
//                  int ans2=0;
//                  tt=s-sum+post;
//                 ans2+=max(0LL,tt);
//                 if(pre==-1)ans1=LLONG_MAX;
//                 if(post==-1)ans2=LLONG_MAX;
//                 cout<<min(ans1,ans2)<<'\n';
//         }
//         // cout<<max(ans,0LL)<<"\n";
//     }

// }

// signed main()
// {
//     cin.tie(0); cin.sync_with_stdio(0);
//     int t = 1;
//     // cin >> t;
    
//         solve();
//         // cout << "\n";
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int low=0;
//     int high=1e9;
//     for(auto &it:v){cin>>it; }
//     sort(begin(v),end(v));
//     int ans=-1;
//     while(low<=high){
//         int mid=(high-low)/2 + low;
//         int cnt=1;
//         int st=v[0];
//         for(int i=1;i<n;i++){
//             if(v[i]>((2*mid+st))){
//                 cnt++;
//                 st=v[i];
//             }
//         }
//         if(cnt<=3){ans=mid; high=mid-1;}
//         else low=mid+1;
//     }
//     cout<<ans;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<'\n';
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m, L;
//     cin >> n >> m >> L;

//     vector<pair<int, int>> h(n);
//     for (int i = 0; i < n; i++) {
//         cin >> h[i].first >> h[i].second; // [l, r]
//     }

//     vector<pair<int, int>> p(m);
//     for (int i = 0; i < m; i++) {
//         cin >> p[i].first >> p[i].second; // [x, v]
//     }

//     priority_queue<int> pq; // Max-heap to store available power-up values
//     long long k = 1;        // Initial jump power
//     int p_idx = 0;          // Pointer to current power-up
//     int cnt = 0;            // Number of power-ups taken

//     for (int i = 0; i < n; i++) {
//         int l = h[i].first;
//         int r = h[i].second;

//         // Add all power-ups that appear before or at position l - 1
//         while (p_idx < m && p[p_idx].first < l) {
//             pq.push(p[p_idx].second);
//             p_idx++;
//         }

//         // Jump length needed to clear hurdle [l, r]
//         int req_k = r - l + 2;

//         // Greedily pick the largest power-ups until k >= req_k
//         while (k < req_k && !pq.empty()) {
//             k += pq.top();
//             pq.pop();
//             cnt++;
//         }

//         // If we still can't clear the hurdle
//         if (k < req_k) {
//             cout << -1;
//             return;
//         }
//     }

//     cout << cnt;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//         cout << "\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// struct custom_hash {
//     static uint64_t splitmix64(uint64_t x) {
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }

//     size_t operator()(uint64_t x) const {
//         static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//         return splitmix64(x + FIXED_RANDOM);
//     }
// };
// typedef long long ll;
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     unordered_map<int,int,custom_hash>mp;
//     vector<int>v;
//     int c;
//     for(int i=0;i<n;i++){
//         cin>>c; mp[c]++;
//         if(mp[c]==k)v.push_back(c);
//     }
//     int left=0; int right =0;
//     if(v.size()==0){cout<<-1; return;}
//     sort(begin(v),end(v));
//     int t=v[0]; int tt=v[0];
//     for(int i=1;i<v.size();i++){
//         if(right-left+1<=tt-t+1){left=t; right=tt;}
//         if(v[i]==tt+1){tt=v[i];}
//         else {t=v[i]; tt=v[i];}
//     }
//     if(right-left+1<=tt-t+1){left=t; right=tt;}

//     cout<<left<<" "<<right;
// }
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve(); if(t!=0)cout<<"\n";
//     }
//     return 0;
// }

