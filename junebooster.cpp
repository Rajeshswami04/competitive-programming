// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// #define  vvpi vector<vector<pair<int,int>>>
// vector<int> findDivisors(int n) {
//     vector<int> divisors;
//     divisors.push_back(n);
//     // Loop only up to the square root of n
//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             divisors.push_back(i); // 'i' is a divisor

//             // Check to avoid duplicate for perfect squares (like 6 * 6 = 36)
//             if (i != n / i) {
//                 divisors.push_back(n / i); // 'n/i' is the paired divisor
//             }
//         }
//     }

//     // Optional: Sort the divisors if you want them in ascending order
//     sort(divisors.begin(), divisors.end());

//     return divisors;
// }
// void solve()
// {
//    int n,k;
//    cin>>n>>k;
//    unordered_set<int>v;
//    for(int i=1;i<=n;i++){int c; cin>>c; v.insert(c);}
//    set<int>st;
//    unordered_map<int,unordered_set<int>>divs;
//    for(auto it:v){
//     vi div=findDivisors(it);
//     for(int i:div){st.insert(i); divs[it].insert(i);}
//    }
//    unordered_set<int>vis;
//    unordered_set<int>toerase;
//    for(auto it:st){
//     int p=it;
//     if(vis.find(p)!=vis.end()){toerase.insert(it); continue;}
//     while(p<=k){
//         if(v.find(p)==v.end()){toerase.insert(it); break;}
//         vis.insert(p);
//         p+=it;}
//    }
//    for(auto it:toerase)st.erase(it);
//    for(auto it:v){

//     int b=0;
//     for(int i:divs[it]){if(st.find(i)!=st.end()){b=1; break;}}
//     if(b==0){cout<<-1; return;}
//    }
//    cout<<st.size()<<'\n';
//    for(auto it:st)cout<<it<<" ";
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// #define  vvpi vector<vector<pair<int,int>>>

// void solve()
// {
//    int n, k;
//    cin >> n >> k;

//    vi a(n);
//    map<int, int> mp;
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//        mp[a[i]] = -1;
//    }
//    sort(a.begin(), a.end());
//    set<int> st;
//    for(int i = 0; i < n; i++) {
//        if(mp[a[i]] == -1) {
//            for(int j = a[i]; j <= k; j += a[i]) {
//                if(mp.find(j) == mp.end()) {
//                    cout << -1;
//                    return;
//                }
//                if(mp[j] == 1) continue;
//                mp[j] = 1;
//            }
//            st.insert(a[i]);
//        }
//    }

//    cout << st.size() << '\n';
//    for(auto it : st) cout << it << " ";
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// very good application of prefix and suffix min max
// void solve(){
//     int n;
//     cin >> n;
//     vector<int> p(n+1), pre(n+1, n), suf(n+2);
//     for(int i=1; i<=n; i++){
//         cin >> p[i];
//         pre[i] = min(pre[i-1], p[i]);
//     }
//     for(int i=n; i>=1; i--)
//         suf[i] = max(suf[i+1], p[i]);
//     for(int i=2; i<=n; i++)
//         if(pre[i-1] > suf[i]){
//             cout << "No" << '\n';
//             return;
//         }
//     cout << "Yes" << '\n';
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) solve();
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// #define  vvpi vector<vector<pair<int,int>>>
// void solve(){
//     int n,k;
//     cin >> n>>k;
//     vi q(n);
//     vi r(n);
//     for(int i=1;i<=n;i++){
//         cin>>q[i-1];
//     }
//     for(int i=1;i<=n;i++){
//         cin>>r[i-1];
//     }
//     int cnt=0;
//     int t=0;
//     sort(q.rbegin(),q.rend());
//     sort(r.begin(),r.end());
//     for(int i=0;i<n;i++){
//         if(t==n)break;
//         if((r[t]+1)*q[i]+r[t]<=k){cnt++; t++;}
//     }
//     cout<<cnt<<"\n";
// }

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) solve();
// }

// calculation of mex in o(n) for all process or array at each step
//  void solve(){
//      int n;
//      cin>>n;
//      vi a(n);
//      for(auto &it:a)cin>>it;
//      unordered_map<int,int>freq;
//      int cnt=0;
//      for(int i:a){
//          freq[i]++;
//          while(freq.count(cnt))cnt++;
//          cout<<cnt<<" ";
//      }
//  }

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) solve();
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// x,y k, given you delete y 2y 3y 4y... pos elements x times <=p and return kth element if exits else -1
// int p = 1000000000000;
// int k;
// bool check(int x, int y, int opr)
// {
//     int t = x;
//     while (opr)
//     {
//         t -= t / y;
//         opr--;
//     }
//     if (t < k)
//     {
//         return 0;
//     }
//     return 1;
// }
// void solve()
// {
//     int x, y;
//     cin >> x >> y >> k;
//     int totel = 0;
//     if (y > k)
//     {
//         cout << k << "\n";
//         return;
//     }
//     int kk = p;
//     int opr = x;
//     while (opr)
//     {
//         kk -= kk / y;
//         opr--;
//     }
//     if (kk < k)
//     {
//         cout << -1 << "\n";
//         return;
//     }
//     int low = 1;
//     int high = p;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (check(mid - 1, y, x))
//         {
//             high = mid - 1;
//         }
//         else
//             low = mid + 1;
//     }
//     if (high == p + 1)
//     {
//         print - 1 << '\n';
//         return;
//     }
//     cout << high << '\n';
// }

// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {
//     int n;
//     cin >> n;
//     vi a(n);
//     int sum = 0;
//     for (auto &it : a)
//     {
//         cin >> it;
//         sum += it;
//     }
//     int ans = max(sum, (n + 1) * n);
//     int idx1 = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (idx1 == -1 || a[idx1] > a[i])
//         {
//             idx1 = i;
//         }
//     }
//     int idx2 = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (i != idx1 && (idx2 == -1 || a[idx2] > a[i]))
//         {
//             idx2 = i;
//         }
//     }
//     int a1 = min(idx1, idx2);
//     int b = max(idx2, idx1);
//     if (a1 == -1)
//     {
//         cout << max(ans, sum) << "\n";
//         return;
//     }
//     int t = (b + a1 + 2) * (b - a1 + 1);
//     for (int i = 0; i < n; i++)
//     {
//         if (i >= a1 && i <= b)
//             continue;
//         t += a[i];
//     }
//     int sum2 = max(sum, sum - a[idx1] + 2 * (idx1 + 1));
//     int sum1 = max(sum, sum - a[idx2] + 2 * (idx2 + 1));
//     cout << max({t, sum1, sum2, ans}) << "\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }
// asked in google min no arow to burst ballons in range inteval array on single line
// class Solution {
// public:
//     int findMinArrowShots(vector<vector<int>>& points) {
//       sort(points.begin(),points.end());
//       int cnt=1;
//       int n=points.size();
//       int last=points[0][1];
//       for(int i=1;i<n;i++){
//         if(points[i][0]>last){
//             cnt++;
//             last=points[i][1];
//         }else last=min(last,points[i][1]);
//       }
//       return cnt;
//     }
// };

// very good use of prefix sums
// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//     unordered_map<int,int>mp;
//     int cnt=0;
//     int n=nums.size();
//     int sum=0;
//     mp[0]++;
//     for(int i=0;i<n;i++){
//         sum+=nums[i];
//         int mod = (sum % k + k) % k;
//         if(mp.count(mod)){cnt+=mp[mod];}
//         mp[mod]++;
//     }
//     return  cnt;
//     }
// };
// https://usaco.guide/silver/binary-search

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// #define  vvpi vector<vector<pair<int,int>>>
// // seperation of variables 
// void solve()
// {
//     int n;
//     cin>>n;
//     vi v(n+1);
//     for(int i=1;i<=n;i++)cin>>v[i];
//     vi pre(n+1,0);
//     for(int i=1;i<=n;i++){
//         pre[i]+=v[i];
//         pre[i]+=pre[i-1];
//     }
//     int dsum=0;
//     int maxval=0;
//     for(int i=1;i<=n;i++){
//         maxval=max(maxval,-(i)*(i)+i+pre[i-1]);
//         // else maxval=max(maxval,-(i+1)*(i+1)+i+1);
//         dsum=max(dsum,((i)*(i)+i-pre[i])+maxval);
//     }
//     cout<<dsum+pre[n];
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// #define  vvpi vector<vector<pair<int,int>>>

// void solve()
// {
//     int n,c;
//     cin>>n>>c;
//     vi a(n);
//     vi b(n);
//     for(int i=1;i<=n;i++)cin>>a[i-1];
//     for(int i=1;i<=n;i++)cin>>b[i-1];
//     int bt=0;
//     for(int i=1;i<=n;i++){
//         if(a[i-1]<b[i-1])bt=1;
//     }
//     int tt=0;
//     for(int i=1;i<=n;i++){
//         if(a[i-1]!=b[i-1])tt=1;
//     }
//     if(tt==0){cout<<0; return;}
//     multiset<int>st;
//     for(int i=1;i<=n;i++)st.insert(a[i-1]);
//     int t=0;
//     sort(begin(b),end(b));
//     for(int j=1;j<=n;j++){
//         int i=b[j-1];
//         auto it=st.lower_bound(i);
//         if(it==st.end()){
//             cout<<-1; return ;
//         }
//         st.erase(it);
//         t+=(*it)-i;
//     }
//     if(bt)cout<<t+c;
//     else cout<<t;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long
// #define  vvpi vector<vector<pair<int,int>>>
// // 2238B
// void solve()
// {
// int n;
// cin>>n;
// int cnt=0;
// for(int i=1;i<=n;i++){
//     cnt += (n/i)*(n/i);
// }
// cout<<cnt;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// merging adjacent elements
// void solve()
// {
//     int n;
//     cin >> n;
//     vi a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     int sum=0;
//     int maxi=0;
//     for(int i=0;i<n;i++){
//         sum+=max(a[i],a[(i+1)%n]);
//         maxi=max(maxi,a[i]);
//     }
//     cout << sum-maxi;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }



// // todo
// // https://codeforces.com/contest/2166/problem/B
// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {
//    int a,b,n;
//    cin>>a>>b>>n;
//    int cnt=0;
//    if(n==1){cout<<1; return;}
//    int len=-1;
//    int m=n;
//    while(m>0){
//     if(min(b,a/m)!=len){
//         cnt++;
//         if(m>1)len=min(b,a/(m-1));
//     }
//     m--;
//    }
//    cout<<cnt;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// design disjoint intervals problem
// class SummaryRanges {
// public:
//     map<int,int>mp;
   
//     SummaryRanges() {
//         mp.clear();
//     }
//     void addNum(int v) {
//      int left=v;
//      int right=v;
//      auto it=mp.upper_bound(v);
//      if(it!=mp.begin()){
//         auto pr=it;
//         --pr;
//         if(pr->second>=v)return;
//         if(pr->second==v-1){
//             left=pr->first;
//         }
//      }
//      if(it!=mp.end()&&it->first==v+1){
//         right=it->second;
//         mp.erase(it);
//      }
//      mp[left]=right;
//     }
//     vector<vector<int>> getIntervals() {
//         vector<vector<int>>ans;
//         for(auto it:mp){
//               ans.push_back({it.first,it.second});
//         }
//         return ans;
//     }
// };
// /**
//  * Your SummaryRanges object will be instantiated and called as such:
//  * SummaryRanges* obj = new SummaryRanges();
//  * obj->addNum(value);
//  * vector<vector<int>> param_2 = obj->getIntervals();
//  */


// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// unordered_map<int,int>dp;
// int dfs(int x,int k){
//     if(x==k)return 0;
//     if(x<k)return -1;
//     if(dp.count(x))return dp[x];
//     // int ma=LLONG_MAX;
//     int p=ceil((x+1)/2);
//     if(p==k)return 1;
//     int q=floor(x/2);
//     if(q==k)return 1;
//     int left=dfs(p,k);
//     int right=dfs(q,k);
//     if(left==-1&&right==-1)return dp[x]=-1;
//     if(left==-1)return dp[x]=1+right;
//     else if(right==-1)return dp[x]=1+left; 
//     return dp[x]=min(left,right)+1;
// }
// void solve()
// {
// dp.clear();
//   int n,k;
//   cin>>n>>k;
//   int p=dfs(n,k);
//   cout<<p;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }



//2179D
// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// // #define int long long
// #define vvpi vector<vector<pair<int, int>>>

// void solve()
// {       // seen
//     int n; cin>>n;
//     int k=(1<<n);
//     for(int i=k;i>0;(i=i>>1)){
//         for(int x=i-1;x<k;x+=(i<<1)){cout<<x<<" ";}
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {       
//     int x;
//     cin>>x;
//     for(int i=2;i<=50;i++){
//         if(x*i<=99){cout<<i; return;}
//     }
//     int b=0;
//     int p=x;
//     while(p){
//          if(p%10==0){b=1; break;}
//          p/=10;
//     }
//     if(b==1){cout<<10; return ;}
//     b=0;
//     p=x;
//     while(p){
//          if(p%10>=5){b=1; break;}
//          p/=10;
//     }
//     if(b==0){cout<<2; return;}

// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {    int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string a=s;
//     reverse(a.begin(),a.end());
//     if(a==s){
//         cout<<1; return;
//     }
//     string b="";
//     for(char c:s){
//         if(b.empty()||b.back()!=c)b+=c;
//     }
//     string c=b;
//     reverse(c.begin(),c.end());
//     if(c==b){cout<<1; return;}
//     if(b=="10"||b=="01"){cout<<2; return ;}
//     cout<<1;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {   int n;
//     cin>>n;
//     vi a(n);
//     for(auto &it:a)cin>>it;
//     vi b(n);
//     for(auto &it:b)cin>>it;
//     int flag=0;
//     for(int i=0;i<n;i++){
//         if(b[i]<a[i])flag=1;
//     }
//     if(flag==0){cout<<"YES"; return;}
//     int t=0;
//     int t2=0;
//     for(int i=0;i<n;i++){
//         t+=a[i];
//         t2+=b[i];
//         if(t2<t){cout<<"NO"; return;}
//     }
//     cout<<"YES";
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }


// inversion problem
// alice starts first and erases as many as inversion subseq,cont this

// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {   int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int flag=1;
//     int cnt=0;
//     for(char c:s){
//         if(c=='1')cnt++;
//         else if(cnt%2)flag=0;
//     }
//     cnt=0;
//     for(int i=n-1;i>=0;i--){
//         if(s[i]=='0')cnt++;
//         else if(cnt%2)flag=0;
//     }
//     if(flag==1){cout<<"Bob"; return;}
//     cout<<"Alice";
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve()
// {   int n;
//     cin>>n;
//     vi a(n);
//     vi b(n);
//     for(int i=0;i<n;i++)cin>>a[i];
//     for(int i=0;i<n;i++)cin>>b[i];
//     vi prefmin(n,2*n);
//     vi prefmax(n,2*n);
//     vi sufmin(n,2*n);
//     vi sufmax(n,2*n);
//     prefmin[0]=a[0];
//     prefmax[0]=a[0];
//     sufmin[n-1]=b[n-1];
//     sufmax[n-1]=b[n-1];
//     for(int i=1;i<n;i++){
//         prefmin[i]=min(prefmin[i-1],a[i]);
//         prefmax[i]=max(prefmax[i-1],a[i]);
//     }
//     for(int i=n-2;i>=0;i--){
//         sufmin[i]=min(sufmin[i+1],b[i]);
//         sufmax[i]=max(sufmax[i+1],b[i]);
//     }
//     vi ans(2*n,2*n);
//     for(int i=0;i<n;i++){
//         int mn=min(prefmin[i],sufmin[i]);
//         int mx=max(prefmax[i],sufmax[i]);
//         ans[mn-1]=min(ans[mn-1],mx-1);
//     }
//     for(int i=2*n-2;i>=0;i--)ans[i]=min(ans[i],ans[i+1]);
//     int cnt=0;
//     for(auto &it:ans)cnt+=2*n-it;
//     print cnt;
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }



// // https://leetcode.com/problems/range-sum-query-2d-immutable/description/?envType=problem-list-v2&envId=prefix-sum

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ff first
// #define ss second
// #define endl '\n'
// const ll inf = 4e18;
// const ll minf = - 4e18;
// const ll mod = 1e9 +7;
// const ll N = 1e6 + 10;
// const ll weird_mod = 998244353;
// const vector<ll> dz = {0, 0, 0, 0, 1, -1};
// const vector<ll> dx = {1, 0, -1, 0, 0, 0};
// const vector<ll> dy = {0, 1, 0, -1, 0, 0};

// void solve(){
//     ll n, m; cin >> n >> m;
//     multiset <ll> swr;
//     for(ll i = 0; i < n; i++){
//         ll x; cin >> x;
//         swr.insert(x);
//     }
//     ll cnt = 0;
//     vector<pair<ll, ll>> inc;
//     vector<ll> n_ch, dec, b(m);
//     /*
//     my sword -> swr
//     n_ch => c_i <= swr
//     dec => ci = 0;
//     inc => c_i > swr;
//     */
//     for(ll i = 0; i < m; i++) cin >> b[i];
//     for(ll i = 0; i < m; i++){
//         ll c; cin >> c;
//         if(c == 0) dec.push_back(b[i]);
//         else if(c <= b[i]) n_ch.push_back(b[i]);
//         else inc.push_back({b[i], c});
//     }
//     sort(inc.begin(), inc.end());
//     sort(dec.begin(), dec.end());
//     sort(n_ch.begin(), n_ch.end());
//     for(auto i : inc){
//         ll bi = i.ff, ci = i.ss;
//         auto it = swr.lower_bound(bi);
//         if(it == swr.end()) break;
//         ll v = *it;
//         swr.erase(it);
//         swr.insert(max(v, ci));
//         cnt++;
//     }
//     for(auto i : n_ch){
//         auto it = swr.lower_bound(i);
//         if(it == swr.end()) break;
//         cnt++;
//     }
//     for(auto i : dec){
//         auto it = swr.lower_bound(i);
//         if(it == swr.end()) break;
//         swr.erase(it);
//         cnt++;
//     }
//     cout << cnt << endl;
// }

// signed main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); cout.tie(nullptr);
//     ll t = 1; 
//     cin >> t; cin.ignore();
//     for(ll i = 1; i <= t; i++){
//        
//         solve();
//     }
//     return 0;
// }


//1300rated
// div2  x^f(x)=n find such x , f(x)is if x=1101 then fx is (1011)base2
// #include <bits/stdc++.h>
// using namespace std;
// string toBinary(unsigned long long x) {
//     if (x == 0) return "0";
//     string s;
//     while (x > 0) {
//         s += ('0' + (x & 1));
//         x >>= 1;}
//     reverse(s.begin(), s.end());
//     return s;
// }
// int main() {
//      ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); cout.tie(nullptr);
//     //seen
//     int t;
//     cin >> t;
//     while (t--) {
//         unsigned long long x;
//         cin >> x;
//         string n = toBinary(x);
//         string ans = "NO";
//         for (int i = 1; i < 64; i++) {
//             if ((int)n.size() <= i) {
//                 string w = string(i - n.size(), '0') + n; 
//                 bool B = (w == string(w.rbegin(), w.rend())); 
//                 if (i % 2 == 1) {
//                     B = B && (w[i / 2] == '0');} // odd lenght chekc 
//                 if (B) {
//                     ans = "YES";}
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }


// void solve(){
//     int n,q;
//     cin>>n>>q;
//     string s;
//     cin>>s;
//     vi qq(q);
//     vector<pair<char,int>>vp;
//     vp.push_back({s[0],1});
//     for(int i=1;i<n;i++){
//         if(vp.back().first==s[i])vp.back().second++;
//         else vp.push_back({s[i],1});
//     }
//     bool bb=0;
//     for(char c:s)if(c=='B')bb=1;
//     for(auto &it:qq){cin>>it;}
//     int i=0;
//     while(i<q){
//         int cnt=0;
//         int t=qq[i++];
//         int j=0;
//         while(t){
//             if(bb==0){
//                 cnt=t; break; // this was the main reason of tle
//             }
//             char c=vp[j].first;
//             int po=vp[j].second;
//             j=(j+1)%vp.size();
//             if(c=='A'){
//                 cnt+=min(t,po);
//                 t-=min(t,po);
//             }else{
//                while(t&&po){
//                 t>>=1;
//                 po--;
//                 cnt++;
//                }
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         // cout << '\n';
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>

// void solve(){
//    int n;
//    cin>>n;
//    vi v(n);
//    int e=0,o=0;
//    for(auto &it:v){cin>>it; if(it%2==0)e=1; if(it&1)o=1; }
//    if(e&&o){
//     cout<<2; return ;
//    } // till this i got it
//    for(int i=1;i<=63;i++){
//     int t=(1LL<<i);
//     set<int>st;
//     for(auto it:v)st.insert(it%t);
//     if(st.size()==2){
//         cout<<t; return;
//     }
//    }
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define print cout <<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int, int>
// #define int long long
// #define vvpi vector<vector<pair<int, int>>>
// void solve() {
//     int n;
//     cin>>n;
//     int k; cin>>k;
//     map<int,vector<int>>mp;
//     for(int i=1;i<=k;i++)mp[i].push_back(0);
//     for(int i=0;i<n;i++){
//         int c; cin>>c;
//         mp[c].push_back(i+1);
//     }
//     for(int i=1;i<=k;i++)mp[i].push_back(n+1);
//     vector<priority_queue<int>>pq(k+1);
//     int ans=1e9;
//     for(int it=1;it<=k;it++){
//         for(int i=1;i<mp[it].size();i++){
//             pq[it].push(mp[it][i]-mp[it][i-1]);
//         }
//         int tt=pq[it].top(); pq[it].pop();
//         pq[it].push(tt-tt/2);  pq[it].push(tt/2); 
//         ans=min(ans,pq[it].top());
//     }
//     cout<<ans-1;
// }
// signed  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//         cout<<"\n";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void solve(){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         int t1=0,t2=0,t3=0;
//         for(auto&it:v)cin>>it;

//         vector<int>cnt1(n);
//         // vector<int>cnt1(n);
//         vector<int>cnt2(n);
//         vector<int>cnt3(n);
//         int ans=0;
//         for(int i=0;i<n;i++){

//             cnt1[i]+=(v[i]==1);
//             cnt2[i]+=(v[i]==2);
//             cnt3[i]+=(v[i]==3);
//             if(i>0){
//                 cnt1[i]+=cnt1[i-1];
//                 cnt2[i]+=cnt2[i-1];
//                 cnt3[i]+=cnt3[i-1];
//             }
//         }
//         t1=cnt1[n-2];
//         t2=cnt2[n-2];
//         t3=cnt3[n-2];
//         int flag=0;
//         vector<int>sf(n,0);
//         sf[n-2]=cnt1[n-2]+cnt2[n-2]-cnt3[n-2];
//         for(int i=n-3;i>=0;i--){
//             sf[i]=max(sf[i+1],cnt1[i]+cnt2[i]-cnt3[i]);
//         }
//         for(int i=0;i<n-1;i++){
//             int one=cnt1[i];
//             int two=cnt2[i];
//             int thr=cnt3[i];
//             int rem1=t1-one;
//             int rem2=t2-two;
//             int rem3=t3-thr;
//             if((one||two||thr)&&(rem1||rem2||rem3)&&(one>=two+thr )&&(sf[i+1]>=one+two-thr)){flag=1;}
//         }
//         if(flag)cout<<"YES";
//         else cout<<"NO";
//     }
// int main()
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


// #include <bits/stdc++.h>
// using namespace std;
// // typedef long long ll;
// #define int long long
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     vector<vector<int>>v(n,vector<int>(k,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<k;j++)cin>>v[i][j];
//     }
//     int diff=0;
//     for(int i=0;i<k;i++){
//         int sum=0;
//         vector<int>a;
//         for(int j=0;j<n;j++){
//             a.push_back(v[j][i]);
//         }
//         sort(begin(a),end(a));
//         for(int p=0;p<n;p++){
//         sum+=a[p];
//         diff+=abs((p+1)*a[p] - sum);
//         }
//     }
//     cout<<diff;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve(); cout<<'\n';
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// // typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){cin>>v[i]; }
//     set<int>st(begin(v),end(v));
//     int i=0,j=n-1;
//     while(i<j){
//         int f=0;
//         if(v[i]==*(prev(st.end()))||v[i]==*(st.begin())){st.erase(v[i]); i++; f=1;}
//         if(v[j]==*(prev(st.end()))||v[j]==*(st.begin())){st.erase(v[j]); j--; f=1;}
//         if(f==0)break;
//     }
//     if(i<j)cout<<i+1<<" "<<j+1;
//     else cout<<-1;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve(); cout<<'\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod = 998244353;
//  void solve(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for(auto &x : v) cin >> x;
//     vector<int> mp(n + 1);
//     for(int i = 0;i < n;){
//         int j = i + 1;
//         while(j < n && v[j] == v[i]){
//             j += 1;
//         }
//         mp[j - i] += 1;
//         i = j;
//     }
//     int ans = 0, sum = 0;
//     int tot = 0;
//     for(int i = n;i >= 1;i -= 1){
//         if(mp[i] == 0) continue;
//         sum += i * mp[i];
//         tot += mp[i];
//         int cur = sum - (i - 1) * tot;
//         if(cur <= k && (k - cur) % tot == 0){
//             ans += 1;
//         }
//     }
//     cout << ans;
// }
// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         cout << '\n';
//     }
//     return 0;
// }



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
