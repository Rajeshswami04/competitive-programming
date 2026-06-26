#include <bits/stdc++.h>
using namespace std;

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     for(long long i=0;i<n;i++)cin>>v[i];
//     unordered_map<long long,long long>mp;
//     for(long long i:v)mp[i]++;
//     long long most=-1;
//     long long freq=0;
//     for(long long i:v){
//         if(mp[i]>freq){most=i; freq=mp[i];}
//     }
//     long long left=0;
//     long long right=n-1;
//     long long cnt=0;
//     sort(v.begin(),v.end());
//     if(freq==1){most=v[n/2];}
//     while(left<right){
//         if(v[left]==most&&v[right]==most){break;}
//         else if(v[left]==most){
//             cnt++;
//             right--;
//         }else if(v[right]==most){
//             cnt++;
//             left++;
//         }
//         else if(v[left]!=most&&v[right]!=most){
//             cnt++;
//             left++;
//             right--;
//         }
//     }
//     cnt=min(cnt,n/2);
//     cout<<cnt<<"\n";
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     for(long long i=0;i<n;i++)cin>>v[i];
//     vector<long long>ans(n);
//     ans[0]=v[0];
//     long long sum=ans[0];
//     long long t=ans[0];
//     for(long long i=1;i<n;i++){
//         sum+=v[i];
//         t=sum/(i+1);
//         ans[i]=min(t,ans[i-1]);
//     }
//     for(long long i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<"\n";
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//   long long n,x,s;
//   cin>>n>>x>>s;
//   string ss;
//   cin>>ss;
//   long long cnt=0;
//   long long ambi=0;
//   long long seat=0;
//   for(char i:ss){
//     if(i=='E'){
//         if(seat){
//             seat--;
//             cnt++;
//         }else if(x&&ambi){
//             ambi--;
//             seat+=s;
//             x--;
//             seat--;
//             cnt++;
//         }
//     }else if(i=='I'){
//         if(x){x--; seat+=s-1; cnt++;}
//     }else{
//         if(seat==0){
//             if(x){x--; seat+=s-1; cnt++;}
//         }else{
//             ambi++;
//             seat--;
//             cnt++;
//         }
//     }
//   }
//   cout<<cnt<<"\n";
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//   long long n;
//   cin>>n;
//   for(long long i=1;i<=n*2;i+=2)cout<<i<<" ";
//   cout<<endl;
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//   long long n;
//   cin>>n;
//   vector<long long>v(n);
//   for(long long i=0;i<n;i++)cin>>v[i];
//   long long diff=0;
//   long long j=-1;
//   for(long long i=0;i<n-1;i++){
//     diff=max(diff,v[i]-v[i+1]);
//   }
//   for(long long i=1;i<n;i++){
//     if(v[i]<v[i-1])v[i]+=diff;
//   }
//   for(long long i=1;i<n;i++){
//     if(v[i]-v[i-1]<0){cout<<"NO\n"; return;}
//   }
//   cout<<"YES\n";
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     long long n;
//     cin >> n;
//     vector<long long> v(n);
//     for (long long i = 0; i < n; i++)
//         cin >> v[i];
//     unordered_map<long long,long long>count;
//     unordered_map<long long,long long>reach;
//     for(long long i:v){
//         long long j=i;
//         unordered_set<long long>st;
//         long long s=0;
//         while(st.count(j)==0){
//             st.insert(j);
//             reach[j]++;
//             count[j]+=s;
//             s++;
//             if(j&1)j++;
//             else j>>=1;
//         }
//     }
//     long long cnt=1e18;
//     for(auto it:reach){
//         if(it.second==n){
//             cnt=min(cnt,count[it.first]);
//         }
//     }
//     cout << cnt << "\n";
// }

// signed
// main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     long long n,s,g;
//     cin>>n>>s>>g;
//     long long cnt=0;
//     long long dv=n%3;
//     long long q=n/3;
//     cnt=min(q*g,s*q*3);
//     if(dv)cnt=cnt+min(dv*s,g);
//     cout<<cnt<<"\n";
// }

// signed
// main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     long long n;
//     string s;
//     cin>>s;
//     n=s.size();
//     long long cnt=0;
//     long long pref=0;
//     for(char i:s){
//         if(i=='1'||i=='3')pref++;
//     }
//     long long ans=pref;
//     for(char i:s){
//         if(i=='1'||i=='3')pref--;
//         if(i=='2')cnt++;
//         ans=max(ans,cnt+pref);
//     }
//     cout<<n-ans<<"\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//    long long n;
//    cin>>n;
//    vector<long long>v(n);
//    for(long long i=0;i<n;i++){cin>>v[i];}
// //    map<long long,long long>mp;
//    long long sm=0;
//    long long u=0;
//    long long slots=0;
//    for(auto it:v){
//         if(it==1)u++;
//         else{
//         long long jhel=floor((double)it/2)-1LL;
//         slots+=jhel;
//       }
//       sm+=it;
// }
//    if(u==n-1)slots++;
//    long long was=max(0LL,u-slots);
//    if(sm-was < 3){cout<<0<<"\n"; return;}
//    cout<<sm-was<<"\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//    long long n,x1,x2,k;
//    cin>>n>>x1>>x2>>k;
//    if(n<=3){cout<<1<<"\n"; return;}
//    long long d=min(abs(x1-x2),n-abs(x1-x2));
//    cout<<d+k<<"\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long a;
//     long long n;
//     cin >> a >> n;
//     vector<long long> d(n);
//     for(long long i=0;i<n;i++)cin>>d[i];

//     string s = to_string(a);
//     long long len = s.size();
//     long long ans = 2e18;
//     if (len > 1) {
//         long long num = 0;
//         for (long long i = 0; i < len - 1; i++) {
//             num = num * 10 + d[n-1];
//         }
//         ans = min(ans, abs(a - num));
//     }
//     long long first_digit = (d[0] == 0) ? d[1] : d[0];
//     long long num = first_digit;
//     for (long long i = 0; i < len; i++) {
//         num = num * 10 + d[0];
//     }
//     ans = min(ans, abs(a - num));
//     long long prefix = 0;
//     for (long long i = 0; i < len; i++) {
//         long long hh=0;
//         long long target_digit = s[i] - '0';

//         // for(auto x:d){if(x==target_digit)hh=1;}
//         for (long long x : d) {
//             if(x==target_digit)hh=1;
//             if (x != target_digit) {
//                 long long candidate = prefix * 10 + x;

//                 for (long long j = i + 1; j < len; j++) {
//                     if (x > target_digit) {
//                         candidate = candidate * 10 + d[0];
//                     } else {
//                         candidate = candidate * 10 + d[n-1];
//                     }
//                 }
//                 ans = min(ans, abs(a - candidate));
//             }
//         }

//         if (hh) {
//             prefix = prefix * 10 + target_digit;
//         } else {
//             break;
//         }
//         if (i == len - 1) {
//             ans = 0;
//         }
//     }

//     cout << ans << "\n";
// }

// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void rotate(vector<long long>& v, long long k){
//     reverse(v.begin(), v.begin() + k);
//     reverse(v.begin() + k, v.end());
//     reverse(v.begin(), v.end());
// }

// void solve() {
//     long long n, x, y;
//     cin >> n >> x >> y;
//     vector<long long> v(n);
//     for(long long i = 0; i < n; i++) cin >> v[i];

//     vector<long long> bet;
//     vector<long long> rem;
//     x--; y--;

//     for(long long i = 0; i < n; i++){
//         if(i >x && i<=y) bet.push_back(v[i]);
//         else rem.push_back(v[i]);
//     }

//     if(bet.size() != 0){
//         long long mx = n + 1;
//         for(long long it : bet) { mx = min(it, mx); }
//         for(long long i = 0; i < bet.size(); i++) {
//             if(bet[i] == mx) { rotate(bet, i); break; }
//         }

//         long long f = 0;
//         for(long long j = 0; j < rem.size(); j++){
//             if(rem[j] > mx && f == 0){
//                 f = 1;
//                 for(auto it : bet) cout << it << " ";
//                 cout << rem[j] << " ";
//             } else {
//                 cout << rem[j] << " ";
//             }
//         }
//         // Fix 1: If bet wasn't inserted because everything in rem was smaller
//         if(f == 0) {
//             for(auto it : bet) cout << it << " ";
//         }
//     } else {
//         // Fix 2: If bet is empty, prlong long out the elements of rem
//         for(auto it : rem) cout << it << " ";
//     }
//     cout << "\n";
// }

// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     cin>>n;
//     string a,b,r="",t="";
//     cin>>a>>b;
//     long long c1=0;
//     long long c2=0;
//     long long f=0;
//     for(long long i=0;i<n;i++){
//         char ca=a[i];
//         char cb=b[i];
//         if(ca=='('&&cb=='('){r+="("; t+="(";}
//         if(cb==')'&&ca==')'){r+=")"; t+=")";}
//         if(ca!=cb){
//             if(f){r+="("; t+=")";}
//             else {r+=")"; t+="(";}
//             f^=1;
//         }
//     }
//     f=1;
//     for(long long i=0;i<n;i++){
//         char ca=r[i];
//         char cb=t[i];
//         if(ca=='('){c1++;}else c1--;
//         if(cb=='('){c2++;}else c2--;
//         if(c1<0||c2<0)f=0;
//     }
//     if(f==1&&c1==0&&c2==0){cout<<"YES\n";}
//     else cout<<"NO\n";
// }

// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// for i>=2 i<n ele[i]^i=in next elements
// its hard version is i>=1 and i<=n hehe 1800 rated cf
// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     cin>>n;
//     if(n%2==0){
//         cout<<n<<" ";
//         for(long long i=2;i<=n-2;i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//         cout<<1<<"\n";
//     }else{
//         cout<<n-1<<" ";
//         for(long long i=2;i<=n-2;i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//         cout<<n<<" "<<1<<"\n";
//     }
// }
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     unordered_map<long long,long long>mp;
//     for(long long i=0;i<n;i++){cin>>v[i]; mp[v[i]]++;}
//     long long cnt1=0;
//     long long cnt2=0;
//     for(auto it:mp){
//         if(it.second==1)cnt1++;
//         else cnt2++;
//     }
//     cout<<(cnt2+(cnt1+1)/2)<<"\n";
// }
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// grid l  1093 div2
// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long p,q;
//     cin>>p>>q;
//     for(long long n=1;n<=1e5;n++){
//         long long t=p+2*q-n;
//         if(t<=0||(t)%(2*n+1))continue;
//         long long m=t/(2*n+1);
//         if(m<n)break;
//         long long qmax=n*(n+1)+(m-n)*n;
//         if(q>qmax)continue;
//         cout<<n<<" "<<m<<"\n";
//         return;
//     }
//     cout<<-1<<"\n";
// }
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//    long long a,b,c,m;
//    cin>>a>>b>>c>>m;
//    long long ab = (a / __gcd(a,b)) * b;
// long long bc = (b / __gcd(b,c)) * c;
// long long ac = (a / __gcd(a,c)) * c;
//   long long abc = (ab / __gcd(ab,c)) * c;
//    long long ansabc=m/abc;
//    long long count_a   = m / a;
//     long long count_b   = m / b;
//     long long count_c   = m / c;
//     long long count_ab  = m / ab;
//     long long count_bc  = m / bc;
//     long long count_ac  = m / ac;
//     long long count_abc = m / abc;
//     long long only_abc = count_abc;
//     long long only_ab = count_ab - count_abc;
//     long long only_bc = count_bc - count_abc;
//     long long only_ac = count_ac - count_abc;
//     long long only_a = count_a - only_ab - only_ac - only_abc;
//     long long only_b = count_b - only_ab - only_bc - only_abc;
//     long long only_c = count_c - only_ac - only_bc - only_abc;
//     long long ansa = (only_a * 6) + (only_ab * 3) + (only_ac * 3) + (only_abc * 2);
//     long long ansb = (only_b * 6) + (only_ab * 3) + (only_bc * 3) + (only_abc * 2);
//     long long ansc = (only_c * 6) + (only_ac * 3) + (only_bc * 3) + (only_abc * 2);

//     cout << ansa << " " << ansb << " " << ansc << "\n";
// }
// we can modify it , we can say from last day of each paired game like ab ac bc they start back again add this also
// then we have to just long longroduce another as many var as above given
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     string s;
//     cin>>n;
//     cin>>s;
//     if(n&1){
//         if(s[0]=='b'){cout<<"NO\n"; return;}
//         for(long long i=1;i<n;i+=2){
//             if(i+1<n&&s[i]==s[i+1]&&s[i]!='?'){cout<<"NO\n"; return;}
//         }
//     }else{
//         for(long long i=1;i<n;i+=2){
//             if(s[i]==s[i-1]&&s[i]!='?'){cout<<"NO\n"; return;}
//         }
//     }
//     cout<<"YES\n";
// }
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     cin>>n;
//     long long t=4*n;
//     if(n%2==0){
//     for(long long i=1;i<=n;i++)cout<<i<<" ";
//     for(long long i=1;i<=n;i++)cout<<i<<" ";
//     for(long long i=n;i>=1;i--)cout<<i<<" ";
//     // cout<<1<<" "<<2<< " "
//     for(long long i=1;i<=n;i++)cout<<i<<" ";
//     }else{
//     for(long long i=1;i<=n;i++)cout<<i<<" ";
//     for(long long i=1;i<=n;i++)cout<<i<<" ";
//     cout<<n<<" ";
//     for(long long i=1;i<n;i++)cout<<i<<" ";
//     for(long long i=1;i<=n;i++)cout<<i<<" ";
//     }
// cout<<"\n";
// }
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n;
//     cin >> n;

//     vector<pair<long long,long long>> a(n), b(n), c(n);

//     for(long long i = 0; i < n; i++) {
//         cin >> a[i].first;
//         a[i].second = i;
//     }

//     for(long long i = 0; i < n; i++) {
//         cin >> b[i].first;
//         b[i].second = i;
//     }

//     for(long long i = 0; i < n; i++) {
//         cin >> c[i].first;
//         c[i].second = i;
//     }

//     sort(a.rbegin(), a.rend());
//     sort(b.rbegin(), b.rend());
//     sort(c.rbegin(), c.rend());

//     long long ans = 0;

//     for(long long i = 0; i < min(3, n); i++) {
//         for(long long j = 0; j < min(3, n); j++) {
//             for(long long k = 0; k < min(3, n); k++) {

//                 long long x = a[i].second;
//                 long long y = b[j].second;
//                 long long z = c[k].second;

//                 if(x != y && y != z && x != z) {
//                     ans = max(ans,
//                               1LL * a[i].first +
//                               b[j].first +
//                               c[k].first);
//                 }
//             }
//         }
//     }

//     cout << ans << '\n';
// }

// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;

//     while(t--) solve();
// }

// #include <bits/stdc++.h>
// using namespace std;
// the question is that you are given two int a b and x you can divide a,b by
// x and increase a or b by1  , you have to find min opr to equal two number
// void solve() {
//     long long a,b,x;
//     cin>>a>>b>>x;
//     vector<pair<long long,long long>>va;
//     vector<pair<long long,long long>>vb;
//     long long ta=a;
//     long long t=0;
//     while(ta){
//         va.push_back({ta,t});
//         ta/=x;
//         t++;
//     }
//     va.push_back({ta,t});
//     ta=b;
//     t=0;
//     while(ta){
//         vb.push_back({ta,t});
//         ta/=x;
//         t++;
//     }
//     vb.push_back({ta,t});
//     long long ans=1e9;
//     for(auto it:va){
//         for(auto v:vb){
//             long long tar=max(it.first,v.first);
//             long long ty=tar-it.first + tar-v.first+it.second+v.second;
//             ans=min(ans,ty);
//         }
//     }
//     cout<<ans<<"\n";
// }

// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;

//     while(t--) solve();
// }

// using namespace std;

// long long maxRatings(vector<vector<long long>>& units) {
//     long long m = units.size();
//     if (m == 0) return 0;
//     long long n = units[0].size();
//     if (m == 1) {
//         return *min_element(units[0].begin(), units[0].end());
//     }
//     long long gmin = long long_MAX;
//     long long sum2 = 0;
//     for (long long i = 0; i < m; ++i) {
//         sort(units[i].begin(), units[i].end());
//         gmin = min(gmin, units[i][0]);
//         if (n > 1) {
//             sum2 += units[i][1];
//         }
//     }
//     long long wop = 0;
//     for (long long i = 0; i < m; ++i) {
//         wop += units[i][0];
//     }
//     long long wiop = 0;
//     for (long long x = 0; x < m; ++x) {
//         long long temp = gmin;
//         if (n > 1) {
//             temp += (sum2 - units[x][1]);
//         }
//         wiop = max(wiop, temp);
//     }
//     return max(wop, wiop);
// }
// long long main() {
//     vector<vector<long long>> v = {{1}, {1}};
//     cout << "Maximum Ratings Sum: " << maxRatings(v) << endl;
//     return 0;
// }

// bool fun(long long l,long long r,vector<long long>&nums){
//         unordered_map<long long,long long>mp;
//         long long freq=0;
//          long long minfreq=1e9;
//         for(long long i=l;i<=r;i++){mp[nums[i]]++; freq=max(freq,mp[nums[i]]);
//                             //  minfreq=min(minfreq,mp[nums[i]]);
//                              }
//         if(mp.size()==1)return 1;
//         for(auto &it :mp ){
//            minfreq=min(minfreq,it.second);
//         }
//         if(minfreq==freq)return 0;
//         for(auto &it :mp ){
//             if(it.second!=freq && freq!=it.second*2){
//                 return 0;
//             }
//         }
//         return 1;
//     }
//     long long getLength(vector<long long>& nums) {
//         long long len=1;
//         long long n=nums.size();
//         vector<unordered_map<long long>>v(n);
//         for(long long i=0;i<n;i++){
//             v[i][nums[i]]++;
//         }
//         for(long long i=0;i<n;i++){
//             for(long long j=i+1;j<n;j++){

//             }
//         }
//         return len;
//     }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     cin>>n;
//     long long k;
//     cin>>k;
//     vector<long long>v(n);
//     for(auto &it:v)cin>>it;
//     vector<pair<long long,long long>>b;
//     sort(v.begin(),v.end());
//     b.push_back({v[0],1});
//     for(long long i=1;i<n;i++){
//         if(v[i]==b.back().first)b.back().second++;
//         else b.push_back({v[i],1});}
//     while(b.size()>0){
//         long long n=b.size();
//         if(b[n-1].second%2==0){
//             cout<<"YES\n"; return;
//         }
//         if(n==1){
//             cout<<"NO\n"; return;
//         }
//         if(b[n-1].first-b[n-2].first<=k){
//             cout<<"YES\n"; return;
//         }
//         b.pop_back();
//     }
//     cout<<"NO\n";
// }
// long long main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;}

// // div2_191_rbs minimisation
// #include<bits/stdc++.h>
// using namespace std;
// #define long long long long
// const long long INF = 1000000007;
// void solve(){
// 	long long n, k;
// 	cin >> n >> k;
// 	string s;
// 	cin >> s;
//     long long val=INF;
//     string ans(n,'0');
//     for(long long i=0;i<=n;i++){
//         string temp(n,'0');
//         string ss=s;
//         long long kk=k;
//         for(long long j=0;j<i;j++){
//             if(ss[j]=='('&&kk>0){
//                 temp[j]='1';
//                 ss[j]=')';
//                 kk--;
//             }
//         }
//         for(long long j=n-1;j>i;j--){
//             if(ss[j]==')'&&kk>0){
//                 temp[j]='1';
//                 ss[j]='(';
//                 kk--;
//             }
//         }
//         long long cval=0;
//         long long bal=0;
//         for(long long j=0;j<n;j++){
//             if(ss[j]==')'&&bal>0){
//                 cval+=2;
//                 bal--;
//             }else if(ss[j]=='(')bal++;
//         }
//         if(cval<val){
//             ans=temp;
//             val=cval;
//         }
//     }
// 	cout << ans << '\n';
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve() {
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     for(auto &it:v)cin>>it;
//     vector<long long>vv(n);
//     for(long long i=0;i<n;i++){
//         long long x=0;
//         for(long long j=1;j<n;j++){
//             long long xx=(i+j-1+n)%n;
//             long long yy=(i+j)%n;
//             x=max(x,v[xx]);
//             vv[yy]=x;
//         }
//         x=0;
//         long long sm=0;
//         for(long long j=1;j<n;j++){
//             long long xx=(i-j+n)%n;
//             x=max(x,v[xx]);
//             sm+=min(x,vv[xx]);
//         }
//         cout<<sm<<" ";
//     }
//     cout<<"\n";
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     vector<long long>ans;
//     int t=0;
//     for(long long i=n-1;i>=0;i--){
//         long long x=v[i];
//         if((t&1)){
//             x=-x;
//         }
//         if(x>0){
//             ans.push_back(i+1);
//             t^=1;
//         }
//     }
//     // reverse(ans.begin(),ans.end());
//     cout<<ans.size()<<"\n";
//     for(auto it:ans){
//         cout<<it<<" ";
//     }
//     cout<<"\n";
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// void solve() {
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     vector<long long>ans;
//     int s1=0,s2=0;
//     for(auto &it:v)s1+=it;
//     int maxx=s1;
//     int k=-1;
//     for(int i=0;i<n;i++){ // prefix suffix trick
//         s1-=v[i];
//         if(v[i]>0){
//             int t=s2+s1-v[i];
//             if(t>maxx){
//                 maxx=t;
//                 k=i;
//             }
//         }
//         s2+=abs(v[i]);
//     }
//     if(k==-1){
//         cout<<0<<"\n";
//         return;
//     }

//     int cnt=1;
//     for(int i=k-1;i>=0;i--){
//         int x=v[i];
//         if(!(cnt&1))x=x*(-1);
//         if(x>0){
//             ans.push_back(i+1);
//             cnt++;
//         }
//     }
//     ans.push_back(k+1);
//     cout<<ans.size()<<"\n";
//     for(auto it:ans){
//         cout<<it<<" ";
//     }
//     cout<<"\n";
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// palindromex array
// #define int long long
//  vector<long long>v;
//  int solve1(int l,int r){
//     set<int>st;
//     int n=v.size()/2;
//     for(int i=0;i<=n;i++)st.insert(i);
//     int flag=0;

//     while(l>=0&&r<2*n){
//         if(v[l]!=v[r]){flag=1; break;}
//         st.erase(v[l]);
//         l--;
//         r++;
//     }
//     return *(st.begin());
//  }
// void solve() {
//     long long n;
//     cin>>n;
//     v.assign(2*n,0);
//     vector<vector<int>>a(n);
//     for(int i=0;i<2*n;i++){cin>>v[i]; a[v[i]].push_back(i);}
//     int ans=1;
//     int l=a[0][0];
//     int r=a[0][1];
//     ans=max(ans,solve1(l,l));
//     ans=max(ans,solve1(r,r));
//     ans=max(ans,solve1((l+r)/2,(l+r+1)/2));// they both are parts of subarray
//     cout<<ans<<"\n";
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// bool func(int mid, vector<int>& v) {
//     multiset<int> st(v.begin(), v.end());
//     for(int i = mid - 1; i >= 0; i--) {
//         auto exact = st.find(i);
//         if(exact != st.end()) {
//             st.erase(exact);
//         }
//         else {
//             auto it = prev(st.end()); // largest
//             if(*it < 2 * i + 1)
//                 return false;
//             st.erase(it);
//         }
//     }
//     return true;
// }
// void solve() {
//     long long n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){cin>>v[i];}
//     int low=0;
//     int high=n;
//     int ans=0;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(func(mid,v)){ans=mid; low=mid+1;}
//         else high=mid-1;
//     }
//     cout<<ans<<"\n";
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

//     void solve() {
//     long long t, h, u;
//     cin >> t >> h >> u;
//     long long cnt = 0;
//     long long tu = min(t, u);
//     cnt += tu * 4;
//     t -= tu;
//     u -= tu;
//     long long t2h = min(t / 2, h);
//     cnt += t2h * 7; //mymistake
//     t -= t2h * 2;
//     h -= t2h;
//     if (t > 0 && h > 0) {
//         cnt += 5;
//         t--;
//         h--;
//     }
//     if (t > 0) {
//         cnt += 2*t+1;
//     }
//     cnt += h * 3 + u * 3;
//     cout << cnt << "\n";
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

//     void solve() {
//     int n,k,p,m;
//     cin>>n>>k>>p>>m;
//     queue<pair<int,int>>q;
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         if(i==p-1){q.push({-1,c});}
//         else {q.push({c,c});
//     }
//     }
//     int cnt=0;
//     for(int i=0;i<min(n,k);i++){
//         pq.push(q.front());
//         q.pop();
//     }
//     int t=0;
//     while(!pq.empty()){
//         auto it =pq.top();
//         if(cnt+it.second>m)break;
//         if(it.first==-1)t++;
//         q.push(it);
//         pq.pop();
//         pq.push(q.front());
//         cnt+=it.second;
//         q.pop();
//     }
//     cout<<t<<"\n";
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<long double>>v;
//     void solve() {
//     v.clear();
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         long double c1,c2;
//         cin>>c1>>c2;
//         v.push_back({c1,c2/100.0});
//     }
//     long double sum=0.0;
//     for (int i = n - 1; i >= 0; i--) {
//     sum = max(sum, sum * (1 - v[i][1]) + v[i][0]);
// }

// cout << fixed << setprecision(10) << sum << '\n';
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
//    void solve() {
//        string s;
//        cin>>s;
//        int n=s.size();
//        int i=-1,j=-1;
//        for(int k=0;k<n-1;k++){
//         if(s[k]==s[k+1]){
//         if(i==-1)i=k+1;
//         else j=k;}
//        }
//        if(i==-1){cout<<"YES\n"; return ;}
//        if(i>-1&&j==-1){cout<<"YES\n"; return;}
//        string ss=s;
//        reverse(ss.begin()+i,ss.begin()+j+1);
//        string t=ss;
//        for(int k=i;k<=j;k++)t[k]='a'^'b'^t[k];
//     int f=0;
//        for(int p=0;p<n-1;p++){
//         if(ss[p]==ss[p+1])f=1;
//        }
//        if(f==0)
//        {cout<<"YES\n";  return;}
//        f=0;
//        for(int p=0;p<n-1;p++){
//         if(t[p]==t[p+1])f=1;
//        }
//        if(f==0)
//        {cout<<"YES\n";  return;}
//        cout<<"NO\n";
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
//    void solve() {
//        int n;
//        cin>>n;
//        vector<int>a(n);
//        vector<int>b(n);
//        for(auto &it:a)cin>>it;
//        for(auto &it:b)cin>>it;
//        int flag=0;
//        for(int i=0;i<n;i++){
//         if(b[i]<a[i])flag=1;
//        }
//        if(flag==0){cout<<0<<'\n'; return;}
//        int cnt=0;
//        for(int i=0;i<n;i++){
//         if(a[i]==b[i])continue;
//         int t=-1;
//         for(int j=i;j<n;j++){
//             if(a[j]<=b[i]){t=j; break;}
//         }
//         if(t==-1){cout<<-1<<"\n"; return ;}
//         while(t>0&&t>i){swap(a[t],a[t-1]); cnt++; t--;}
//        }
//        cout<<cnt<<"\n";
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// codeforces 1102 div 2 d
// 00->1 and 11->0
// no of substriing of s which can be reduced to one len
//  #include <bits/stdc++.h>
//  #define int long long
//  using namespace std;
//     void solve() {
//         int n;
//         cin>>n;
//      string s;
//      cin>>s;
//      int sum=0;
//      int alt=0;
//      vector<int>dp(3,0);
//      for(int i=0;i<n;i++){
//          char c=s[i];
//          vector<int>temp(3,0);
//          if(c=='0'){
//              temp[0]=dp[1];
//              temp[1]=dp[2];
//              temp[2]=dp[0]+1;
//          }else{
//              temp[0]=dp[2];
//              temp[1]=dp[0]+1;
//              temp[2]=dp[1];
//          }
//          dp=temp;
//          if(i&&s[i]!=s[i-1])alt++;
//          else alt=1;
//          sum+=dp[2]+dp[1]-(alt-1)/2;
//      }
//      cout<<sum<<'\n';
//  }
//      signed main() {
//      ios::sync_with_stdio(false);
//      cin.tie(nullptr);
//      long long t;
//      if (cin >> t) {
//          while (t--) {
//              solve();
//          }
//      }
//      return 0;
//  }

// div 3 e 2227e
// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
//    void solve() {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &it:v)cin>>it;
//     if(v[n-1]==1){
//     int sum=0;
//     for(int i=n-2;i>=0;i--){
//         sum+=v[i];
//     }
//     cout<<sum<<"\n";
//     return ;
//     }
//     int idx=-1;
//     stack<int>st;
//     int maxi=0;
//     for(int i=0;i<n;i++){
//         if(st.empty())st.push(i);
//         while(!st.empty()&&v[st.top()]>=v[i]){
//             st.pop();
//         }
//         int p=-1;
//         if(st.empty())p=i;
//         else { p=i-st.top()-1;}
//         if(p>maxi){idx=i; maxi=p;}
//         st.push(i);
//     }
//     int sum=0;
//     int mini=1e9;
//     if(idx==-1){
//         cout<<0<<"\n";
//         return ;
//     }
//     for(int j=n-1;j>=0;j--){
//         if(j==idx)v[j]--;
//         mini=min(mini,v[j]);
//         sum+=max(0LL,v[j]-mini);
//     }
//     cout<<sum<<"\n";
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// mex mistake
// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
//    void solve() {
//     int n;
//     cin>>n;
//     vector<int>v;
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         mp[c]++;}
//     v.push_back(prev(mp.end())->first);
//   mp[prev(mp.end())->first]--;
//     for (auto &it : mp) {
//         if(it.second > 0){
//         v.push_back(it.first);
//         it.second--;}
//     }
//     for (auto &it : mp) {
//     while (it.second > 0) {
//         v.push_back(it.first);
//         it.second--;}
//     }
//     int sum=0;
//     int prevmax=0;
//     int cnt=0;
//     unordered_map<int,int>freq;
// for (int i = 0; i < n; i++) {
//     freq[v[i]]++;
//     while (freq.count(cnt)) cnt++;
//     prevmax = max(prevmax, v[i]);
//     sum += prevmax + cnt;
// }
//     cout<<sum<<'\n';
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// // // 461
// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
//    void solve() {
//     int n;
//     cin>>n;
//     string a;
//     string b;
//     cin>>a>>b;
//     vector<int>va(n);
//     vector<int>vb(n);
//     for(int i=0;i<n;i++){
//         if(a[i]==b[i]){
//             va[i]=-1;
//             vb[i]=-1;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(va[i]==-1||vb[i]==-1)continue;
//         if(i<n-1&&a[i]==a[i+1]&&va[i+1]!=-1){
//             va[i]=-1;
//             va[i+1]=-1;
//         }
//         if(i<n-1&&b[i]==b[i+1]&&vb[i+1]!=-1){
//             vb[i]=-1;
//             vb[i+1]=-1;
//         }
//     }
//     int cnt=0;
//     for(int i:va)if(i==0)cnt+=1;
//     for(int i:vb)if(i==0)cnt+=1;
//     cout<<cnt/2<<"\n";
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// exceptional segments
// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl '\n'
// const int MOD=998244353;
// void solve() {
//  int n, x;
//         cin >> n >> x;
//         int ans = 0;
//         if (x%4 == 0) {
//             if (x + 3 <= n) {
//                 int aa = x / 4 + 1,bb = (n - x - 3) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb%MOD) % MOD) % MOD;
//             }
//             if (x >= 2 && x + 1 <= n) {
//                 int aa = (x - 2) / 4 + 1,bb = (n - x - 1) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb%MOD) % MOD) % MOD;
//             }
//         }
//         else if(x%4== 2){
//             if (x + 3 <= n) {
//                 int aa = x / 4 + 1,bb = (n - x - 3) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb%MOD) % MOD) % MOD;
//             }
//             if (x >= 2 && x + 1 <= n) {
//                 int aa = (x - 2) / 4 + 1,bb = (n - x - 1) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb) % MOD) % MOD;
//             }
//         }
//         else if (x%4 == 1) {
//             if (x + 2 <= n) {
//                 int aa = (x - 1) / 4 + 1;
//                 int bb = (n - x - 2) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb%MOD) % MOD) % MOD;
//             }
//             if (x >= 3) {
//                 int aa = (x - 3) / 4 + 1;
//                 int bb = (n - x) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb) % MOD) % MOD;
//             }
//         }
//         else{
//             if (x + 2 <= n) {
//                 int aa = (x - 1) / 4 + 1;
//                 int bb = (n - x - 2) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb%MOD) % MOD) % MOD;
//             }
//             if (x >= 3) {
//                 int aa = (x - 3) / 4 + 1;
//                 int bb = (n - x) / 4 + 1;
//                 aa %= MOD;
//                 bb %= MOD;
//                 ans = (ans + (aa * bb%MOD) % MOD) % MOD;
//             }
//         }
//         cout << ans <<endl;}
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// alternating path
//  beautiful verties
//  #include <bits/stdc++.h>
//  #define int long long
//  #define endl "\n"
//  using namespace std;
//     void solve() {
//      int n,m;
//      cin>>n>>m;
//      vector<int>vis(n,-1);
//      vector<vector<int>>adj(n);
//      for(int i=0;i<m;i++){
//          int u,v;
//          cin>>u>>v;
//          u--;
//          v--;
//          adj[u].push_back(v);
//          adj[v].push_back(u);
//      }
//      int cnt=0;
//      for(int i=0;i<n;i++){
//          if(vis[i]==-1){
//          queue<int>q;
//          q.push(i);
//          vector<int>cn(2,0);
//          vis[i]=0;
//          int ok=1;
//          while(!q.empty()){
//              int t=q.front(); q.pop();
//              cn[vis[t]]++;
//              for(auto it:adj[t]){
//                  if(vis[it]==vis[t]){ok=0;}
//                  else if(vis[it]==-1) {
//                      vis[it]=vis[t]^1;
//                      q.push(it);
//                  }
//              }
//          }
//          if(ok)cnt+=max(cn[0],cn[1]);}
//      }
//      cout<<cnt<<endl;
//  }
//      signed main() {
//      ios::sync_with_stdio(false);
//      cin.tie(nullptr);
//      long long t;
//      if (cin >> t) {
//          while (t--) {
//              solve();
//          }
//      }
//      return 0;
//  }

// leetcode 1840 maximum height of buildings

// class Solution {
// public:
//     int maxBuilding(int n, vector<vector<int>>& r) {
//         r.push_back({1,0});
//         sort(r.begin(),r.end());
//         for(int i=1;i<r.size();i++){
//             int x1=r[i-1][0];
//             int x2=r[i][0];
//             int y1=r[i-1][1];
//             int y2=r[i][1];
//             r[i][1]=min(y2,y1+abs(x2-x1));
//         }
//         for(int i=r.size()-2;i>=0;i--){
//             int x1=r[i+1][0];
//             int x2=r[i][0];
//             int y1=r[i+1][1];
//             int y2=r[i][1];
//             r[i][1]=min(y2,y1+abs(x2-x1));
//         }
//         int ans=0;
//         for(int i=1;i<r.size();i++){
//             int x1=r[i-1][0];
//             int x2=r[i][0];
//             int y1=r[i-1][1];
//             int y2=r[i][1];
//             ans=max(ans,((y1+y2+x2-x1)>>1));
//         }
//         ans=max(ans,r[r.size()-1][1]-r[r.size()-1][0]+n);
//         // last line is because if restriction array is empty then you we get  0-1+n = n-1 that is right ?
// return ans;
//     }
// };

// #include <bits/stdc++.h>
// #define int long long
// #define endl "\n"
// using namespace std;
//    void solve() {
//     int n,k;
//     cin>>n>>k;
//     string a;
//     string b;
//     cin>>a;
//     cin>>b;
//     int a10=0;
//     int a11=0;
//     int b10=0;
//     int b11=0;
//     int ab1=0;
//     int ab0=0;

//     for(char i:a){if(i=='1')a11++; else a10++;}
//     for(char i:b){if(i=='1')b11++; else b10++;}
//     for(int i=0;i<n;i++){
//         char t1=a[i];
//         char t2=b[i];
//         if(t1==t2)ab0++;
//         else ab1++;
//     }
//     int po=(1<<k)+1;
//     int cnt1=(a10*a11)*((po-1)/3 +1);
//     int cnt2=(b10*b11)*((po-2)/3 +1);
//     int cnt3=(ab0*ab1)*(po/3);
//     cout<<cnt1+cnt2+cnt3<<endl;
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define int long long
// #define endl "\n"
// using namespace std;
//    void solve() {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &it:v){
//         cin>>it;
//     }
//     vector<int>s(v.begin(),v.end());
//     sort(s.begin(),s.end());
//     int med=s[n/2];
//     int cnt=0;
//     vector<int>dp(n+1,-1e9);
//     dp[0]=0;
//     for(int i=1;i<=n;i++){
//         int lt=0,gt=0,e=0;
//         for(int j=i-1;j>=0;j--){
//             if(v[j]==med)e++;
//             else if(v[j]<med)lt++;
//             else gt++;
//             if((i-j)%2==0)continue;
//             if(gt+e>lt&&lt+e>gt){
//                 dp[i]=max(dp[i],dp[j]+1);
//             }
//         }
//     }
//     cout<<dp[n]<<endl;
// }
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }


//interactive one

// #include <bits/stdc++.h>
// #define int long long
// // #define endl "\n"
// using namespace std;
//     signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long t;
//     if (cin >> t) {
//         while (t--) {
//           int n;
//     cin>>n;
//     int done;
//     for(int i=2*n-1;i>=1;i-=2){
//         cout<<"? "<<i<<" "<<i+1<<endl;
//         cin>>done;
//         if(done){
//             cout<<"! "<<i<<endl;
//             break;
//         }
//     }
//     if(done)continue;;
//     cout<<"? 1 3"<<endl;
//     cin>>done;
//     if(done){
//         cout<<"! 3"<<endl;
//     }else cout<<"! 2"<<endl;
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;
// inline void solve(){
//     int n;cin >> n;
//     vector<vector<int>> v(n);
//     for(int i = 0;i < n;i += 1){
//         int m;cin >> m;
//         vector<int> a(m);
//         for(auto &x : a) cin >> x;
//         reverse(a.begin(), a.end());
//         set<int> st;
//         for(auto &x : a){
//             if(!st.contains(x)){
//                 st.insert(x);
//                 v[i].push_back(x);
//             }
//         }
//     }
//     vector<int> vis(n), ans;                     
//     set<int> st;
//     for(int k = 0; k < n;k += 1){
//         int ind = -1;
//         vector<int> best;
//         for(int i = 0;i < n;i += 1){
//             if(vis[i]) continue;
//             vector<int> cur;
//             for(auto &x : v[i]){
//                 if(!st.contains(x)){
//                     cur.push_back(x);}}
//             if(ind == -1 || best > cur){
//                 best = cur;
//                 ind = i;
//             }
//         }
//         if(ind != -1){
//             vis[ind] = 1;
//             for(auto &x : best){
//                 ans.push_back(x);
//                 st.insert(x);
//             }
//         }
//     }
//     for(auto &x : ans) cout << x << ' ';
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
// 5
// 3
// 5 1 2 3 4 6
// 3 2 5 1
// 4 1 9 2 3
// 2
// 2 1 6
// 1 6
// 1
// 3 6 1 1
// 5
// 4 2 3 3 4
// 5 1 2 4 3 1
// 2 4 1
// 3 3 3 1
// 5 4 3 2 2 2
// 5
// 4 2 3 1 4
// 5 2 5 5 6 5
// 5 3 4 7 5 5
// 8 3 6 4 3 1 1 5 4
// 2 1 1
// Output
// 1 5 2 3 9 6 4
// 6 1
// 1 6
// 1 3 2 4
// 1 4 3 2 5 6 7


// #include <bits/stdc++.h>
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;
// void solve(){
//     int a,b;
//     cin>>a>>b;
//     if(a>=b){cout<<"Alice\n"; return;}
//     bool bb=0;
//     bool aa=(min(a/2,b/3)>=(b-a));
//     // cout<<a*1.0/b*1.0<<" ";
//     // while(a){
//     //     if(a==2){aa=1; break;}
//     //     a/=2;
//     // }
//     // while(b){
//     //     if(b==3){bb=1; break;}
//     //     b/=2;
//     // }
    
//     if(aa){cout<<"Bob\n";}else cout<<"Alice\n";
// }

// int32_t main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     cin >> t;
//     while(t--){
//         solve();
//         // cout << '\n';
//     }
//     return 0;
// }


//math based relation pure
// #include <bits/stdc++.h>
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &it:v)cin>>it;
//     vector<int>ans(n);
//     for(int i=1;i<n-1;i++){
//         ans[i]=(v[i-1]+v[i+1]-2*v[i])>>1;
//     }
//     ans[n-1]=v[0];// diff process for last and first element
//     for(int i=1;i<n-1;i++)ans[n-1]-=(i*ans[i]);
//     ans[n-1]=ans[n-1]/(n-1);
//     ans[0]=v[n-1];
//     for(int i=1;i<n-1;i++)ans[0]-=((n-1-i)*ans[i]);
//     ans[0]=ans[0]/(n-1);
//     for(auto it:ans)cout<<it<<" ";
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
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// // informity minimiation string 
// void solve(){
//     int n, k;
//     cin >> n >> k;
//     vector<vector<int>> v(n, vector<int>(26, 0));
//     for(int i = 0; i < k; i++){
//         string t;
//         cin >> t;
//         for(int j = 0; j < n; j++){
//             v[j][t[j] - 'a'] = 1;
//         }
//     }
//     for(int len = 1; len <= n; len++){
//         if(n % len != 0) continue;   
//         string pat = "";
//         bool possi = true;
//         for(int j = 0; j < len; j++){
//             char match = '0';
//             for(char c = 'a'; c <= 'z'; c++){
//                 bool ok = 1;
//                 for(int k = j; k < n; k += len){
//                     if(v[k][c - 'a'] == 0){
//                         ok = 0; 
//                         break; // propageated effeect 
//                     }
//                 }
//                 if(ok){
//                     match = c; 
//                     break; // propagated effect
//                 }
//             }
//             if(match == '0'){
//                 possi = false;
//                 break; // final effect of innel loop
//             }
//             pat += match; // made result block
//         }
//         if(possi){
//             string ans = "";
//             for(int r = 0; r < n / len; r++){
//                 ans += pat;
//             }
//             cout << ans;
//             return;
//         }
//     }
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
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;
// int prime(long long n) {
//     vector<long long> factors;

//     for (long long i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             factors.push_back(i);
//             while (n % i == 0) n /= i;
//         }
//     }
//     if(n>1)factors.push_back(n);
//     if(factors.size()==0)return 1;
//     return factors.size()>1?-1:factors[0];
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &it:v)cin>>it;
//     int b=0;
//     int one=0;
//     for(int i=0;i<n-1;i++){
//         if(v[i]>v[i+1]){if(v[i+1]==1)one=1;
//             b=1;}
//     }
//     if(one==1){cout<<"Alice"; return;}
//     if(b==0){cout<<"Bob"; return;}
//     vector<int>p(n);
//     for(int i=0;i<n;i++)p[i]=prime(v[i]);
//     b=0;
//     for(int i=0;i<n-1;i++){
//         if(p[i]>p[i+1]){
//             b=1;}
//       if(p[i]==-1||p[i+1]==-1){cout<<"Alice"; return;}
//           }
//     if(b==0){
//     cout<<"Bob"; return;}
//     cout<<"Alice";
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
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int inf = 1e15;
// const int mod =1e9+7;
// void dfs(int &t,int u,vector<vector<int>>&adj){
//     t++;
//     for(auto it:adj[u]){
//         dfs(t,it,adj);
//     }
//     t++;
// }
// void solve(){
//     int n;
//     cin>>n;
//     vector<vector<int>>adj(n+1);
//     adj[0].push_back(1);
//     unordered_map<int,int>par;
//     for(int i=1;i<=n;i++){
//         int left; cin>>left;
//         int right; cin>>right;
//         if(left==0)continue;
//         adj[i].push_back(left);
//         adj[i].push_back(right);
//         par[right]=i;
//         par[left]=i;
//     }
//     vector<int>ans(n+1,-1);
//     ans[0]=0;
//     queue<int>q;
//     q.push(1);
//     while(!q.empty()){
//         int t=0;
//         auto it=q.front();
//         dfs(t,it,adj);
//         ans[it]+=t;
//         for(auto v:adj[it]){
//             ans[v]+=ans[it];
//             q.push(v);
//         }
//         q.pop();
//     }
//     for(int i=1;i<=n;i++){cout<<ans[i]<<' ';}
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
// const int MOD = 1e9+7;
// void solve() {
//     int n;
//     cin >> n;
//     vector<vector<int>> adj(n + 1);
//     vector<int> par(n + 1, -1);
//     for(int i = 1; i <= n; ++i) {
//         int l, r;
//         cin >> l >> r;
//         if(l) {
//             adj[i].push_back(l);
//             adj[i].push_back(r);
//             par[l] = par[r] = i;
//         }
//     }
//     vector<int> f(n + 1), ans(n + 1);
//     function<void(int)> dfs1 = [&](int u) {
//         if(adj[u].empty()) {
//             f[u] = 1;
//             return;
//         }
//         int l = adj[u][0];
//         int r = adj[u][1];
//         dfs1(l);
//         dfs1(r);
//         f[u] = (f[l] + f[r] + 3) % MOD;// 1 for par to above , 2 for both child to till me 
//     };
//     dfs1(1);
//     function<void(int)> dfs2 = [&](int u) {
//         for(int v : adj[u]) {
//             ans[v] = (ans[u] + f[v]) % MOD;
//             dfs2(v);
//         }
//     };
//     ans[1] = f[1];
//     dfs2(1);
//     for(int i = 1; i <= n; ++i)
//         cout << ans[i] << ' ';
//     cout << '\n';
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }


// class Solution {
// public:
//     const int mod=1e9+7;
//     int zigZagArrays(int n, int l, int r) {
//         int m=r-l+1;
//         int t[2001][2001][2];
//         memset(t, 0, sizeof(t));
//         for(int i=1;i<=m;i++){
//             t[n][i][0]=1;
//             t[n][i][1]=1;
//         }
//         for(int i=n-1;i>=0;i--){
//             vector<int>cumi(m+1,0);
//             vector<int>cumd(m+1,0);
//             for(int prev=1;prev<=m;prev++){
//                 cumi[prev]+=cumi[prev-1]+t[i+1][prev][0];
//                 cumd[prev]+=cumd[prev-1]+t[i+1][prev][1];
//             }
//             for(int prev=1;prev<=m;prev++){
//                     t[i][prev][1]=cumi[m]-cumi[prev];
//                     t[i][prev][0]=cumd[prev-1];
//             }
//         }
//         int res=0;
//         for(int r=1;r<=m;r++){
//             res=res+t[1][r][0];
//             res=res+t[1][r][1];
//         }
//         return res;
//     }
// };

// int main(){
//     Solution s;
//    cout<<s.zigZagArrays(3,2,4);
// }



// Example
// InputCopy
// 6
// 8
// 3 2 2 3 7 3 6 7
// 5
// 1 2 3 4 5
// 3
// 1 1 1
// 10
// 2 1 2 1 3 5 5 7 7 7
// 4
// 1 1 2 2
// 1
// 1
// OutputCopy
// -1 1 1 2 -1 1 1 3
// 1 1 1 1 1
// 1 -1 -1
// 1 1 1 2 1 2 1 3 2 2
// 1 1 -1 2
// 1



// #include <bits/stdc++.h>
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;

// void solve(){
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,inf);
//     for(int i=1;i<=n;i++){
//         int c;
//         cin>>c;
//         dp[c]=1;
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j+=i){
//             dp[j]=min(dp[j],dp[i]+dp[j/i]);// i will try from priority queue because ther can be intitution 
//         }
//     }
//     for(int i=1;i<=n;i++){
//         if(dp[i]==inf)cout<<-1<<" "; else cout<<dp[i]<<" ";
//     }
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
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;

// void solve(){
//     int n,h,k;
//     cin>>n>>h>>k;
//     vector<int>hea(n);
//     int sum=0;
//     for(int i=0;i<n;i++){cin>>hea[i]; sum+=hea[i];}
//     int di=h/sum;
//     int cnt=(di)*(n+k);
//     h=h%sum;
//     if(h==0){cout<<cnt-k; return;}
//     vector<int>premins(n+1,1e9);
//     premins[1]=hea[0];
//     for(int i=2;i<=n;i++)premins[i]=min(premins[i-1],hea[i-1]);
//     vector<int>sufmaxs(n+2,0);
//     sufmaxs[n]=hea[n-1];
//     for(int i=n-1;i>=1;i--){sufmaxs[i]=max(sufmaxs[i+1],hea[i-1]);}
//     int t=0;
//     for(int i=1;i<=n;i++){
//         t+=hea[i-1];
//         int m=t;
//         if(i<n){
//             int p=sufmaxs[i+1]-premins[i];
//             m+=max(0LL,p);
//         }
//         if(m>=h){cout<<i+cnt; return ;}
//     }
//     cout<<cnt;
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
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// const int N = 1e6 + 10;
// const int inf = 1e15;
// const int mod = 998244353;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n);
//     vector<int> c(n);
//     for (auto &it : a)
//         cin >> it;
//     for (auto &it : b)
//         cin >> it;
//     for (auto &it : c)
//         cin >> it;
//     int cnt = 0;
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i] >= b[j]) continue;
//             for (int k = 0; k < n; k++)
//             {
//                 if (b[j] < c[k])
//                 {
//                     int steps = 0;
//                     int i1 = i, j1 = j, k1 = k;
//                     do
//                     {
//                         i1 = (i1 + 1) % n;
//                         j1 = (j1 + 1) % n;
//                         k1 = (k1 + 1) % n;
//                         steps++;
//                         if (!(a[i1] < b[j1] && b[j1] < c[k1])) break;
//                     } while (steps < n);
                    
//                     if (steps == n)
//                         cnt++;
//                 }
//             }
//         }
//     }
//     cout << cnt;
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
// #pragma GCC optimize("O3")
// using namespace std;
// #define int long long
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n), c(n);
//     for (auto &it : a) cin >> it;
//     for (auto &it : b) cin >> it;
//     for (auto &it : c) cin >> it;
//     int valid_x = 0;
//     for (int x = 0; x < n; x++) {
//         bool ok = true;
//         for (int p = 0; p < n; p++) {
//             if (a[p] >= b[(p + x) % n]) {
//                 ok = false;
//                 break;
//             }
//         }
//         if (ok) valid_x++;
//     }
//     int valid_y = 0;
//     for (int y = 0; y < n; y++) {
//         bool ok = true;
//         for (int q = 0; q < n; q++) {
//             if (b[q] >= c[(q + y) % n]) {
//                 ok = false;
//                 break;
//             }
//         }
//         if (ok) valid_y++;
//     }
//     int ans = valid_x * valid_y * n;
//     // because ai<bi for one combination and there exits validy no of  bi<ci so in totel both are multiplited anf
//     // n are no of ways of i in a1,a2 a3 a4 ,t his is waht i understood

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

// odd process 1070 c
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
//    int n;
//    cin>>n;
//    vi ve;
//    vi vo;
//    int sum=0;
//    for(int i=0;i<n;i++){
//     int x;
//     cin>>x;
//     sum+=x;
//     if(x&1)vo.push_back(x);
//     else ve.push_back(x);
//    }
//    sort(ve.begin(),ve.end());
//    sort(vo.begin(),vo.end());
//    if(ve.size()==n){
//     for(int i=1;i<=n;i++){cout<<0<<' ';}
//     return;
//    }
//    if(vo.size()==n){
//     for(int i=1;i<=n;i++){
//         if(i&1)cout<<vo.back()<<" ";
//         else cout<<0<<" ";
//     }
//     return ;
//    }
//    vi  ans(n+1);
//    ans[1]=vo.back();
//    for(int k=2;k<=n;k++){
//     if(ve.size()==0)ans[k]=ans[k-2];
//     else {ans[k]=ans[k-1]+ve.back(); ve.pop_back(); }
//    }

//    if(sum%2==0)ans[n]=0;
//    for(int i=1;i<=n;i++)cout<<ans[i]<<' ';
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





