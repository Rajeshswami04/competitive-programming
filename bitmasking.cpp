#include<bits/stdc++.h>
using namespace std;



// int n=3;
// int c=1<<n;
// int main(){
//     for(int mask=0;mask<c;mask++){
//         for(int i=0;i<n;i++){
//             if((mask&(1<<i))){
//                 cout<<i+1<<" ";
//             }
//         }
//         cout<<"null\n";
//     }
// }

// subset of given mask
// int mask=5;
// int main(){
// for (int submask = mask;; 
//      submask = (submask - 1) & mask)
// {
//     cout<<submask<<" ";
//     if(submask == 0)
//         break;
// }
// }


// //fliping bits
// uint32_t fnc(uint32_t n){
// cout<< (n^0xFFFFFFFF)<<" ";
//     return ~n;
// }
// int main(){
//     cout<<fnc(0);
// }


// int fnc(int n){
// cout<< (n^0xFFFFFFFF)<<" ";
// }
// int main(){
//     fnc(0);
// }


// reversing bits

// int fun(int n){
//     int t=0;
//     for(int i=0;i<32;i++){
//         t=t<<1;
//         t|=(n&1);
//         n>>=1;
//     }
//     return t;
// }

// int main(){
//     cout<<fun(43261596);
// }

// returning common prefix of two numbers 
// // in bit format

// int rangeBitwiseAnd(int left, int right) {
//      if(left==0||right==0)return 0;
//      if(left==right)return left;
//      int ans=0;
//      int a=right-left;
//      while(a>0){
//         ans++;
//         left>>=1;
//         right>>=1;
//         a=right-left;
//      }
//      return left<<ans;
//     }


// int main(){
//    int mask=7;
//    for (int i = 0; i < 31; i++) {
//     if (mask & (1 << i)) {
//         cout<<i+1<<" ";
//     }
// }
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void solve(){
//     int a, b;
//     cin >> a >> b;
//     if (a == b) {
//         cout << 0;
//         return;
//     }
//     int val1 = 0;
//     for (int i = 0; i < 30; i++) {
//         int bst = (b >> i) & 1;
//         int ast = (a >> i) & 1;
//         if (bst == 1 && ast == 0) {
//             val1 |= (1 << i);
//         }
//     }
//     if(val1>a){cout<<-1; return;}
//     int inter1 = (val1 | a);
//     int val2 = 0;
//     for (int i = 0; i < 30; i++) {
//         int bst = (b >> i) & 1;
//         int ast = (a >> i) & 1;
//         if (bst == 0 && ast == 1) {
//             val2 |= (1 << i);
//         }
//     }

//     int inter2 = (inter1 ^ val2);
//     if (inter2 == b) {
//         cout << 2 << "\n" << val1 <<" "<<val2;
//     } else {
//         cout << -1;
//     }
// }

// int main()
// {
//    cin.tie(0);cin.sync_with_stdio(0);
//    cout.tie(0);cout.sync_with_stdio(0);
//    int t = 1;
//    cin >> t;
//    while (t--)
//    {
//       solve();
//       cout<<"\n";
//    }
//    return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef long long ll;
// ll bit(ll a)
// {
//   if(a==0) return 0;
//   ll ans=0;
//   while(a>0)
//   {
//     a/=2;
//     ans++;
//   }
 
//   return ans;
// }
 
// void solve()
// {
//   ll n,k;
//   cin>>n>>k;
//   ll Y=(n^k);
//   if(n==1)
//   {
//     if(k==1)
//     {
//       cout<<"YES"<<endl;
//       cout<<"0"<<endl;
//       return;
//     }
//     cout<<"NO"<<endl;
//     return;
//   }
//   if(bit(Y)>bit(n-1))
//   {
//     cout<<"NO"<<endl;
//     return;
//   }
//   cout<<"YES"<<endl;
//   if(Y<=(n-1))
//   {
//    vector<ll> p;
//     for(ll i=1;i<=(n-1);i++)
//     {
//       if(i!=Y)
//       {
//         p.push_back(i);
//       }
//     }
//     p.pb(0);
//     if(Y!=0) p.pb(Y);
//     for(auto x:p)
//     {
//       cout<<x<<" ";
//     }
//     return;
//   }
//   ll p1,p2;
//   p1=1LL<<(bit(Y)-1);
//   p2=(Y^p1);
//   vector<ll> p;
//   for(ll i=1;i<=(n-1);i++)
//   {
//     if(i!=p1 && i!=p2)
//     {
//       p.pb(i);
//     }
//   }
//   p.pb(0);
//   if(p1>p2) swap(p1,p2);
//   p.pb(p1);
//   p.pb(p2);
//   for(auto x:p)
//   {    cout<<x<<" "; }
// }
// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//         cout << "\n";
//     }
// }