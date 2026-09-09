// #pragma GCC optimize("O3,unroll-loops")

// #include<bits/stdc++.h>
// using namespace std;
// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define nline "\n"
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define PI 3.141592653589793238462
// #define set_bits __builtin_popcountll
// #define sz(x) ((long long)(x).size())
// #define all(x) (x).begin(), (x).end()
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;


// ll __gcd(ll a, ll b) {if (b > a) {return __gcd(b, a);} if (b == 0) {return a;} return __gcd(b, a % b);}
// ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
// vector<ll> sieve(long long n) {long long*arr = new long long[n + 1](); vector<ll> vect; for (long long i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (long long j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
// ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
// ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}



// void solve() {
//     long long n;
//     cin>>n;
//     long long p=n*(n-1)/2;
//     vector<long long>v(p);
//     for(auto &it:v)cin>>it;
//     sort(begin(p),end(p));
// }
// signed  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<long long>>dir={{-1,-1},{1,1},{-1,1},{1,-1}};
//     long long solve(long long x,long long y,long long prev,long long tx,long long ty,vector<vector<long long>>&vis){
//         if(x==tx&&y==ty)return 0;
//         if(x>=8||y>=8||x<0||y<0)return 1e9;
//         if(vis[x][y])return 1e9;
//         long long cnt=1e9;
//         vis[x][y]=1;
//         for(long long i=0;i<4;i++){
//             if(prev!=i){
//                 cnt=min(cnt,1+solve(x+dir[i][0],y+dir[i][1],i,tx,ty,vis));
//             }else{
//                cnt=min(cnt,solve(x+dir[i][0],y+dir[i][1],i,tx,ty,vis)); 
//             }
//         }
//         return cnt;
//     }

// // long long main(){
//     // vector<vector<long long>>vis(8,vector<long long>(8,0));
// // cout<<solve(0,0,-1,7,7,vis);
// // }
// #include <vector>
// #include <numeric>
// #include <algorithm>
// #include <iostream>

// using namespace std;

//     long long countValidsplits( vector< int>& arr) {
//         long long m = arr.size();
//         if (m < 2) return 0;
//         vector<long long> pref(m), suff(m);
//         pref[0] = arr[0];
//         for (long long i = 1; i < m; ++i) {
//             pref[i] = __gcd(pref[i - 1], arr[i]);
//         }
//         suff[m - 1] = arr[m - 1];
//         for (long long i = m - 2; i >= 0; --i) {
//             suff[i] = __gcd(suff[i + 1], arr[i]);
//         }
//         long long splits = 0;
//         for (long long i = 0; i < m - 1; ++i) {
//             if (pref[i] == suff[i + 1]) {
//                 splits++;
//             }
//         }
//         return splits;
//     }

//     long long maxScore(vector<long long>& nums) {
//         long long n = nums.size();
//         if (n <= 2) return 0;
//         long long maxscore = countValidsplits(nums);
//         vector<long long> prefgcd(n), suffgcd(n);
//         prefgcd[0] = nums[0];
//         for (long long i = 1; i < n; ++i) prefgcd[i] = __gcd(prefgcd[i - 1], nums[i]);
//         suffgcd[n - 1] = nums[n - 1];
//         for (long long i = n - 2; i >= 0; --i) suffgcd[i] = __gcd(suffgcd[i + 1], nums[i]);
// for (long long k = 0; k < n; ++k) {
//             vector<long long> temp;
//             temp.reserve(n - 1);
//             for (long long j = 0; j < n; ++j) {
//                 if (j != k) temp.push_back(nums[j]);
//             }
//             maxscore = max(maxscore, countValidsplits(temp));
//         }

//         return maxscore;
//     }

// long long main(){
//     vector<long long>v={10,30,15,10};
//     cout<<maxScore(v);
// }





