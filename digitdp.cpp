// in this range is given you have to do with some between this range and constrains are very large 
// mostly these are solved as prefix sum range like right limit answer- leftlimit answer
// prefix[r]-prefix[l]   => ans[right]-ans[left-1]
#include <bits/stdc++.h>
using namespace std;

// using ll = long long;

// ll dp[2][11][20][2];

// ll digitdp(const string &s, int tight, int prev, int idx, int lz) {
//     if (idx == (int)s.size()) return 1;

//     if (dp[tight][prev][idx][lz] != -1)
//         return dp[tight][prev][idx][lz];

//     ll res = 0;
//     int up = tight ? (s[idx] - '0') : 9;

//     for (int d = 0; d <= up; d++) {

//         if (!lz && d == prev) continue;

//         res += digitdp(
//             s,
//             tight && (d == up),
//             d,
//             idx + 1,
//             lz && (d == 0)
//         );
//     }

//     return dp[tight][prev][idx][lz] = res;
// }

// ll countUpto(ll x) {
//     if (x < 0) return 0;

//     string s = to_string(x);

//     memset(dp, -1, sizeof(dp));
//     return digitdp(s, 1, 10, 0, 1);
// }

// ll countRange(ll l, ll r) {
//     return countUpto(r) - countUpto(l - 1);
// }

// void solve() {
//     ll l, r;
//     cin >> l >> r;
//     cout << countRange(l, r) << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) solve();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// ll dp[2][11][20][2];

// ll digitdp(const string &s, int tight, int prev, int idx, int lz) {
//     if (idx == (int)s.size()) return 1;

//     if (dp[tight][prev][idx][lz] != -1)
//         return dp[tight][prev][idx][lz];

//     ll res = 0;
//     int up = tight ? s[idx] - '0' : 9;

//     for (int d = 0; d <= up; d++) {

//         if (!lz && d == prev) continue;

//         res += digitdp(
//             s,
//             tight && (d == up),
//             d,
//             idx + 1,
//             lz && (d == 0)
//         );
//     }

//     return dp[tight][prev][idx][lz] = res;
// }

// ll countUpto(ll x) {
//     if (x < 0) return 0;

//     string s = to_string(x);
//     memset(dp, -1, sizeof(dp));

//     return digitdp(s, 1, 10, 0, 1);
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll l, r;
//     cin >> l >> r;

//     cout << countUpto(r) - countUpto(l - 1);

//     return 0;
// }




// unique digits numbers
// [1,n] 
// class Solution {
// public:
//     int dp[13][2][1024][2];
//     int solve(string &s,int i,bool tight,int mask,bool lz){
//         if(i==s.size())return 1;
//         if(dp[i][tight][mask][lz]!=-1)return dp[i][tight][mask][lz];
//         int lb=0; int res=0;
//         int up=tight?(s[i]-'0'):9;
//         for(int d=lb;d<=up;d++){
//             bool nt=tight && (d==up);
//             if(!lz && d==0){
//                 res+=solve(s,i+1,nt,mask,0);
//             }else{
//             if(mask&(1<<d))continue;
//             res+=solve(s,i+1,nt,mask|(1<<d),1);
//         }
//         }
//         return dp[i][tight][mask][lz]=res;
//     }
    
//     int countSpecialNumbers(int n) {
//      memset(dp,-1,sizeof(dp));
//      string s=to_string(n);
//      return solve(s,0,1,0,0)-1;    
//     }
// };



// class Solution {
// public:
// using ll = long long;
// // 233
// ll dp[2][12][12][2];

// ll digitdp(const string &s, int tight, int cnt,int idx, int lz) {
//     if (idx == (int)s.size()) return cnt;

//     if (dp[tight][cnt][idx][lz] != -1)
//         return dp[tight][cnt][idx][lz];

//     ll res = 0;
//     int up = tight ? (s[idx] - '0') : 9;

//     for (int d = 0; d <= up; d++) {
//         if(d==1){res += digitdp(
//             s,
//             tight && (d == up),
//             cnt+1,
//             idx+1,0
//         ); continue;}
//         res += digitdp(
//             s,
//             tight && (d == up),
//             cnt,
//             idx + 1,
//             lz && (d == 0)
//         );
//     }

//     return dp[tight][cnt][idx][lz] = res;
// }
//     int countDigitOne(int n) {
//       memset(dp,-1,sizeof(dp));
//       string s=to_string(n);
//       return digitdp(s,1,0,0,0);  
//     }
// };

//1012
// class Solution {
// public:
//     int dp[13][2][1024][2][2];
//     int solve(string &s,int i,bool tight,int mask,bool lz,bool cg){
//         if(i==s.size())return cg>=1;
//         if(dp[i][tight][mask][lz][cg]!=-1)return dp[i][tight][mask][lz][cg];
//         int lb=0; int res=0;
//         int up=tight?(s[i]-'0'):9;
//         for(int d=lb;d<=up;d++){
//             bool nt=tight && (d==up);
//             if(!lz && d==0){
//                 res+=solve(s,i+1,nt,mask,0);
//             }else{
//             if(mask&(1<<d)){
//             res+=solve(s,i+1,nt,mask|(1<<d),1,1);}
//             else{
//                res+=solve(s,i+1,nt,mask|(1<<d),1,0) 
//             }
//     }
//         }
//         return dp[i][tight][mask][lz][cg]=res;
//     }
    
//     int countSpecialNumbers(int n) {
//      memset(dp,-1,sizeof(dp));
//      string s=to_string(n);
//      return solve(s,0,1,0,0,0);    
//     }
// };





// using ll = long long;

// ll dp[2][11][20][2];

// ll digitdp(const string &s, int tight, int prev, int idx, int lz) {
//     if (idx == (int)s.size()) return 1;

//     if (dp[tight][prev][idx][lz] != -1)
//         return dp[tight][prev][idx][lz];

//     ll res = 0;
//     int up = tight ? (s[idx] - '0') : 1;

//     for (int d = 0; d <= up; d++) {

//         if (!lz && d == prev) continue;

//         res += digitdp(
//             s,
//             tight && (d == up),
//             d,
//             idx + 1,
//             lz && (d == 0)
//         );
//     }

//     return dp[tight][prev][idx][lz] = res;
// }


// //600
// class Solution {
// public:
    
// using ll = long long;

// ll dp[2][4][50];

// ll digitdp(const string &s, int tight, int prev, int idx) {
//     if (idx == (int)s.size()) return 1;

//     if (dp[tight][prev][idx] != -1)
//         return dp[tight][prev][idx];

//     ll res = 0;
//     int up = tight ? (s[idx] - '0') : 1;

//     for (int d = 0; d <= up; d++) {

//         if (d == prev&&d==1) continue;

//         res += digitdp(
//             s,
//             tight && (d == up),
//             d,
//             idx + 1
//         );
//     }

//     return dp[tight][prev][idx] = res;
// }

//     int findIntegers(int n) {
//         string s="";
//         while(n){
//             s=to_string(n%2)+s;
//             n/=2;
//         }
//         memset(dp,-1,sizeof(dp));
//         return digitdp(s,1,2,0);
//     }
// };


// //902
// class Solution {
// public:
// using ll = long long;
// ll dp[2][11][2];
// ll digitdp(const string &s, int tight, int idx, bool lz,string &v) {
//     if (idx == (int)s.size()) return 1;
//     if (dp[tight][idx][lz] != -1)
//         return dp[tight][idx][lz];
//     ll res = 0;
//     int up = tight ? (s[idx] - '0') :9;
//     if(lz==1)res+=digitdp(s,tight&&(0==up),idx+1,1,v);
//     for (char c :v) {
//         int d=c-'0';
//         if(d>up)break;
//        res += digitdp(s,
//             tight && (d == up),
//             idx + 1,
//             0,v
//         );
//     }

//     return dp[tight][idx][lz] = res;
// }
//     int atMostNGivenDigitSet(vector<string>& digits, int n) {
//         string t="";
//         for(auto it:digits)t+=it;
//         string s=to_string(n);
//         // funct(digits);
//         memset(dp,-1,sizeof(dp));
//         return digitdp(s,1,0,1,t)-1;
//     }
// };