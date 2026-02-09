// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     vector<int>bl;
//     while(t--){
//         long long a;
//         long long b;
//         cin>>a>>b;
//         vector<long long>arr(a);
//         for(int i=0;i<a;i++)cin>>arr[i];
//         vector<long long>cop(arr.begin(),arr.end());
//         sort(cop.begin(),cop.end());
//         if(cop==arr||b>1){bl.push_back(1);}
//         else{bl.push_back(0);}
//     }
//     for(int i : bl){
//         if(i==1){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     vector<int>ans;
//     while(t--){
//         int n2,x;
//         cin>>n2>>x;
//         vector<int>v;
//         for(int i=0;i<n2;i++){
//             int b;
//             cin>>b; v.push_back(b);
//         }
//         for(int i=n2-1;i>=0;i--){
//           int diff=x-v[i];
//           v.push_back(x+diff);
//         }
//         int a=INT_MIN;
//         for(int i=0;i<2*n2-1;i++){
//             a=max(a,v[i+1]-v[i]);
//         }
//         a=max(a,v[0]);
//         ans.push_back(a);
//     }
//     for(auto it:ans){cout<<it<<endl;}
// }
// 4
// 7
// ##....#
// 7
// ..#.#..
// 4
// ####
// 10
// #...#..#.#

// int main(){
//     int t;
//     cin>>t;
//     vector<int>ans;
//     while(t--){
//         int x;
//         cin>>x;
//         cin.ignore();
//         string s;
//         int tot=0;

//         getline(cin,s);
//         int i=0;
//         int flag=0;
//         while(i<x){
//             if(s[i]!='.'){i++; continue;}
//             int cnt=0;
//             while(s[i]=='.' && i<x){cnt++; i++;}
//             if(cnt<=2){tot+=cnt; cnt=0;}
//             else if(cnt>2){ ans.push_back(2);  i=x; flag=1; break;}

//         }
//         if(!flag)ans.push_back(tot);
//     }
//     for(int i:ans){cout<<i<<endl;}
// }

#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t; vector<string>ans;
//     while(t--){
//         int n2;
//         cin>>n2;
//         map<int,int>mpp;
//         for(int i=0;i<n2;i++){
//             int y; cin>>y;
//             mpp[y]++;
//         }
//         if(mpp.size()==3){
//             ans.push_back("NO");
//             continue;
//         }else if(mpp.size()==1){
//             ans.push_back("YES");
//         }else{
//            if(abs(mpp.begin()->second-mpp.rbegin()->second)<=1)ans.push_back("YES");
//            else{ans.push_back("NO");}
//         }
//     }
//     for(auto it:ans){
//         cout<<it<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int solve() {
//     int n2, n1;
//     cin >> n2 >> n1;
//     string x, s;
//     cin >> x >> s;
//     for (int i = 0; i < 6; i++) {
//         if (x.find(s) != string::npos) {
//             return  i;
//         }
//         x += x;
//     }
//     return -1;
// }

// int main() {
//     int t;
//     cin >> t;
//     vector<int>ans;
//     while (t--) {
//         ans.push_back(solve());
//     }
//     for(auto it :ans)cout<<it<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// string solve() {
//     int n2, n1;
//     cin >> n2 >> n1;
//      int cnt=0;
//     for (int i = 0; i < n2; i++) {
//         int a; cin>>a;
//         if(a==n1)cnt++;
//     }
//     return cnt>0?"YES":"NO";
// }

// int main() {
//     int t;
//     cin >> t;
//     vector<string>ans;
//     while (t--) {
//         ans.push_back(solve());
//     }
//     for(auto it :ans)cout<<it<<endl;
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int func(){
//     char x;
//     int sum=0;
//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){
//          cin>>x;
//          if(x=='X'){
//         if(i==0||j==0||i==9||j==9)sum+=1;
//         else if(i==1||j==1||i==8||j==8)sum+=2;
//          else if(i==2||j==2||i==7||j==7)sum+=3;
//         else if(i==3||j==3||i==6||j==6)sum+=4;
//         else if(i==4||j==4||i==5||j==5)sum+=5;
//          }
//         }
//     }
//     return sum;
// }
// int main(){
//     int n2;
//     cin>>n2;
//     vector<int>ans;
//     for(int i=0;i<n2;i++){
//         ans.push_back(func());
//     }
//     for(int i=0;i<n2;i++){
//         cout<<ans[i]<<endl;
//     }

// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n2;
//     cin>>n2;
//     // vector<int>v;
//     int a1=INT_MAX;
//     int b1=INT_MIN;
//     bool f=0;
//     for(int i=0;i<n2;i++){
//         int a; cin>>a;
//         if(a==0){f=1;}
//         if(a>0){a1=min(a1,a);}
//         if(a<0){b1=max(b1,a);}
//     }
//     if(f){cout<<0; return 0;}
//     if(abs(b1)<a1){cout<<-b1<<endl; }
//     else{cout<<a1<<endl;}
//     return 0;
// }

// vector<int> func(){
//     int x;
//     cin>>x;
//     vector<int>v;
//     for(int i=0;i<x;i++){
//         int a;
//         cin>>a;
//         if(i==0){v.push_back(a); continue;}
//         if(a<v.back()){v.push_back(a); v.push_back(a);}
//         else{v.push_back(a);}
//     }
//     return v;
// }
// int main(){
//     vector<vector<int>>ans;
//     int v;
//     cin>>v;
//     for(int i=0;i<v;i++)ans.push_back(func());
//     for(auto it:ans){
//         cout<<it.size()<<endl;
//         for(auto v: it){
//             cout<<v<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t; int a;
//     vector<string>ans;
//     while(t--){
//         int x;
//         cin>>x;
//         int noofodd=0;
//         int noofeven=0;
//         // int noofodd=;
//         // int noofodd;
//         for(int i=0;i<x;i++){cin>>a; if(a&1)noofodd++; else noofeven++;}
//         if(noofeven&&noofodd){
//             if(noofodd&1){ans.push_back("NO"); continue;}
//             else{ans.push_back("Yes"); continue;}
//         }else if(noofodd){if(noofodd&1){ans.push_back("No");continue;}else{ans.push_back("Yes");}    }
//         else ans.push_back("Yes");}
// for(auto it : ans){
//     cout<<it<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     vector<vector<int>>ans;
//     while(t--){
//         int n2,k,x;
//         cin>>n2>>k>>x;
//         if(x!=1){
//             ans.push_back(vector<int>(n2,1));
//         }else{
//             if(k==1||(k==2 && n2&1)){ans.push_back({0});}
//             else{
//                 if(n2%2==0){ vector<int>v(n2/2,2); ans.push_back(v);}
//                 else{vector<int>v((n2-3)/2+1,2);
//                 v.push_back(3);
//                 ans.push_back(v);
//             }}
//         }
//     }
//     for(auto it:ans){
//         if(it.size()==1&&it[0]==0){cout<<"No"<<endl;}
//         else{
//             cout<<"yes"<<endl<<it.size()<<endl;
//             for(auto itt:it)cout<<itt<<" ";

//         cout<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t; int a;
//     vector<int>ans;
//     while(t--){
//         int x;
//         cin>>x;
//         int mc=0;
//         int sum=0;
//         for(int i=0;i<x;i++){
//             cin>>a; sum+=a;
//             if(a<0)mc++;
//         }
//         int cn=0;
//         while((mc&1) || sum < 0){
//             sum+=2;
//             mc--;
//             cn++;
//         }
//         ans.push_back(cn);
//     }
//     for(auto it:ans){
//        cout<<it<<endl;

//     }

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     vector<string>ans;
//     while(t--){
//         int d;
//         cin>>d;
//         string s="";
//         vector<string>v1(d);
//     for(int i=0;i<d;i++){
//             cin>>v1[i];
//         }
//         for(int i=0;i<d;i++){
//             if(i==0){s+=v1[i];}else{
//                 if(s<=v1[i]){s+=v1[i];}else{
//                     s=v1[i]+s;
//                 }
//             }
//         }
//         ans.push_back(s);
//     }
//     for(auto it:ans){
//        cout<<it<<endl;

//     }

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     vector<string>ans;
//     cin>>t;
//     while(t--){
//         int x;
//         cin>>x;
//         string s;
//         string v="";
//         for(int i=0;i<x;i++){
//             cin>>s;
//             v=min(v+s,s+v);
//         }
//         ans.push_back(v);
//     }
//     for(auto it:ans){
//         cout<<it<<endl;
//     }
// }

// #include<bits/stdc++.h>
// #include<numeric>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     vector<string>ans;
//     vector<int>v;
//     while(t--){
//         v.clear();
//         int n2; cin>>n2;
//         int f; int oneflag=0;
//         for(int i=0;i<n2;i++){cin>>f; v.push_back(f); if(f==1)oneflag=1;}
//         sort(v.begin(),v.end());
//         if(oneflag){ans.push_back("YES"); continue; }
//         else{int flag=0;
//             for(int i=0;i<n2;i++){
//                 for(int j=i+1;j<n2;j++){
//                     if(__gcd(v[i],v[j])<=2)flag=1;
//                 }
//             }
//         if(flag){ans.push_back("YES");}
//         else ans.push_back("NO");
//         }
//     }
//     for(auto it:ans)cout<<it<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     vector<int>as;
//     while (t--)
//     {
//         long long n2;
//         cin >> n2;
//         vector<int> a(n2);
//         for (long long i = 0; i < n2; i++)
//             cin >> a[i];
//         long long t2 = 0;
//         long long c2 = 0;
//         for (long long i = 0; i < n2; i++)
//         {
//             if (a[i] == 2)
//                 t2++;
//         }
//         long long ans = -1;
//         for (long long i = 0; i < n2; i++)
//         {
//             if (a[i] == 2)
//                 c2++;

//             if ((c2) == (t2 - c2))
//             {
//                 ans = i + 1;
//                 break;
//             }
//         }
//        as.push_back(ans);
//     }
//     for(auto it:as)cout<<it<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     vector<long long>ans;
//     while(t--){
//      long long n2; cin>>n2;
//      vector<long long>v(n2); long long mini=INT_MAX;
//      for(int i=0;i<n2;i++){cin>>v[i]; mini=min(mini,v[i]);}
//       long long diff=0;
//       for(auto it : v){
//         diff=max(diff,it%mini);
//       }
//       if(diff<=mini){mini=mini;}
//       else mini=diff;
//       ans.push_back(mini);
//     }
//     for(auto it : ans)cout<<it<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     long long t;
//     cin >> t;
//     vector<int>ans;
//     while(t--){
//         long long n2;
//         cin >> n2;
//         vector<long long> v(n2);
//         for(int i = 0; i < n2; i++){
//             cin >> v[i];
//         }
//         long long total = 0;
//         for(int i = 0; i < n2 - 1; i++){
//             total += llabs(v[i+1] - v[i]);
//         }
//         long long best = LLONG_MAX;
//         for(int k = 0; k < n2; k++){
//             long long newSum = total;
//             if(k == 0){
//                 newSum -= llabs(v[1] - v[0]);
//             }
//             else if(k == n2-1){
//                 newSum -= llabs(v[n2-1] - v[n2-2]);
//             }
//             else {
//                 newSum -= llabs(v[k] - v[k-1]);
//                 newSum -= llabs(v[k+1] - v[k]);
//                 newSum += llabs(v[k+1] - v[k-1]);
//             }
//             best = min(best, newSum);
//         }
//         ans.push_back(best);
//     }
//     for(auto it:ans){cout<<it<<endl;}
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> solve() {
//     int n2;
//     if (!(cin >> n2)) return {};

//     vector<int> a(n2);
//     for (int i = 0; i < n2; i++) {
//         cin >> a[i];
//     }

//     sort(a.rbegin(), a.rend());

//     if (a[0] == a[n2 - 1]) {
//         return {};
//     }

//     swap(a[0], a[n2 - 1]);
//     return a;
// }
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> solve() {
//     int n2;
//     if (!(cin >> n2)) return {};

//     vector<int> a(n2);
//     for (int i = 0; i < n2; i++) {
//         cin >> a[i];
//     }

//     sort(a.begin(), a.end());

//     if (a[0] == a[n2 - 1]) {
//         return {};
//     }

//     a.insert(a.begin(),a[n2-1]);
//     a.pop_back();
//     return a;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     if (!(cin >> t)) return 0;

//     while (t--) {
//         vector<int> result = solve();

//         if (result.empty()) {
//             cout << "NO" << "\n2";
//         } else {
//             cout << "YES" << "\n2";
//             for (int i = 0; i < result.size(); i++) {
//                 cout << result[i] << (i == result.size() - 1 ? "" : " ");
//             }
//             cout << "\n2";
//         }
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int func(int i,int w,vector<vector<int>>&dp,vector<int>&vals,vector<int>&wt){
//   if(i==0){
//     if(wt[i]<=w)return vals[i];
//     return 0;
//   }
//   if(dp[i][w]!=-1)return dp[i][w];
//   int np=func(i-1,w,dp,vals,wt);
//   int p=INT_MIN;
//   if(wt[i]<=w)p=func(i-1,w-wt[i],dp,vals,wt)+vals[i];
//   return dp[i][w]=max(np,p);
// }

// int main(){
//   int n2 ,w;
//   cin>>n2>>w;
//   vector<int>wt(n2),vals(n2);
//   for(int i=0;i<n2;i++){
//     cin>>wt[i]>>vals[i];
//   }
//   vector<vector<int>>dp(n2,vector<int>(w+1,-1));
//   cout<<func(n2-1,w,dp,vals,wt);
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   vector<int>ans;
//   while(t--){
//     int n2;
//     cin>>n2;
//     vector<int>v(n2);
//     for(int i=0;i<n2;i++)cin>>v[i];
//     int d=0;
//     for(int i=0;i<n2-1;i++){if(v[i]%2==v[i+1]%2)d++; }
//     ans.push_back(d);
//   }
//   for(auto it :ans)cout<<it<<endl;
// }

// int main(){
//   int t;
//   cin>>t;
//   vector<int>a;
//   while(t--){
//     int n2;
//     cin>>n2; int v=1;
//     int ans=0; int c=1;
//     while(v<=n2){
//       if(v<10)c=1;
//       else if(v<100)c=10;
//       else if(v<1000)c=100;
//       else if(v<10000)c=1000;
//       else if(v<100000)c=10000;
//       else if(v<1000000)c=100000;
//       v+=c;
//       ans++;
//     }
//    a.push_back(ans);
//   }
//   for(auto i : a)cout<<i<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   vector<vector<int>>dir={{1,-1},{1,1},{-1,1},{-1,-1}};
//   cin>>t;
//   vector<int>ans;
//   while(t--){
//     int a,b; cin>>a>>b;
//     int xk,yk,xq,yq;
//     cin>>xk>>yk>>xq>>yq;
//     set<pair<int,int>>sq,sk;
//     for(auto it : dir){
//       int c1 = it[0];
//       int c2 = it[1];
//       sq.insert({xq+a*c1,yq+b*c2});
//       sq.insert({xq+b*c1,yq+a*c2});
//       sk.insert({xk+a*c1,yk+b*c2});
//       sk.insert({xk+b*c1,yk+a*c2});
//     }
//     int an=0;
//     for(auto it : sq){
//       if(sk.find(it)!=sk.end())an++;
//     }
//     ans.push_back(an);
//   }
//   for(auto i : ans)cout<<i<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   vector<string>ans;
//   while(t--){
//     int n2 ,k;
//     cin>>n2>>k;
//     string s;
//     cin>>s;
//     unordered_map<char,int>mpp;
//     for(char i : s)mpp[i]++;
//     int e=n2-k;
//     if(e<=1){ans.push_back("YES"); continue;}
//     int odd=0;
//     for(auto it: mpp){if(it.second&1)odd++;}
//     if(odd-k<=1){ans.push_back("YES"); continue;}
//     ans.push_back("NO");
//   }
//   for(auto i : ans)cout<<i<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     vector<string>ans;
//     while(t--){
//         long long n2,k,x;
//         cin>>n2>>k>>x;
//         long long ksum=(k*(k+1))/2;
//         long long msum=(n2*(n2+1))/2-(n2-k)*(n2-k+1)/2;

//         if(x<=msum && x>=ksum){ans.push_back("yes");}
//         else ans.push_back("no");
//     }
//     for(auto it : ans){
//         cout<<it<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     vector<int>ans;
//     while(t--){
//         long long a,b,n2;
//         cin>>a>>b>>n2;
//         vector<long long>v(n2);
//         for(int i=0;i<n2;i++)cin>>v[i];
//         long long sum=b;
//         for(int i=0;i<n2;i++){sum+=min(v[i],a-1);}
//         ans.push_back(sum);
//     }
//     for(auto it : ans)cout<<it<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     vector<vector<pair<int,int>>>ans;
//     while(t--){
//       int n2;
//       cin>>n2;
//       vector<int>v(n2);
//       for(int i=0;i<n2;i++)cin>>v[i];
//       if(n2&1){
//         vector<pair<int,int>>v1={{1,n2-1},{1,n2-1},{n2-1,n2},{n2-1,n2}};
//        ans.push_back(v1);
//     }else{
//         vector<pair<int,int>>v1={{1,n2},{1,n2}};
//         ans.push_back(v1);
//       }
//     }
//     for(auto it : ans){
//         cout<<it.size()<<endl;
//         for(auto v:it){
//             cout<<v.first<<" "<<v.second<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n2;
//   cin>>n2;
//   vector<string>ans;
//   while(n2--){
//     string s;
//     cin>>s;
//     int t=s.size();  int cnty=0;
//     int i=0;
//     while(i<t){if(s[i]=='Y')cnty++; i++;}
//     if(cnty>1)ans.push_back("NO");
//     else ans.push_back("YES");
//   }
//   for(auto it:ans)cout<<it<<endl;
// }

#include <bits/stdc++.h>
using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   vector<int>ans;
//   while(t--){
//     int n2;
//     cin>>n2;
//     string s;
//     cin>>s;
//     string s1=s;
//     int n2=n2/2;
//     sort(s1.begin(),s1.begin()+n2);
//     sort(s1.rbegin(),s1.rbegin()+n2);
//     int cnt=0;
//     for(int i=0;i<n2;i++){if(s1[i]!=s[i])cnt++;}
//     ans.push_back(cnt/2);
//   }
//   for(auto it:ans)cout<<it<<endl;
// }
//  int minAllOneMultiple(int k) {
//        long long a=1;
//        int i=1;
//         while(i<=k){
//            if(a%k==0)return i;
//             i++;
//             a=a*10+1;
//        }
//         return -1;
//     }
// int main()
// {
//   cout << minAllOneMultiple(3);
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>ans;
//     int t;
//     cin>>t;
//     while(t--){
//     long long n2; cin>>n2;
//     int cnt=1;
//     while(n2%cnt==0){
//         cnt++;
//     }
//     ans.push_back(cnt-1);
//     }
//     for(auto it:ans)cout<<it<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>ans;
//     int t;
//     cin>>t;
//     while(t--){
//     long long n2; cin>>n2;
//     long long k; cin>>k;
//     vector<long long>v(n2);
//     for(int i=0;i<n2;i++)cin>>v[i];
//     sort(v.begin(),v.end());
//     int a=1; int b=1;
//     int i=1;
//     while(i<n2){
//         if(abs(v[i]-v[i-1])>k){ b=1;}
//         else { b++; }
//         a=max(a,b);
//         i++;
//     }
//       ans.push_back(n2-a);
//     }
//     for(auto it:ans)cout<<it<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>ans;
//     int t;
//     cin>>t;
//     while(t--){
//       string s;
//       long long n2;
//       cin>>n2;
//       cin>>s;
//       if((s.find("2026")!=string::npos )||(s.find("2025")==string::npos )){
//         ans.push_back(0);
//       }else{
//         ans.push_back(1);
//       }
//     }
//     for(auto it:ans)cout<<it<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>ans;
//     int t;
//     cin>>t;
//     while(t--){
//       int cnt=0;
//       long long a;
//       long long b;
//       cin>>a;
//       cin>>b;
//       int cnt1=0; int cnt2=0;
//       long long od=1 , e=2;
//       int ma=max(a,b); int mi=min(a,b);
//       if(ma<e || mi<od){ans.push_back(1); continue;}
//       while(ma>=e && mi>=od){
//         cnt2++; cnt1++;
//         ma-=e; mi-=od;
//         e*=4;
//         od*=4;
//       }

//       if(mi>=od)cnt1++;
//       cnt=max(cnt,cnt1+cnt2);
//        cnt1=0;  cnt2=0;
//         od=1 ; e=2;
//        mi=max(a,b);  ma=min(a,b);
//       while(ma>=e && mi>=od){
//         cnt2++; cnt1++;
//         ma-=e; mi-=od;
//         e*=4;
//         od*=4;
//       }
//       if(mi>=od)cnt2++;
//       // else if(ma>=e)cnt1++;
//       cnt=max(cnt,cnt1+cnt2);

//       ans.push_back(cnt);
//     }
//     for(auto it:ans)cout<<it<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   long long t;
//   cin >> t;
//   vector<long long> ans;
//   while (t--)
//   {
//     long long n2;
//     cin >> n2;
//     vector<long long>v(n2);
//     for(int i=0;i<n2;i++)cin>>v[i];
//     int cnt=0; int c=0;
//     for(int i=n2-2;i>=0;i--){
//       while(v[i+1]<=v[i]&&v[i]>0){cnt++; v[i]/=2; }
//       if(v[i]==v[i+1]){ c=1;ans.push_back(-1); }
//       if(c)break;
//     }
//     if(c==0)ans.push_back(cnt);
//   }
//   for (auto it : ans)
//   { cout<<it<<endl;
//   }
// }
// #include<bits/stdc++.h>
// using namespace std;
// void solve(){
//     int n2;
//     cin >> n2;
//     vector<int>a(n2);
//     for(auto &i : a) cin >> i;
//     int ans = 0;
//     for(int i = n2 - 2; i >= 0; i--){
//         while(a[i] >= a[i + 1] && a[i] > 0){
//             a[i] /= 2;
//             ans++;
//         }
//         if(a[i] == a[i+1]){
//             cout << -1 << '\n2';
//             return;
//         }
//     }
//     cout << ans << '\n2';
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
// }




// #include<bits/stdc++.h>
// using namespace std;
// string solve(){
//     string s ,t ;
//     cin>>s; cin>>t; int n1=s.size();
//     vector<int>v(26,0);
//     int n2=t.size();
//     for(int i=0;i<n2;i++){
//       v[t[i]-'A']++;
//     } 
//     for(int i=n1-1;i>=0;i--){
//       if(v[s[i]-'A']>0)v[s[i]-'A']--;
//       else s[i]='.';
//     }
//     string finals="";
//     for(int i=0;i<n1;i++){
//       if(s[i]!='.')finals+=s[i];
//     }
//     if(finals==t)return "YES";
//     return "NO";
// }
// int main(){
//     int t;
//     cin >> t;
//     vector<string>s;
//     while(t--){
//         s.push_back(solve());
//     }
//     for(auto it:s )cout<<it<<endl;
// }


// https://codeforces.com/blog/entry/101663


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
//       int n;
//       unordered_map<int,int>mpp;
//       int c;
//       cin>>n;
//       for(int i=0;i<n;i++){
//        cin>>c;
//        mpp[c]++;
//       }
//       int maxi=0;
//       for(auto it : mpp)maxi=max(maxi,it.second);
//       int ans=0;
//       while(maxi<n){
//         int d=min(maxi,n-maxi);
//         ans+=1+d;
//         maxi+=d;
//       }
//       cout<<ans<<"\n";
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// vector<string>v={"00","25","50","75"};
// int func(string &n, string &num){
//     int n2=1;
//     int n1=num.size()-1;
//     int cnt=0;
//     for(int i=n1;i>=0;i--){
//         if(num[i]==n[n2]){n2--; if(n2<0)break;}
//         else cnt++;
//     }
//     if(n2>=0)return INT_MAX;
//     return cnt;
// }

// #include <bits/stdc++.h>
// using namespace std;

// long long findWays(vector<long long>& arr, long long k)
// {   long long n=arr.size();
// 	vector<long long>dp(k+1,0); dp[0]=1;
// 	for(int i=0;i<n;i++){
// 		if(arr[i]==0){for(int j=0;j<=k;j++)dp[j]*=2;}
// 		else{
// 			for(int j=k;j>=arr[i];j--){
// 				dp[j]=(dp[j]+dp[j-arr[i]]);
				
// 			}
// 		}
// 	}
// 	return dp[k];
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t, n, x;
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         int cnt0 = 0, cnt1 = 0;
//         for (int i = 1; i <= n; ++i) {
//             cin >> x;
//             if (x == 0) cnt0++;
//             if (x == 1) cnt1++;
//         }
//         cout << pow(2,cnt0)*cnt1*1LL<< '\n';
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//        long long n,p;
//        cin>>n>>p;
//        vector<long long>a(n);
//        vector<long long>b(n);
//        for(int i=0;i<n;i++)cin>>a[i];
//        for(int i=0;i<n;i++)cin>>b[i];
//        long long sum=p;
//        vector<pair<long long,long long>>v;
//        long long shared=1;
//        for(int i=0;i<n;i++){v.push_back({b[i],a[i]});}
//        sort(v.begin(),v.end()); 
//        for(auto it : v){
//             long long cbs=it.second;
//             long long scst=it.first;
//             if(scst>=p){break;}
//             if(shared+cbs > n){
//                 sum+=(n-shared)*scst;
//                 shared=n; break;
//             }
//             else{
//                 sum+=cbs*scst;
//                 shared+=cbs;
//             }
//         }
//        sum+=(n-shared)*p;
//        cout<<sum<<"\n";
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//       long long n,k,b,s;
//       cin>>n>>k>>b>>s;
//     vector<long long>v(n);
//     v[0]=k*b;
//     s-=k*b;
//     if(s<0){cout<<-1<<"\n";}
//     else {
//       for(int i=0;i<n;i++){
//           long long now=min(s,k-1);
//           v[i]+=now;
//           s-=now;
//       }
//         if(s>0){cout<<-1<<"\n";}
//         else{
//             for(auto it : v)cout<<it<<" ";
//              cout<<"\n";
//         }
//       }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//     long long n;
//     cin>>n;
//     vector<long long>v(n); 
//     for(int i=0;i<n;i++){
//         cin>>v[i]; }
//    long long e = LLONG_MIN;
// int i = 0;
// if(v[0] == n) {
//     for(int j = 1; j < n; j++) {
//         if(v[j] > e) {
//             e = v[j];
//             i = j;
//         }
//     }
//     if(i > 1) reverse(v.begin()+1, v.begin()+i+1);
// } else {
//     for(int j = 0; j < n; j++) {
//         if(v[j] > e) {
//             e = v[j];
//             i = j;
//         }
//     }
//     if(i > 0) reverse(v.begin(), v.begin()+i+1);
// }

//     for(auto it : v)cout<<it<<" ";
//     cout<<"\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         vector<long long> a(n), b(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         for (int j = 0; j < n; j++) cin >> b[j];

//         vector<long long> temp(n);
//         for (int i = 0; i < n; i++) {
//             temp[i] = max(a[i], b[i]);
//         }

//         for (int i = n - 2; i >= 0; i--) {
//             temp[i] = max(temp[i], temp[i + 1]);
//         }

       
//         vector<long long> pref(n + 1, 0);
//         for (int i = 0; i < n; i++) {
//             pref[i + 1] = pref[i] + temp[i];
//         }

//         while (q--) {
//             int l, r;
//             cin >> l >> r;
//             l--, r--;
//             cout << pref[r + 1] - pref[l] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         vector<long long> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

//         int idx = 0;
//         long long mx = LLONG_MIN;

//         if (v[0] == n) {
//             for (int j = 1; j < n; j++) {
//                 if (v[j] > mx) {
//                     mx = v[j];
//                     idx = j;
//                 }
//             }
//             if (idx > 1) {
//                 reverse(v.begin() + 1, v.begin() + idx + 1);
//             }
//         } else {
//             for (int j = 0; j < n; j++) {
//                 if (v[j] > mx) {
//                     mx = v[j];
//                     idx = j;
//                 }
//             }
//             if (idx > 0) {
//                 reverse(v.begin(), v.begin() + idx + 1);
//             }
//         }

//         for (auto x : v) cout << x << " ";
//         cout << "\n";
//     }
//     return 0;
// }
