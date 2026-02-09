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



#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v(a);
    for(int i=0;i<a;i++)cin>>v[i];
    int sum=0;
    for(int i:v){
        sum+=floor(i/(b*1.0))*c;
    }
    int ans=0;
    for(int i:v){
        int ss=i+sum-floor(i/(b*1.0))*c;
        ans=max(ans,ss);
    }
    cout<<ans<<"\n";
}
signed main(){
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}


