// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve(){
//     string p;
//     string s;
//     cin>>p; cin>>s;
//     vector<pair<char,int>>vp;
//     vector<pair<char,int>>vs;
//     vp.push_back({p[0],1});
//     for(int i=1;i<p.size();i++){
//         if(p[i]==vp.back().first)vp.back().second++;
//         else vp.push_back({p[i],1});
//     }
//     vs.push_back({s[0],1});
//     for(int i=1;i<s.size();i++){
//         if(s[i]==vs.back().first)vs.back().second++;
//         else vs.push_back({s[i],1});
//     }
//     if(vp.size()!=vs.size()){cout<<"NO\n"; return ;}
//     for(int i=0;i<vp.size();i++){
//         int a = vs[i].second;
//         int b = vp[i].second;
//         if(vs[i].first!=vp[i].first ||a < b || a > 2 * b){cout<<"NO\n"; return ;}
//     }
//     cout<<"YES\n";
// }
// signed main(){
//      ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     while(n--){
//         solve();
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve(){
//     int a,b;
//     cin>>a>>b;
//     vector<int>va(a);
//     vector<int>vb(b);
//     for(int i=0;i<a;i++)cin>>va[i];
//     for(int i=0;i<b;i++)cin>>vb[i];
//     sort(va.begin(),va.end());
//     sort(vb.rbegin(),vb.rend());
//     int sum=0;
//     vector<int>chos(a);
//     for(int i=0;i<a;i++){
//         chos[i]=vb[b-a+i];
//         sum+=abs(chos[i]-va[i]);
//     }
//     int ans=0;
//     for(int i=0;i<=a;i++){
//         ans=max(ans,sum);
//         if(i<a){
//             sum-=abs(chos[i]-va[i]);
//             chos[i]=vb[i];
//             sum+=abs(chos[i]-va[i]);
//         }
//     }
//     cout<<ans<<"\n";
// }
// signed main(){
//      ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     while(n--){
//         solve();
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     vector<int>v(a);
//     for(int i=0;i<a;i++)cin>>v[i];
//     int sum=0;
//     for(int i:v){
//         sum+=floor(i/(b*1.0))*c;
//     }
//     int ans=0;
//     for(int i:v){
//         int ss=i+sum-floor(i/(b*1.0))*c;
//         ans=max(ans,ss);
//     }
//     cout<<ans<<"\n";
// }
// signed main(){
//      ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin>>n;
//     while(n--){
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     string s;
//     cin >> s;
//     int cnt = 0;
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '0')
//         {
//             p++;
//             if (p == m)
//             {   int j=0;
//                 while (i +j < n && j < k)
//                     {s[i+j] = '1'; j++;}
//                 i=i+j-1;
//                 cnt++;
//                 p = 0;
//             }
//         }else p=0;
//     }
//     cout << cnt << "\n";
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
// #define int long long
// void solve()
// {
//     int n,k;
//     cin>>n>>k;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     int mex=0;
//     sort(v.begin(),v.end());
//     for(int i:v){if(i==mex)mex++;}
//     cout<<min(mex,k-1)<<"\n";
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
// #define int long long
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), pre(n + 1, 0), suff(n, 0);
//     for(int i=0;i<n;i++)cin>>a[i];
//     for(int i=1;i<n;i++)pre[i+1]=pre[i]+abs(a[i]);
//     for(int i=n-1;i>=1;i--)suff[i-1]=suff[i]-(a[i]);
//     int ans=suff[0];
//     for(int i=1;i<n;i++){
//         ans=max(ans,a[0]+pre[i]+suff[i]);
//     }
//     cout<<ans<<"\n";
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
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// vector<int> a;
// vector<int> b;
// int sol(int i, int k)
// {
//     if (i == a.size())
//         return 0;
//     int picka = -1e17;
//     int pickb = -1e17;
//     picka = sol(i + 1, k - a[i]);
//     pickb = sol(i + 1, b[i] - k);
//     return max(k-a[i], b[i]-k);
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     a.assign(n, 0);
//     b.assign(n, 0);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < n; i++)
//         cin >> b[i];
//         int k;
//     sol(0, k);
//     cout<<k<<"\n";
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
// #define int long long
// int func(int idx){
//     while(((idx&1)==0))idx=idx>>1;
//     return idx;
// }
// void solve()
// {
//    int n;
//    cin>>n; int b=0;
//    vector<int>v(n+1),v1(n+1);
//    for(int i=1;i<=n;i++){cin>>v[i]; v1[v[i]]=i;}
//    int x=0;
//    for(int i=1;i<=n;i++){
//     if(func(i)!=func(v1[i])){cout<<"no\n"; return ;}
//    }
//    cout<<"yes\n";
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
// #define int long long

// void solve()
// {
//    int n;
//    cin>>n; int b=0;
//    vector<int>v(n);
//    for(int i=0;i<n;i++){cin>>v[i]; }
//    int cnt=0;
//    for(int i=1;i<n;i++){
//     if(v[i]==v[i-1]&&(i+1<n&&(v[i]==v[i+1]||v[i]==abs(7-v[i+1])))){cnt++; i+=1;}
//     else if(v[i]==v[i-1]){cnt++;}
//     else if(v[i]==abs(7-v[i-1])&&(i+1<n&&(v[i]==v[i+1]||v[i]==abs(7-v[i+1])))){cnt++; i+=1;}
//     else if(v[i]==abs(7-v[i-1]))cnt++;
//    }
//    cout<<cnt<<"\n";
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
// #define int long long
// void solve()
// {
//     int n;
//     long long X;
//     cin >> n >> X;
//     vector<long long> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     sort(a.begin(), a.end());
//     long long loyalty = 0;
//     long long bonus = 0;
//     int l = 0;          
//     int r = n - 1;      
//         vector<int>v;
//     while (l <= r) {
//         if ((loyalty + a[r]) / X > loyalty / X) {
//             loyalty += a[r];
//             bonus+=a[r];
//             v.push_back(a[r]);
//             r--;
//         } else {
//             loyalty += a[l];
//             v.push_back(a[l]);
//             l++;
//         }
//     }
//     cout << bonus << "\n";
//     for(auto it:v)cout<<it<<" ";
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





#include <bits/stdc++.h>
using namespace std;
// #define int long long
void solve()
{
    int n;
    // long long X;
    cin >> n ;
    vector<long long> a(n+1);
    for (int i = 0; i < n; i++)
    {int x; cin>>x; a[x]++; }
    int ans=0;
    for(int s=2;s<=2*n;s++){
        int cnt=0;
        for(int i=max(1,(s-n));i<=min(s/2,n) ;i++){
            if(2*i==s){cnt+=a[i]/2;}
            else cnt+=min(a[i],a[s-i]);
        }
        // if(s%2==0)cnt+=a[s/2]/2;
        ans=max(ans,cnt);
    }    
    cout<<ans<<"\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}


