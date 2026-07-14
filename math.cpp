
// #include <bits/stdc++.h>
// using namespace std;
// const int mod=1000000007;
// void solve(){
//     int a,b,n;
//     cin>>a>>b>>n;
//     if(a<0)a=(a+mod)%mod;
//     if(b<0)b=(b+mod)%mod;
//     int c=((b-a)%mod+mod)%mod;
//     int d=((-a)%mod+mod)%mod;
//     int e=((-b)%mod+mod)%mod;
//     int f=((a-b)%mod+mod)%mod;
//     n=n%6;
//     if(n==1){cout<<a;}
//     else if(n==2){cout<<b;}
//     else if(n==3){cout<<c;}
//     else if(n==4){cout<<d;}
//     else if(n==5){cout<<e;}
//     else if(n==0){cout<<f;}
//     // else if(n==1){cout<<b;}
// }
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
    
//        solve();
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
    
//         string s;
//         cin>>s;
//         int n=s.size();
//         int cnt=0;
//         int last=-1;
//         for(int i=0;i<n;i++){
//             // int flag=0;
//             if(i+3<n&&s.substr(i,4)=="bear"){ cnt+=(n-i-3)*(i-last); last=i;}
//         }
//         cout<<cnt;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int a,b;
//     cin>>a>>b;
//     int cnta1=0;
//     int cnta2=0;
//     int cnta3=0;
//     int cntb1=0;
//     int cntb2=0;
//     int cntb3=0;
//         while(a>0&&a%2==0){a/=2; cnta1++;}
//         while(a>0&&a%3==0){a/=3; cnta2++;}
//         while(a>0&&a%5==0){a/=5; cnta3++; }
//         while(b>0&&b%2==0){b/=2; cntb1++;}
//         while(b>0&&b%3==0){b/=3; cntb2++;}
//         while(b>0&&b%5==0){b/=5; cntb3++; }
//         if(a!=b)cout<<-1;
//         else cout<<abs(cnta1-cntb1)+abs(cnta2-cntb2)+abs(cnta3-cntb3);
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     solve();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// bool prime[10000000];
//     void sieve()
//     {
//         memset(prime, 1, sizeof(prime));
//         prime[0] = prime[1] = 0;
//         for (ll i = 2; i * i <= 10000000; i++)
//         {
//             if (prime[i])
//             {
//             for (ll j = i * i; j <= 10000000; j += i)
//                 prime[j] = 0;
//             }
//         }
//     }
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//      int n,m;
//      cin>>n>>m;
//      vector<vector<int>>mat(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++)cin>>mat[i][j];
//     }
//     int ans=1e9;
//     sieve();
//     for(int i=0;i<n;i++){
//         int cnt=0;
//         for(int j=0;j<m;j++){
//             int t=mat[i][j];
//             while(prime[t]==0){t++; cnt++;}
//         }
//         ans=min(ans,cnt);
//     }
//     for(int i=0;i<m;i++){
//         int cnt=0;
//         for(int j=0;j<n;j++){
//             int t=mat[j][i];
//             while(prime[t]==0){t++; cnt++;}
//         }
//         ans=min(ans,cnt);
//     }
//     cout<<ans;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int sum=0;
//     for(auto &it:v){cin>>it; sum+=it;}
//     // if(sum%n)cout<<n-1;
//     // else cout<<n;
//     long long ops = 0;
//     int target=sum/n;
//     if (sum % n == 0) {
//         for (int i = 0; i < n; i++) {
//             ops += abs(v[i] - target);
//         }
//         ops /= 2;
//     } else {
//         long long lt = target + (sum % n);
//         long long opt = 0;
//         for (int i = 0; i < n; i++) {
//             opt += abs(v[i] - target);
//         }
//         ops = (opt - abs(sum % n)) / 2 + abs(sum % n); 
//     }
//     cout<<ops;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<-1; return 0;
//     }
//     vector<int>v(n);
//     for(int i=0;i<n;i++){v[i]=i; cout<<i<<' ';}
//     cout<<"\n";
//     for(int i=0;i<n;i++){ cout<<(i+1)%n<<' ';}
//     cout<<"\n";
//     for(int i=0;i<n;i++){ cout<<(i+(i+1)%n)%n<<' ';}
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){cin>>v[i];}
//     unordered_map<int,int>mp;
//     for(int i=0;i<n;i++){
//         int t=__builtin_popcount(v[i]);
//         mp[t]++;
//     }
//     int cnt=0;
//     for(auto it:mp){
//         cnt+=(it.second)*(it.second-1)/2;
//     }
//     cout<<cnt;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     double p=(a*1.0*d*1.0);
//     p/=(b*d*1.0-(d-c)*(b-a)*1.0);
//     cout<<p;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// const int mod=1000000009;
// long long binpow(long long a, long long b) {
//     a %= mod;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % mod;
//         a = a * a % mod;
//         b >>= 1;
//     }
//     return res;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int n,m;
//     cin>>n>>m;
//     int v=binpow(2,m);
//     int sum=1;
//     for(int i=1;i<=n;i++){
//         sum=(1LL*sum*(v-i))%mod;
//     }
//     cout<<sum;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//        cin>>n;
//        if(n==2){cout<<-1<<"\n"; return;}
//        int a=1;
//        int b=2;
//        cout<<1<<' ';
//        if(n==1)break;
//        cout<<b<<" ";
//        int prev=3;
//        for(int i=3;i<=n;i++){
//         int t=prev;
//         cout<<t<<" ";
//         prev+=t;
//        }
//        cout<<"\n";
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//        solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// bool prime[10000001];
// // vector<ll>primes;
// void sieve()
// {
//     memset(prime, 1, sizeof(prime));
//     prime[0] = prime[1] = 0;
//     for (ll i = 2; i * i <= 10000001; i++)
//     {
//         if (prime[i])
//         { 
//         for (ll j = 1LL*i * i; j <= 10000001; j += i)
//             prime[j] = 0;
//         }
//     }
// }
// void solve(){
//     int x;
//     cin>>x;
//     int sum=0;
//     for(int i=2;i<=x;i++){if(prime[i])sum+=x/i;}
//     cout<<sum<<'\n';
// }
// int main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     sieve();
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     double sum=0;
//     for(auto &it:v){cin>>it; sum+=it;}
//     double avg=(sum*1.0)/(n*1.0);
//     avg=2*avg;
//     unordered_map<double,int>mp;
//     int cnt=0;
//     for(int i:v){
//         double t=avg-i;
//         if(mp.count(t))cnt+=mp[t];
//         mp[i]++;
//     }
//     cout<<cnt;
// }
// signed main()
// {
//     cin.tie(0);cin.sync_with_stdio(0);
//     cout.tie(0);cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout<<"\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve(){
    int a,b,p;
    cin>>a>>b>>p;
    string s;
    cin>>s;
    int n=s.size();
    int i=n-1;
    while (i>0){
        if(s[i-1]=='A'){if(p<a){ break;} p-=a;}
        else {if(p<b){ break;} p-=b;}
        char c=s[i-1];
        // int f=0;
        while(i>0&&c==s[i-1]){i--; }
    }
    cout<<i+1;
}
signed main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}