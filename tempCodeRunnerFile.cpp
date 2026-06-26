

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
//     unordered_set<int>st;
//     for(int i=0;i<n;i++){
//         int x; cin>>x;
//         st.insert(x);
//     }
//     if(st.find(1)==st.end()){cout<<-1<<' ';}
//     else cout<<1<<" ";
//     for(int i=2;i<=n;i++){
//         int cnt=0;
//         int t=i;
//         if(st.find(i)!=st.end()){cout<<1<<" "; continue;}
//         for (long long j = sqrt(t); j>= 2; j--) {
//             if(st.find(j)==st.end())continue;
//             if (t % j == 0) {
//             while(t%j==0){t=t/j; cnt++;}
//         }
//     }
//         if(t>1){
//             if(st.find(t)==st.end()){cout<<-1<<" ";}
//             else cout<<cnt+1<<" ";
//         }else{
//             cout<<cnt<<" ";
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