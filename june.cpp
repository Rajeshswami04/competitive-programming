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

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<long long,long long>count;
    unordered_map<long long,long long>reach;
    for(long long i:v){
        long long j=i;
        unordered_set<long long>st;
        long long s=0;
        while(st.count(j)==0){
            st.insert(j);
            reach[j]++;
            count[j]+=s;
            s++;
            if(j&1)j++;
            else j>>=1;
        }
    }
    long long cnt=1e18;
    for(auto it:reach){
        if(it.second==n){
            cnt=min(cnt,count[it.first]);
        }
    }
    cout << cnt << "\n";
}

signed
main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
