#include <bits/stdc++.h>
using namespace std;

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     unordered_map<int,int>mp;
//     for(int i:v)mp[i]++;
//     int most=-1;
//     int freq=0;
//     for(int i:v){
//         if(mp[i]>freq){most=i; freq=mp[i];}
//     }
//     int left=0;
//     int right=n-1;
//     int cnt=0;
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

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     vector<int>ans(n);
//     ans[0]=v[0];
//     long long sum=ans[0];
//     int t=ans[0];
//     for(int i=1;i<n;i++){
//         sum+=v[i];
//         t=sum/(i+1);
//         ans[i]=min(t,ans[i-1]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<"\n";
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//   int n,x,s;
//   cin>>n>>x>>s;
//   string ss;
//   cin>>ss;
//   int cnt=0;
//   int ambi=0;
//   int seat=0;
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

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//   int n;
//   cin>>n;
//   for(int i=1;i<=n*2;i+=2)cout<<i<<" ";
//   cout<<endl;
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//  void solve() {
//   int n;
//   cin>>n;
//   vector<int>v(n);
//   for(int i=0;i<n;i++)cin>>v[i];
//   int diff=0;
//   int j=-1;
//   for(int i=0;i<n-1;i++){
//     diff=max(diff,v[i]-v[i+1]);
//   }
//   for(int i=1;i<n;i++){
//     if(v[i]<v[i-1])v[i]+=diff;
//   }
//   for(int i=1;i<n;i++){
//     if(v[i]-v[i-1]<0){cout<<"NO\n"; return;}
//   }
//   cout<<"YES\n";
// }

// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<long long> v(n);
//     for (int i = 0; i < n; i++)
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

//     int t;
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

//     int t;
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
//     int n;
//     string s;
//     cin>>s;
//     n=s.size();
//     int cnt=0;
//     int pref=0;
//     for(char i:s){
//         if(i=='1'||i=='3')pref++;
//     }
//     int ans=pref;
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

//     int t;
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
//    int n;
//    cin>>n;
//    vector<long long>v(n);
//    for(int i=0;i<n;i++){cin>>v[i];}
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

//     int t;
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
//    int n,x1,x2,k;
//    cin>>n>>x1>>x2>>k;
//    if(n<=3){cout<<1<<"\n"; return;}
//    int d=min(abs(x1-x2),n-abs(x1-x2));
//    cout<<d+k<<"\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
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
//     int n;
//     cin >> a >> n;
//     vector<long long> d(n);
//     for(int i=0;i<n;i++)cin>>d[i];

//     string s = to_string(a);
//     int len = s.size();
//     long long ans = 2e18;
//     if (len > 1) {
//         long long num = 0;
//         for (int i = 0; i < len - 1; i++) {
//             num = num * 10 + d[n-1]; 
//         }
//         ans = min(ans, abs(a - num));
//     }
//     long long first_digit = (d[0] == 0) ? d[1] : d[0];
//     long long num = first_digit;
//     for (int i = 0; i < len; i++) {
//         num = num * 10 + d[0]; 
//     }
//     ans = min(ans, abs(a - num));
//     long long prefix = 0;
//     for (int i = 0; i < len; i++) {
//         int hh=0;
//         int target_digit = s[i] - '0';
        
//         // for(auto x:d){if(x==target_digit)hh=1;}
//         for (long long x : d) {
//             if(x==target_digit)hh=1;
//             if (x != target_digit) {
//                 long long candidate = prefix * 10 + x;
    
//                 for (int j = i + 1; j < len; j++) {
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

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void rotate(vector<int>& v, int k){
//     reverse(v.begin(), v.begin() + k);
//     reverse(v.begin() + k, v.end());
//     reverse(v.begin(), v.end());
// }

// void solve() {
//     int n, x, y;
//     cin >> n >> x >> y;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];
    
//     vector<int> bet;
//     vector<int> rem;
//     x--; y--;
    
//     for(int i = 0; i < n; i++){
//         if(i >x && i<=y) bet.push_back(v[i]);
//         else rem.push_back(v[i]);
//     }
    
//     if(bet.size() != 0){ 
//         int mx = n + 1;
//         for(int it : bet) { mx = min(it, mx); }
//         for(int i = 0; i < bet.size(); i++) {
//             if(bet[i] == mx) { rotate(bet, i); break; }
//         }
        
//         int f = 0;
//         for(int j = 0; j < rem.size(); j++){
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
//         // Fix 2: If bet is empty, print out the elements of rem
//         for(auto it : rem) cout << it << " ";
//     }
//     cout << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
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
//     int n;
//     cin>>n;
//     string a,b,r="",t="";
//     cin>>a>>b;
//     int c1=0;
//     int c2=0;
//     int f=0;
//     for(int i=0;i<n;i++){
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
//     for(int i=0;i<n;i++){
//         char ca=r[i];
//         char cb=t[i];
//         if(ca=='('){c1++;}else c1--;
//         if(cb=='('){c2++;}else c2--;
//         if(c1<0||c2<0)f=0;
//     }
//     if(f==1&&c1==0&&c2==0){cout<<"YES\n";}
//     else cout<<"NO\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
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
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<n<<" ";
//         for(int i=2;i<=n-2;i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//         cout<<1<<"\n";
//     }else{
//         cout<<n-1<<" ";
//         for(int i=2;i<=n-2;i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//         cout<<n<<" "<<1<<"\n";
//     }    
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
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
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     unordered_map<int,int>mp;
//     for(int i=0;i<n;i++){cin>>v[i]; mp[v[i]]++;}
//     int cnt1=0;
//     int cnt2=0;
//     for(auto it:mp){
//         if(it.second==1)cnt1++;
//         else cnt2++;
//     }
//     cout<<(cnt2+(cnt1+1)/2)<<"\n";
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
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
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
void solve() {
   long long a,b,c,m;
   cin>>a>>b>>c>>m;
   long long ab = (a / __gcd(a,b)) * b;
long long bc = (b / __gcd(b,c)) * c;
long long ac = (a / __gcd(a,c)) * c;
  long long abc = (ab / __gcd(ab,c)) * c;
   long long ansabc=m/abc;
   long long count_a   = m / a;
    long long count_b   = m / b;
    long long count_c   = m / c;
    long long count_ab  = m / ab;
    long long count_bc  = m / bc;
    long long count_ac  = m / ac;
    long long count_abc = m / abc;
    long long only_abc = count_abc;
    long long only_ab = count_ab - count_abc;
    long long only_bc = count_bc - count_abc;
    long long only_ac = count_ac - count_abc;
    long long only_a = count_a - only_ab - only_ac - only_abc;
    long long only_b = count_b - only_ab - only_bc - only_abc;
    long long only_c = count_c - only_ac - only_bc - only_abc;
    long long ansa = (only_a * 6) + (only_ab * 3) + (only_ac * 3) + (only_abc * 2);
    long long ansb = (only_b * 6) + (only_ab * 3) + (only_bc * 3) + (only_abc * 2);
    long long ansc = (only_c * 6) + (only_ac * 3) + (only_bc * 3) + (only_abc * 2);

    cout << ansa << " " << ansb << " " << ansc << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
