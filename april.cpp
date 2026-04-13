
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// vector<int> getp() {
//     int maxi = 200000;
//     vector<bool> v(maxi + 1, 1);
//     v[0] = v[1] = 0;
//     for (int i = 2; i * i <= maxi; i++) {
//         if (v[i]) {
//             for (int j = i * i; j <= maxi; j += i) {
//                 v[j] = 0;
//             }
//         }
//     }
//     vector<int> p;
//     for (int i = 2; i <= maxi && (int)p.size() < 10001; i++) {
//         if (v[i]) p.push_back(i);
//     }
//     return p;
// }
// void solve() {
//     int n;
//     cin>>n;
//     vector<int>ans;
//     vector<int>p=getp();
//     ans.push_back(p[0]);
//     for (int i=1;i<n;i++) {
//     ans.push_back(p[i-1]*p[i]);}
//     for(auto it:ans){cout<<it<<" ";}
//     cout<<"\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         solve();
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;

//  void solve() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> a(n + 1), b(n + 1);
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     for (int i = 1; i <= n; i++) cin >> b[i];

//     int left_end = n - k;
//     int right_start = k + 1;

//     for (int i = 1; i <= left_end; i++) {
//         if (b[i] != -1 && b[i] != a[i]) {
//             cout << "NO\n";
//             return;
//         }
//     }

//     for (int i = right_start; i <= n; i++) {
//         if (b[i] != -1 && b[i] != a[i]) {
//             cout << "NO\n";
//             return;
//         }
//     }

//     int mid_l = left_end + 1;
//     int mid_r = right_start - 1;

//     if (mid_l <= mid_r) {
//         vector<int> allowed(n + 1, 0);
//         vector<int> used(n + 1, 0);

//         for (int i = mid_l; i <= mid_r; i++) {
//             allowed[a[i]] = 1;
//         }

//         for (int i = mid_l; i <= mid_r; i++) {
//             if (b[i] == -1) continue;
//             if (!allowed[b[i]] || used[b[i]]) {
//                 cout << "NO\n";
//                 return;
//             }
//             used[b[i]] = 1;
//         }
//     }

//     cout << "YES\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;

 void solve() {
   int n;
   cin>>n;
   vector<int>v1(n+1);
   vector<int>v2(n+1);
   for(int i=1;i<=n;i++)cin>>v1[i];
   for(int i=1;i<=n;i++)cin>>v2[i];
   int cnt=0;
   for(int i=1;i<=n;i++){
    int gcd1=v1[i];
    if(i>1)gcd1=__gcd(gcd1,v1[i-1]);
    int gcd2=v1[i];
    if(i<n)gcd2=__gcd(gcd2,v1[i+1]);
    if(i==1){if(v1[i]>gcd2){cnt++; continue;}}
    if(i==n){if(v1[i]>gcd1){cnt++; continue;}}
    int gc=__gcd(gcd1,gcd2);
    int lcm= (1LL*gcd1*gcd2)/gc;
    if(lcm<v1[i])cnt++;
   }
   cout<<cnt<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

//  vector<long long> getp(){
//         int maxi=200000;
//         vector<bool>v(maxi+1,1);
//         v[0]=v[1]=0;
//         for(long long i=2;i*i<=maxi;i++){
//             if(v[i]){
//                 for(long long j=i*i;j<=maxi;j+=i){
//                     v[j]=0;
//                 }
//             }
//         }
//         vector<long long>p;
//         for(long long i=2;i<=maxi&&(int)p.size()<10001;i++){
//             if(v[i])p.push_back(i);
//         }
//         return p;
//     }
//     bool primee(int x){
//         if(x==1)return 0;
//         for(int i=2;i*i<=x;i++){if(x%i==0)return 0;}
//         return 1;
//     }
//     int minOperations(vector<int>& nums) {
//         int cnt=0;
//         vector<long long>v=getp();
//         for(int idx = 0; idx < nums.size(); idx++) {
//         int i = nums[idx];
//         if(idx % 2 == 0) {  
//             if(!primee(i)) {
//                 auto it = lower_bound(v.begin(), v.end(), i);
//                 cnt += (*it - i);
//             }
//         } 
//         else {  
//             if(primee(i)) {
//                 int x = i;
//                 while(primee(x)) x++;   
//                 cnt += (x - i);
//             }
//         }
//     }
//     return cnt;
// //     }
//   const int mod=1e9+7;
//     long long power(long long a,long long b){
//         long long res=1;
//         while(b){
//             if(b&1)res=(res*a)%mod;
//             a=(a*a)%mod;
//             b>>=1;
//         }
//         return res;
//     }
//     int maxValue(vector<int> nums1, vector<int> nums0) {
//       int res=0;  
//       vector<pair<int,int>>v;
//         for(int i=0;i<nums1.size();i++){
//             v.push_back({nums1[i],nums0[i]});
//         }
//         sort(v.begin(),v.end(),[&](pair<int,int>a,pair<int,int>b){
//             if(a.first!=b.first)return a.first>b.first;
//             return a.second<b.second;
//         });
//         for(auto it:v){
//             int one=it.first; int twos=it.second;
//             res=(res*power(2,one)+(power(2,one)-1+mod)%mod)%mod;
//             res=(res*power(2,twos))%mod;
//         }
//         return res;
//     }
// const int mod = 1e9+7;

// long long power(long long a, long long b) {
//     long long res = 1;
//     while(b) {
//         if(b & 1) res = (res * a) % mod;
//         a = (a * a) % mod;
//         b >>= 1;
//     }
//     return res;
// }

// int maxValue(vector<int> nums1, vector<int> nums0) {
//     vector<pair<int,int>> v;
//     for(int i = 0; i < nums1.size(); i++) {
//         v.push_back({nums1[i], nums0[i]});
//     }

//     sort(v.begin(), v.end(), [&](auto &a, auto &b){
//         return (long long)a.first * b.second > (long long)b.first * a.second;
//     });

//     long long res = 0;

//     for(auto it : v) {
//         int one=it.first; int twos=it.second;
//         long long p = power(2, one);
//         res = (res * p + (p - 1 + mod) % mod) % mod;

//         res = (res * power(2, twos)) % mod;
//     }

//     return res;
// }
// k measn 1 k-1 means 0
//number of 0 = numeber of 1
//  #include <bits/stdc++.h>
// using namespace std;

// bool check(string &s, int L) {
//     if (L % 2) return false;

//     int n = s.size();
//     int total1 = count(s.begin(), s.end(), '1');
//     int total0 = n - total1;

//     int ones = 0;

//     // first window
//     for (int i = 0; i < L; i++) {
//         if (s[i] == '1') ones++;
//     }

//     for (int i = 0; i <= n - L; i++) {
//         int zeros = L - ones;
//         int target = L / 2;

//         if (ones == target) return true;

//         if (ones > target) {
//             if (ones - target == 1) {
//                 int outside0 = total0 - zeros;
//                 if (outside0 > 0) return true;
//             }
//         } else {
//             if (target - ones == 1) {
//                 int outside1 = total1 - ones;
//                 if (outside1 > 0) return true;
//             }
//         }

//         // slide window
//         if (i + L < n) {
//             if (s[i] == '1') ones--;
//             if (s[i + L] == '1') ones++;
//         }
//     }

//     return false;
// }

// int maxBalancedSubstring(string s) {
//     int n = s.size();
//     int low = 0, high = n, ans = 0;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (mid % 2) mid--;

//         if (mid < 0) {
//             low = (low + high) / 2 + 1;
//             continue;
//         }

//         if (check(s, mid)) {
//             ans = mid;
//             low = mid + 2;
//         } else {
//             high = mid - 2;
//         }
//     }

//     return ans;
// }

// int main() {
//     string s;
//     cin >> s;
//     cout << maxBalancedSubstring(s) << endl;
// }
// // 10110011000001101011111011011110010011100101101111100111000111010001011101101100


