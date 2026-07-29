// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vvvi vector<vector<vector<int>>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define int long long

// partition dp
// scramble string

// "NO"dered_map<string,int>mp;
// bool solve(string &s1,string &s2){
//     if(s1==s2)return 1;
//     if(s1.length()!=s2.length())return 0;
//     int n=s1.size();
//     string s=s1+"+"+s2;
//     if(mp.count(s))return mp[s];
//     for(int i=1;i<n;i++){
//         string s1i=s1.substr(0,i);
//         string s1in=s1.substr(i,n-i);
//         string s2i=s2.substr(0,i);
//         string s2in=s2.substr(i,n-i);
//         string s20n=s2.substr(0,n-i);
//         string s2ni=s2.substr(n-i,i);
//         bool b1=solve(s1i,s2i)&&solve(s1in,s2in);
//         bool b2=solve(s1i,s2ni)&&solve(s1in,s20n);
//         if(b1||b2)return mp[s]=1;
//     }
//     return mp[s]=0;
// }
// int main(){
//     string s1="rgannjjljkljjetssssssssssssr";
//     string s2="rgannjjljkljjetssssssssssssr";
//     cout<<solve(s1,s2);
//     cout<<" ";
//     cout<<mp.size();
// }

// leetcode 1444
// class Solution {
// public:
// const int mod=1e9+7;
// vector<vector<vector<int>>>dp;
// vector<vector<int>>a;
// vector<vector<int>>dir={{0,1},{1,0}};
// int solve(int i,int j,vector<string>&s,int k){
//     if(a[i][j]<k)return 0;
//     if(dp[i][j][k]!=-1)return dp[i][j][k];
//     if(k==1){
//         if(a[i][j]>=1)return 1;
//         return 0;
//     }
//     int cnt=0;
//     for(int h=i+1;h<a.size();h++){
//         int up=a[i][j]-a[h][j];
//         int low=a[h][j];
//         if(up>=1&&low>=k-1){
//             cnt=(cnt+solve(h,j,s,k-1))%mod;
//         }
//     }
//     for(int v=j+1;v<a[0].size();v++){
//         int r=a[i][v];
//         int l=a[i][j]-a[i][v];
//         if(l>=1&&r>=k-1){
//             cnt=(cnt+solve(i,v,s,k-1))%mod;
//         }
//     }
//     return dp[i][j][k]=cnt;
// }
// int ways(vector<string>& pizza, int k) {
//         int m=pizza.size();
//         int n=pizza[0].size();
//         a.assign(m,vector<int>(n,0));
//          for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 a[i][j]=(pizza[i][j]=='A')?1:0;
//             }
//          }
//          for(int i=0;i<m;i++){
//             for(int j=n-2;j>=0;j--)a[i][j]+=a[i][j+1];
//          }
//          for(int i=0;i<n;i++){
//             for(int j=m-2;j>=0;j--)a[j][i]+=a[j+1][i];
//          }

//         dp.assign(m,vector<vector<int>>(n,vector<int>(k+1,-1)));
//         return solve(0,0,pizza,k);
//     }
// };

// 2218

// class Solution {
// public:
//     vector<vector<vector<int>>>dp;
//     int solve(int i,int j,int k,vector<vector<int>>& piles){
//         if(k==0)return 0;
//         if(i>=piles.size()||j>=piles[i].size()){
//             return -1e9;
//         }
//         if(dp[i][j][k]!=-1)return dp[i][j][k];
//         int current=piles[i][j]+solve(i,j+1,k-1,piles);
//         int curr=piles[i][j]+solve(i+1,0,k-1,piles);
//         int next=solve(i+1,0,k,piles);
//         return  dp[i][j][k]= max({current,curr,next});
//     }
//     int maxValueOfCoins(vector<vector<int>>& piles, int k) {
//        int m=piles.size();
//        int n=0;
//        for(auto &it:piles){
//         int t=it.size();
//         n=max(n,t);}
//         dp.assign(m,vector<vector<int>>(n,vector<int>(k+1,-1)));
//         return solve(0,0,k,piles);
//     }
// };

// striver
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     for(int i=2;i<=n;i++){
//         cout<<a+b<<' ';
//         int t=b;
//         b=a+b;
//         a=t;
//     }
// }
// vi dp;
// int solve(int i,vi &jump){
//     if(i>=jump.size())return 1e9;
//     if(i==jump.size()-1)return 0;
//     int pick1=1e9;
//     if(dp[i]!=-1)return dp[i];
//     if(i+1<jump.size())pick1=abs(jump[i]-jump[i+1])+solve(i+1,jump);
//     if(i+2<jump.size())pick1=min(pick1,abs(jump[i]-jump[i+2])+solve(i+2,jump));
//     return dp[i]=pick1;
// }
// signed main(){
//     vi v={10,20,30,10};
//     dp.assign(4,0);
//     int a=0;
//     int b=0;
//     int n=v.size();
//     for(int i=n-2;i>=0;i--){
//     int pick1=1e9;
//     if(i+1<n)pick1=abs(v[i]-v[i+1])+a;
//     if(i+2<n)pick1=min(pick1,abs(v[i]-v[i+2])+b);
//     b=a;
//     a=pick1;
//     }
//     print a;
// }
// if there is something like i-1 i-2 or i i+1 there is always possibility of space optimisation

// vi dp;
// int k;
// int solve(int i,vi &jump){
//     if(i>=jump.size())return 1e9;
//     if(i==jump.size()-1)return 0;
//     int pick1=1e9;
//     if(dp[i]!=-1)return dp[i];
//     for(int t=1;t<=k;t++){
//         if(i+k<jump.size())pick1=min(pick1,abs(jump[i]-jump[i+k])+solve(i+k,jump));
//     }
//     // if(i+1<jump.size())pick1=abs(jump[i]-jump[i+1])+solve(i+1,jump);
//     return dp[i]=pick1;
// }

// signed main(){
//     int n;
//     cin>>n;
//     cin>>k;
//     vi v(n);
//     dp.assign(n+1,-1);
//     for(auto &it:v)cin>>it;
//     cout<<solve(0,v);
// }

// signed main(){
//     int n;
//     cin>>n;
//     cin>>k;
//     vi v(n);
//     dp.assign(n+1,0);
//     for(auto &it:v)cin>>it;
//     for(int i=n-2;i>=0;i--){
//         int pick1=1e9;
//       for(int t=1;t<=k;t++){
//         if(i+t<n)pick1=min(pick1,abs(v[i]-v[i+t])+dp[i+t]);
//                         }
//         dp[i]=pick1;
//     }
//     cout<<dp[0];
// }

// // house robber
// // vi dp;
// int n;
// // int solve(int i,vi&a){
// //     if(i>=n)return 0;
// //     if(dp[i]!=-1)return dp[i];
// //     int pick1=a[i]+solve(i+2,a);
// //     int pick2=a[i]+solve(i+3,a);
// //     return dp[i]=max(pick1,pick2);
// // }
// signed main(){
// cin>>n;
// // dp.assign(n+1,0);
// vi a(n);
// for(auto &it:a)cin>>it;
// int fp=a[n-2];
// int tp=0;
// int dp=a[n-1];
// for(int i=n-3;i>=0;i--){
//     int pick1=0;
//     if(i+2<n)pick1=a[i]+dp;
//     int pick2=0;
//     if(i+3<n)pick2=a[i]+tp;
//     tp=dp;
//     dp=fp;
//     fp=max(pick1,pick2);
// }
// print fp;
// }

// // // house robber2
// vi dp;
// int n;
// int solve(int i,vi&a,int p){
//     if(i>=p)return 0;
//     if(dp[i]!=-1)return dp[i];
//     int pick1=a[i]+solve(i+2,a,p);
//     int pick2=a[i]+solve(i+3,a,p);
//     return dp[i]=max(pick1,pick2);
// }
// signed main(){
// cin>>n;
// dp.assign(n+1,-1);
// vi a(n);
// for(auto &it:a)cin>>it;
// print max(solve(0,a,n-1),solve(1,a,n));
// }

// vvi dp;
// int solve(int day,int prev,vvi&score){
//     if(day==score.size())return 0;
//     if(dp[day][prev+1]!=-1)return dp[day][prev+1];
//     int maxi=0;
//     int m=score.size();
//     int n=score[0].size();
//     for(int i=0;i<3;i++){
//         if(i!=prev)maxi=max(maxi,score[day][i]+solve(day+1,i,score));
//     }
//     return dp[day][prev+1]=maxi;
// }

// signed main(){
//     int m;
//     int n;
//     cin>>m>>n;
//     vvi mat(m,vi(n,0));
//     dp.assign(m,vi(n+1,0));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//     }
//     dp[m-1][0]=max(mat[m-1][1],mat[m-1][2]);
//     dp[m-1][1]=max(mat[m-1][0],mat[m-1][2]);
//     dp[m-1][2]=max(mat[m-1][0],mat[m-1][1]);
//     for(int i=m-2;i>=0;i--){
//          for(int j=0;j<3;j++){
//             int maxi=0;
//             for(int prev=0;prev<3;prev++){
//                 if(j!=prev){
//                     maxi=max(maxi,mat[i][prev]+dp[i+1][prev]);
//                 }
//             }
//             dp[i][j]=maxi;
//          }
//     }
//     int ans=0;
//     print max({dp[0][0],dp[0][1],dp[0][2]});
// }

// vvi dp;
// int solve(int x,int y,int m,int n){
//     if(x>=m||y>=n)return 0;
//     if(x==m-1&&y==n-1)return 1;
//     if(dp[x][y]!=-1)return dp[x][y];
//     int down=solve(x+1,y,m,n);
//     int right=solve(x,y+1,m,n);
//     return dp[x][y]=down+right;
// }
// signed main(){
//     int m,n; cin>>m>>n;
//     dp.assign(m+1,vi(n+1,0));
//     dp[m-1][n-1]=1;
//     for(int i=m-1;i>=0;i--){
//     for(int j=n-1;j>=0;j--){
//     int down=dp[i+1][j];
//     int right=dp[i][j+1];
//     dp[i][j]+=down+right;
//         }
//     }
//     print dp[0][0];
// }

// vvi dp;
// int solve(int x,int y,int m,int n,vvi& mat){
//     if(x>=m||y>=n)return 1e9;
//     if(x==m-1&&y==n-1)return mat[x][y];
//     if(dp[x][y]!=-1)return dp[x][y];
//     int down=mat[x][y]+solve(x+1,y,m,n,mat);
//     int right=mat[x][y]+solve(x,y+1,m,n,mat);
//     return dp[x][y]=min(down,right);
// }
// signed main(){
//     int m,n; cin>>m>>n;
//     vvi mat(m,vi(n));
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++)cin>>mat[i][j];
//     }
//     dp.assign(m,vi(n,-1));
//     // dp[m-1][n-1]=1;
//     // for(int i=m-1;i>=0;i--){
//     // for(int j=n-1;j>=0;j--){
//     // int down=dp[i+1][j];
//     // int right=dp[i][j+1];
//     // dp[i][j]+=down+right;
//     //     }
//     // }
//     print solve(0,0,m,n,mat);
// }

// vvi dp;
// int solve(int i,int j, vvi&mat){
//     if(i==mat.size()-1)return mat[i][j];
//     int down=mat[i][j]+solve(i+1,j,mat);
//     int right=mat[i][j]+solve(i+1,j+1,mat);
//     return min(down,right);
// }
// signed main(){
//     int m; cin>>m; int n; cin>>n;
//     dp.assign(m,vi(n,0));
//     vvi mat;
//     for(int i=0;i<m;i++){
//         vi v; int t; cin>>t;
//         for(int j=0;j<t;j++){
//             int x; cin>>x;
//             v.push_back(x);
//         }
//         mat.push_back(v);
//     }
//     vi onedp(n);
//     for(int i=0;i<n;i++)onedp[i]=mat[m-1][i];
//     for(int i=m-2;i>=0;i--){
//     int t=mat[i].size();
//     vi  temp(n);
//     for(int j=0;j<t;j++){
//     int down=mat[i][j]+onedp[j];
//     int right=mat[i][j]+onedp[j+1];
//     temp[j]=min(down,right);}
//     onedp=temp;
//     }
//     print onedp[0];
// }

// #define  vvpi vector<vector<pair<int,int>>>
// int m,n;
// vvvi dp;
// int solve(int i,int j,int r,vvi&mat){
//     if(i<0||j<0||i>=n||j>=n)return -1e9;
//     if(r==mat.size()-1){
//         if(i!=j){return mat[r][i]+mat[r][j];}
//         else return mat[r][i];
//     }
//     if(dp[r][i][j]!=-1)return dp[r][i][j];
//     int maxi=0;
//     int val=0;
//      if(i!=j){val= mat[r][i]+mat[r][j];}
//     else val= mat[r][i];
//     for(int d1=-1;d1<=1;d1++){
//         for(int d2=-1;d2<=1;d2++){
//             int x1=i+d1; int x2=j+d2;
//             maxi=max(maxi,val+solve(x1,x2,r+1,mat));
//         }
//     }
//     return  dp[r][i][j]=maxi;
// }
// int cherrypickup(vvi&mat){
//    m=mat.size(); n=mat[0].size();
//    dp.assign(m,vvi(n+1,vi(n+1,0)));
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i!=j){dp[m-1][i][j]= mat[m-1][i]+mat[m-1][j];}
//         else dp[m-1][i][i]=mat[m-1][i];
//     }
//    }
//    for(int r=m-2;r>=0;r--){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//     int val=0;
//      if(i!=j){val= mat[r][i]+mat[r][j];}
//     else val= mat[r][i];
//     int maxi=0;
//      for(int d1=-1;d1<=1;d1++){
//         for(int d2=-1;d2<=1;d2++){
//             int x1=i+d1; int x2=j+d2;
//              if(x1<0||x2<0||x1>=n||x2>=n)continue;;
//             maxi=max(maxi,val+dp[r+1][x1][x2]);
//         }
//     }
//     dp[r][i][j]=maxi;
//         }
//     }
//    }
//    return dp[0][0][n-1];
// }
// signed main(){
//     int r; int c;
//     cin>>r>>c;
//     vvi mat(r,vi(c,0));
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++)cin>>mat[i][j];
//     }
//     cout<<cherrypickup(mat);
// }

// #define  vvpi vector<vector<pair<int,int>>>
// // int solve(int i,int k,vi&a){
//     if(i==a.size())return 0;
//     // if(k<0)return 0;
//     if(k==0)return 1;
//     int pick=solve(i+1,k-a[i],a);
//     int npotpick=solve(i+1,k,a);
//     return pick+npotpick;
// }
// signed main(){
//     int n,k;
//     cin>>n>>k;
//     vi v(n);
//     "NO"dered_map<int,"NO"dered_map<int,int>>dp;
//     for(int i=0;i<n;i++)dp[i][0]=1;
//     for(int i=0;i<n;i++)cin>>v[i];
//     dp[n-1][v[n-1]]=1;
//     for(int i=n-2;i>=0;i--){
//         for(int t=min(0LL,k);t<=abs(k);t++){
//             int pick=0;

//             pick=dp[i+1][t-v[i]];
//             int npotpick=dp[i+1][t];
//             dp[i][t] =pick+npotpick;
//         }
//     }
//     print dp[0][k];
// }
// // work for only positives sums//
// //"NO" it works for neg as well
// but it is"NO" working with 0 properly

// to handle zeros and neg and all ints
// signed main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vi v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     "NO"dered_map<int,int>freq;
//     freq[0]++;
//     for(int i:v){
//         "NO"dered_map<int,int>temp;
//         for(auto &it:freq){
//             freq[it.first+i]+=it.second;
//         }
//         freq.clear();
//         freq.move
//         for(auto it:temp)freq[it.first]=it.second;
//     }
//     print freq[k];
// }

// #define  vvpi vector<vector<pair<int,int>>>
// int solve(int i,int k,vi&a){
//     if(i==a.size())return 0;
//     if(k<0)return 0;
//     if(k==0)return 1;
//     int pick=solve(i+1,k-a[i],a);
//     int npotpick=solve(i+1,k,a);
//     return pick+npotpick;
// }
// signed main(){
//     int n,k;
//     cin>>n>>k;
//     vi v(n);
//     "NO"dered_map<int,"NO"dered_map<int,int>>dp;
//     for(int i=0;i<n;i++)dp[i][0]=1;
//     for(int i=0;i<n;i++)cin>>v[i];
//     dp[n-1][v[n-1]]=1;
//     for(int i=n-2;i>=0;i--){
//         for(int t=min(0LL,k);t<=abs(k);t++){
//             int pick=0;

//             pick=dp[i+1][t-v[i]];
//             int npotpick=dp[i+1][t];
//             dp[i][t] =pick+npotpick;
//         }
//     }
//     print dp[0][k];
// }

// // vi dp;
// min number of coins problem
// int solve(int rem,vi&v){
//     if(rem==0)return 0;
//     if(rem<0)return -1;
//     if(dp[rem]!=-1)return dp[rem];
//     int ans=1e10;
//     for(auto it:v){
//         int val=solve(rem-it,v);
//         if(val>=0){ans=min(ans,1+val);}
//     }
//     return dp[rem]=ans;
// }
// signed main(){
//     int n; cin>>n;
//     vi v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     int amt;
//     cin>>amt;
//      dp.assign(amt+1,0);
//     //  dp[0]=1;
//     for(int rem=1;rem<=amt;rem++){
//     int ans=1e10;
//     for(auto it:v){
//         if(rem-it>=0){int val=1+dp[rem-it];
//         ans=min(ans,val);}
//     }
//     dp[rem]=ans;
//     }
//     print dp[amt];
// }

// ways of coins

// int solve(int rem,vi&coins){
//     if(rem==0)return 1;
//     if(rem<0)return 0;
//     int c=0;
//     for(auto it:coins){
//         if(rem-it>=0)c+=solve(rem-it,coins);
//     }
//     return c;
// }
// signed main(){
//     int n;
//     cin>>n;
//     int amt;
//     cin>>amt;
//     vi v(n);
//     for(auto &it:v)cin>>it;
//     print solve(amt,v);
// }

// vvi dp;
// int solve(string&a,string&b,int i,int j){
//     if(i>=a.size())return 0;
//     if(j>=b.size())return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     int cnt=0;
//     if(a[i]==b[j])cnt=max(cnt,1+solve(a,b,i+1,j+1));
//         cnt=max(cnt,solve(a,b,i+1,j));
//         cnt=max(cnt,solve(a,b,i,j+1));
//     return dp[i][j]=cnt;
// }
// int lcs(){
//     string a,b;
//     cin>>a>>b;
//     int m=a.size(); int n=b.size();
//     dp.assign(m+1,vi(n+1,0));
//     for(int i=m-1;i>=0;i--){
//         for(int j=n-1;j>=0;j--){
//             int cnt=0;
//             if(a[i]==b[j]){
//                 cnt=max(cnt,1+dp[i+1][j+1]);
//             }else{
//                 cnt=max(dp[i+1][j],dp[i][j+1]);
//             }
//         dp[i][j]=cnt;
//         }
//     }
//     string ans="";
//     int i=0; int j=0;
//     while(i<m&&j<n){
//         if(a[i]==b[j]){ans+=a[i]; i++; j++;}
//         else{
//             if(dp[i+1][j]>dp[i][j+1])i++;
//             else j++;
//         }
//     }
//     print ans; print "\n";
//     return dp[0][0];
// }
// int palindromiclcs(){
//     string a;
//     cin>>a;
//     string b=a;
//     reverse(b.begin(),b.end());
//     int m=a.size(); int n=b.size();
//     dp.assign(m+1,vi(n+1,0));
//     for(int i=m-1;i>=0;i--){
//         for(int j=n-1;j>=0;j--){
//             int cnt=0;
//             if(a[i]==b[j]){
//                 cnt=max(cnt,1+dp[i+1][j+1]);
//             }else{
//                 cnt=max(dp[i+1][j],dp[i][j+1]);
//             }
//         dp[i][j]=cnt;
//         }
//     }
//     string ans="";
//     int i=0; int j=0;
//     while(i<m&&j<n){
//         if(a[i]==b[j]){ans+=a[i]; i++; j++;}
//         else{
//             if(dp[i+1][j]>dp[i][j+1])i++;
//             else j++;
//         }
//     }
//     print ans; print "\n";
//     return dp[0][0];
// }
// signed main(){
//     print palindromiclcs();
// }
// int shortestsuperseq(){
//     string a,b;
//     cin>>a>>b;
//     int m=a.size(); int n=b.size();
//     dp.assign(m+1,vi(n+1,0));
//     for(int i=m-1;i>=0;i--){
//         for(int j=n-1;j>=0;j--){
//             int cnt=0;
//             if(a[i]==b[j]){
//                 cnt=max(cnt,1+dp[i+1][j+1]);
//             }else{
//                 cnt=max(dp[i+1][j],dp[i][j+1]);
//             }
//         dp[i][j]=cnt;
//         }
//     }
//     string ans="";
//     int i=0; int j=0;
//     while(i<m&&j<n){
//         if(a[i]==b[j]){ans+=a[i]; i++; j++;}
//         else{
//             if(dp[i+1][j]>dp[i][j+1]){ans+=a[i]; i++;}
//             else{ ans+=b[j++];}
//         }
//     }
//     while(i<m)ans+=a[i++];
//     while(j<n)ans+=b[j++];
//     print ans; print "\n";
//     return dp[0][0];
// }
// signed main(){
//     shortestsuperseq();
// }

// vvi dp;
// int solve(int i,int j,string &bap,string &b){
//     if(j==b.size())return 1;
//     if(i==bap.size()){
//         return 0;
//     }
//     int cnt=0;
//     if(bap[i]==b[j])cnt+=solve(i+1,j+1,bap,b);
//     cnt+=solve(i+1,j,bap,b);
// }

// number of diff subseq possi when 0 ,1
// int solve(){
//     string s;
//     cin>>s;
//     int onec=0;
//     int zeroc=0;
//     for(char c:s){
//         if(c=='1')onec=(onec+zeroc+1)%mod;
//         else zeroc=(zeroc+onec)%mod;
//     }
//     return onec+zeroc+(zeroc||s[0]=='0');
// }
// signed main(){
//     print solve();
// }
// n of diff subseq posible of string
// int solve(){
//     string s;
//     cin>>s;
//     vi a(26,0);
//     int cnt=0;
//     int t=0;
//     for(char c:s){
//         if(a[c-'a']==0){a[c-'a']=cnt+1; cnt+=cnt+1;}
//         else cnt++;
//     }
//     for(auto it:a){print it; print " ";}
//     return cnt;

// }
// signed main(){
//     print solve();
// }

// int solve(int i,int j,string&src,string&dst){
//     if(i>=src.size()) return dst.size()-j;
//     if(j>=dst.size())return src.size()-i;
//     if(src[i]==dst[j])return solve(i+1,j+1,src,dst);
//     int cnt=1e9;
//     cnt=min(cnt,1+solve(i+1,j,src,dst));// deleted
//     cnt=min(cnt,1+solve(i,j+1,src,dst)); // inserted
//     cnt=min(cnt,1+solve(i+1,j+1,src,dst)); //replaced
//     return cnt;
// }
// signed main(){
//     string a,b;
//     cin>>a>>b;
//     print(solve(0,0,a,b));
// }

// int solve(vi&a,int i,int status){
//     if(i==a.size()){
//         if(status==0)return 0;
//         else return -1e9;
//     }
//     int cnt=0;
//     if(status)cnt=max(solve(a,i+1,1),a[i]+solve(a,i+1,0));
//     else cnt=max(-a[i]+solve(a,i+1,1),solve(a,i+1,0));
//     return cnt;
// }
// signed main(){
//     int n;
//     cin>>n;
//     vi a(n);
//     for(auto&it:a){cin>>it;}
//     vvi dp(n+1,vi(2,0));
//     for(int i=n-1;i>=0;i--){
//         int cnt=0;
//         dp[i][0]=max(-a[i]+dp[i+1][1],dp[i+1][0]);
//         dp[i][1]=max(dp[i+1][1],a[i]+dp[i+1][0]);
//     }
//     for(auto it:dp){print it[0]<<" ";}
//     // print dp[0][0];
// }

// //atmost 2 transactions

// // int solve(vi&a,int i,int status){
// //     if(status==4)return 0;
// //     if(i==a.size()){
// //         if(status%2)return -1e9;
// //         else return 0;
// //     }
// //     int cnt=0;
// //     if(status%2)cnt=max(solve(a,i+1,status),a[i]+solve(a,i+1,status+1));
// //     else cnt=max(-a[i]+solve(a,i+1,status+1),solve(a,i+1,status));
// //     return cnt;
// // }
// signed main(){
//     int n;
//     cin>>n;
//     vi a(n);
//     for(auto&it:a){cin>>it;}
//     vvi dp(n+1,vi(5,0));
//     for(int i=n-1;i>=0;i--){
//         for(int s=0;s<=3;s++){
//     int cnt=0;
//     if(s%2)cnt=max(dp[i+1][s],a[i]+dp[i+1][s+1]);
//     else cnt=max(-a[i]+dp[i+1][s+1],dp[i+1][s]);
//     dp[i][s]=cnt;
//         }
//     }
//     print dp[0][0];
// }

// atmost k transactions

// signed main(){
//     int n;
//     cin>>n; int k; cin>>k;
//     vi a(n);
//     for(auto&it:a){cin>>it;}
//     vvi dp(n+1,vi(2*k+1,0));
//     for(int i=n-1;i>=0;i--){
//     for(int s=0;s<=2*k-1;s++){
//     int cnt=0;
//     if(s%2)cnt=max(dp[i+1][s],a[i]+dp[i+1][s+1]);
//     else cnt=max(-a[i]+dp[i+1][s+1],dp[i+1][s]);
//     dp[i][s]=cnt;
//     }
// }
//     // for(auto it:dp){print it[0]<<" ";}
//     print dp[0][0];
// }

// int solve(int prev,vi&a,int i){
//     if(i==a.size())return 0;
//     int pick=0;
//     int"NO"pick=0;
//     if(prev==-1||a[i]>a[prev])pick=1+solve(i,a,i+1);
//    "NO"pick=solve(prev,a,i+1);
//     return max(pick"NO"pick);
// // }
// signed main(){
//     int n;
//     cin>>n;
//     vi a(n);
//     for(auto&it:a)cin>>it;
//     vvi dp(n+1,vi(n+1,1));
//     for(int i=n-1;i>=0;i--){
//     for(int prev=0;prev<=i;prev++){
//     int pick=0;
//     int"NO"pick=0;
//     if(a[i]>a[prev]){pick=1+dp[i][i+1]; }
//    "NO"pick=dp[prev][i+1];
//     dp[prev][i]=max(pick"NO"pick);
//         }
//     }
// }
// to print the lcs use n2 approach maintain a hash vector and a dp

// lcs using bs // o(nlogn)
// signed main(){
//     set<int>st;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         auto it=st.lower_bound(x);
//         if(it==st.end())st.insert(x);
//         else {
//             st.erase(it);
//             st.insert(x);
//         }
//     }
//     cout<<st.size();
//     cout<<endl;
//     for(auto it:st)cout<<it<<" ";
// }

// longest divisble subseq
//  signed main(){
//      int n;
//      cin>>n;
//      vi a(n);
//      for(auto&it:a)cin>>it;
//      vvi dp(n+1,vi(n+1,0));
//      for(int i=n-1;i>=0;i--){
//      for(int prev=0;prev<=i;prev++){
//      int pick=0;
//      int"NO"pick=0;
//      if(a[i]%a[prev]==0||a[prev]%a[i]==0){pick=1+dp[i][i+1]; }
//     "NO"pick=dp[prev][i+1];
//      dp[prev][i]=max(pick"NO"pick);
//          }
//      }
//      print dp[0][0];
//  }

// partition dp
// vvi dp;
// int mcm(vi&mat,int i,int j){
//     if(i==j)return 0;
//     int cnt=1e9;
//     if(dp[i][j]!=-1)return dp[i][j];
//     for(int k=i;k<j;k++){
//         cnt=min(cnt,mat[i-1]*mat[k]*mat[j]+mcm(mat,i,k)+mcm(mat,k+1,j));
//     }
//     return dp[i][j]=cnt;
// }
// signed main(){
//     vi a;
//     int n; cin>>n;
//     dp.assign(n,vi(n,0));
//     for(int i=0;i<n;i++){int c; cin>>c; a.push_back(c); }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i+1;j<n;j++){
//             int cnt=1e9;
//             for(int k=i;k<j;k++){
//                 cnt=min(cnt,a[i-1]*a[k]*a[j]+dp[i][k]+dp[k+1][j]);
//                                  }
//      dp[i][j]=cnt;
//         }
// }
//     for(auto it:dp){
//         for(auto v:it)cout<<v<<" ";
//         cout<<endl;
//     }
// }

// int minimisecost(vi&costs,int i,int j){
//     if(i>j)return 0;
//     int cnt=1e9;
//     for(int k=i;k<=j;k++){
//         cnt=min(cnt,costs[j+1]-costs[i-1]+minimisecost(costs,i,k-1)+minimisecost(costs,k+1,j));
//     }
//     return cnt;
// }

// signed main(){
//     vi a; int len; cin>>len;
//     int n;cin>>n;
//     a.push_back(0);
//     for(int i=0;i<n;i++){int x; cin>>x; a.push_back(x);}
//     a.push_back(len);
//     vvi dp(n+2,vi(n+2,0));
//     for(int i=n;i>=1;i--){
//         for(int j=i;j<=n;j++){
//            int cnt=1e9;
//             for(int k=i;k<=j;k++){
//                 cnt=min(cnt,a[j+1]-a[i-1]+dp[i][k-1]+dp[k+1][j]);
//             }
//             dp[i][j]=cnt;
//         }
//     }
//     print dp[1][n];
// }

// partition dp ki practise krni hai
// burst ballaon problem
//  signed main(){
//      vi a;
//      int n;
//      cin>>n;
//      a.push_back(1);
//      for(int i=0;i<n;i++){
//          int x; cin>>x;
//          a.push_back(x);
//      }
//      a.push_back(1);
//      vvi dp(n+2,vi(n+2,0));
//      for(int i=n;i>=1;i--){
//          for(int j=i;j<=n;j++){
//              int cnt=0;
//              for(int k=i;k<=j;k++){
//                  cnt=max(cnt,a[j+1]*a[k]*a[i-1]+dp[i][k-1]+dp[k+1][j]);
//              }
//          dp[i][j]=cnt;
//          }
//      }
//      print dp[1][n];
//  }

// int dp[100][100][2];
// string s;
// int solve(int i,int j,bool istrue){
//     if(i>j)return 0;
//     if(i==j){
//         if(istrue)return s[i]=='T';
//         else return s[i]=='F';
//     }
//     if(dp[i][j][istrue]!=-1)return dp[i][j][istrue];
//     int ways=0;
//     for(int k=i+1;k<=j-1;k+=2){
//         int leftt=solve(i,k-1,1);
//         int leftf=solve(i,k-1,0);
//         int rightt=solve(k+1,j,1);
//         int rightf=solve(k+1,j,0);
//         if(s[k]=='&'){
//             if(istrue)ways+=leftt*rightt;
//             else ways+=leftt*rightf+rightt*leftf+leftf*rightf;
//         }
//         if(s[k]=='|'){
//             if(istrue)ways+=leftt*rightt+leftt*rightf+rightt*leftf;
//             else ways+=leftf*rightf;
//         }
//         if(s[k]=='^'){
//             if(istrue)ways+=leftt*rightf+rightt*leftf;
//             else ways+=leftt*rightt+leftf*rightf;
//         }
//     }
//     return dp[i][j][istrue]=ways;
// }
// signed main(){
//     s="T|F&T&T|F&T";
//     memset(dp,-1,sizeof(dp));
//     print solve(0,s.size()-1,1);
// }

// palindrom partioing 2
//  int dp[100];
//  int solve(int i,string &s){
//      if(i==s.size())return 0;
//      if(dp[i]!=-1)return dp[i];
//      int t=1e9;
//      int n=s.size();
//      string temp="";
//      for(int j=i;j<n;j++){
//          temp+=s[j];
//          if(temp==string(temp.rbegin(),temp.rend())){
//              t=min(t,1+solve(j+1,s));
//          }
//      }
//      return dp[i]=t;
//  }
//  signed main(){
//      string s;
//      s="sajasswaimmi";
//      memset(dp,-1,sizeof(dp));
//      print solve(0,s);
//  }

// maximise the minimum cost edge:-the minimum weight edge in path from 0 to n-1 causing total weight<=k , all intermediat"NO"e should be online
// class Solution {
// public:
//     bool check(int mid, vector<vector<pair<int, int>>>& adj, vector<bool>& online, long long k) {
//     int n = online.size();
//     if (!online[0]) return false; // If the starting"NO"e isn't online, we can't start.
//     // Min-heap to store {current_path_weight,"NO"e}
//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
//     vector<long long> dist(n, LLONG_MAX);
//     pq.push({0, 0});
//     dist[0] = 0;
//     while (!pq.empty()) {
//         auto [wt,"NO"e] = pq.top();
//         pq.pop();
//         if "NO"e == n - 1) return true; // Reached the destination within budget!
//         if (wt > dist"NO"e]) continue;   // Stale optimization step
//         for (auto& u : adj"NO"e]) {
//             int next"NO"e = u.first;
//             int edge_wt = u.second;
//             // 1. Edge must satisfy the bottleneck threshold 'mid'
//             // 2. The destination"NO"e must be online
//             if (edge_wt >= mid && online[next"NO"e]) {
//                 long long nw = wt + edge_wt;
//                 if (nw <= k && nw < dist[next"NO"e]) {
//                     dist[next"NO"e] = nw;
//                     pq.push({nw, next"NO"e});
//                 }
//             }
//         }
//     }
//     return false;
// }
//     int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
//       int n=online.size();
//       vector<vector<pair<int,int>>>adj(n);
//       long long  mini=LLONG_MAX;
//       long long maxi=LLONG_MIN;
//       for(auto it:edges){
//         adj[it[0]].push_back({it[1],it[2]});
//         mini=min(mini,1LL*it[2]);
//         maxi=max(maxi,1LL*it[2]);
//       }
//       long long ans=-1;
//       while(mini<=maxi){
//         long long mid=(mini+maxi)>>1;
//         if(check(mid,adj,online,k)){
//             ans=mid; mini=mid+1;
//         }else{
//             maxi=mid-1;
//         }
//       }
//       return ans;
//     }
// };

// class Solution {
// public:
//     int dp[201][201];
//     int m,n;
//     int solve(int i,int j,vector<vector<int>>&d){
//         if(i==m-1&&j==n-1){
//             return dp[i][j]=(d[i][j]>0)?1:1-d[i][j];
//         }
//         if(dp[i][j]!=-1)return dp[i][j];
//         int ans=1e9;
//         if(i+1<m){
//         int down=solve(i+1,j,d);
//         ans=min(ans,down);}
//         if(j+1<n){
//         int down=solve(i,j+1,d);
//         ans=min(ans,down);}
//         return dp[i][j]=max(1,ans-d[i][j]);
//     }
//     int calculateMinimumHP(vector<vector<int>>& dungeon) {
//        memset(dp,-1,sizeof(dp));
//         m=dungeon.size();
//         n=dungeon[0].size();
//        int ans=solve(0,0,dungeon);
//        return ans;
//     }
// };

// #include <vector>
// #include <string>
// #include <"NO"dered_map>

// class Solution {
// private:
//     std::"NO"dered_map<std::string, std::vector<int>> memo;

// public:
//     std::vector<int> diffWaysToCompute(std::string expression) {
//         if (memo.count(expression)) {
//             return memo[expression];
//         }
//         std::vector<int> results;
//         for (int i = 0; i < expression.length(); i++) {
//             char c = expression[i];
//                 if (c == '+' || c == '-' || c == '*') {
//                 std::vector<int> left = diffWaysToCompute(expression.substr(0, i));
//                 std::vector<int> right = diffWaysToCompute(expression.substr(i + 1));
//                 for (int l : left) {
//                     for (int r : right) {
//                         if (c == '+') {
//                             results.push_back(l + r);
//                         } else if (c == '-') {
//                             results.push_back(l - r);
//                         } else if (c == '*') {
//                             results.push_back(l * r);
//                         }
//                     }
//                 }
//             }
//         }
//         if (results.empty()) {
//             results.push_back(std::stoi(expression));
//         }
//         return memo[expression] = results;
//     }
// };    signed main(){
//         string s="2*3-4*5";
//         diffWaysToCompute(s);
//         for(auto it:ans){
//             cout<<it<<" ";
//         }
//         return 0;
//     }

// vector<string>d={"rgy","ryg","rgr","ryr","gry","gyr","gyg","grg","yry","ygy","yrg","ygr"};
// int dp[5001][13];
// int mod=1e9+7;
// int solve(int n,int prev){
//     if(n==0){
//         return 1;
//     }
//     if(dp[n][prev]!=-1)return dp[n][prev];
//     string pr=d[prev];
//     int cnt=0;
//     for(int j=0;j<12;j++){
//         int b=0;
//         for(int c=0;c<3;c++){
//             if(pr[c]==d[j][c]){b=1; break;}
//         }
//         if(b==0)cnt=(cnt+solve(n-1,j))%mod;
//     }
//     return dp[n][prev]=cnt;
// }
// int main(){
//     memset(dp,-1,sizeof(dp));
//     int cnt=0;
//     for(int i=0;i<12;i++){
//         cnt=(cnt+solve(n-1,i))%mod;
//     }
//     return cnt;
// }
// signed main(){
//     cout<<count();
// }

// class Solution {
// public:
//     vector<string>d;
//     int mod=1e9+7;
//     vector<char>c={'r','g','b'};
//     void make(int i,int m,string &s){
//         if(i==m){d.push_back(s); return;}
//         for(char t:c){
//             if(i==0||s.back()!=t){
//                 s+=t;
//                 make(i+1,m,s);
//                 s.pop_back();
//             }
//         }
//     }
//     int size;
//     vector<vector<int>>dp;
//     int solve(int r,int prev,int n,int m){
//         if(r==0)return 1;
//         if(dp[r][prev]!=-1)return dp[r][prev];
//         int cnt=0;
//         string p=d[prev];
//         for(int i=0;i<size;i++){
//             int b=0;
//             for(int j=0;j<m;j++){
//                 if(p[j]==d[i][j]){b=1; break;}
//             }
//             if(b==0)cnt=(cnt+solve(r-1,i,n,m))%mod;
//         }
//         return dp[r][prev]=cnt;
//     }
//     int colorTheGrid(int m, int n) {

//         d.clear();
//        string s="";
//        make(0,m,s);
//        size=d.size();
//        dp.assign(1001,vector<int>(size+1,-1));
//        int cnt=0;
//        for(int i=0;i<size;i++){
//         cnt=(cnt+solve(n-1,i,n,m))%mod;
//        }
//        return cnt;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// int kadane(vector<int>& nums) {
//     int maxSum = nums[0];
//     int curSum = 0;

//     for (int n : nums) {
//         curSum = max(curSum, 0LL);
//         curSum += n;
//         maxSum = max(maxSum, curSum);
//     }
//     return maxSum;
// }

// void solve(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>a(n);
//     vector<int>b(n);
//     for(auto &it:a)cin>>it;
//     for(auto &it:b)cin>>it;
//     if(k&1){
//         vector<long long> pref(n), suff(n);
//     pref[0] = a[0];
//     for (int i = 1; i < n; i++) {
//     pref[i] = max(a[i], pref[i - 1] + a[i]);
//     }
//     suff[n - 1] = a[n - 1];
//     for (int i = n - 2; i >= 0; i--) {
//     suff[i] = max(a[i], suff[i + 1] + a[i]);
//     }
//     int ans=LLONG_MIN;
//     for(int i=0;i<n;i++){
//         ans=max(ans,pref[i]+suff[i]-a[i]+b[i]);
//     }
//     cout<<ans;
//     return ;
//     }
//     cout<<kadane(a);
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
// // }

// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];
//     "NO"dered_map<int, int> prime_cnt;
//     auto get_prime_factors = [](int x) {
//         vector<int> factors;
//         for (int p = 2; p * p <= x; p++) {
//             if (x % p == 0) {
//                 factors.push_back(p);
//                 while (x % p == 0) x /= p;
//             }
//         }
//         if (x > 1) factors.push_back(x);
//         return factors;
//     };
//     for (int x : a) {
//         vector<int> pfs = get_prime_factors(x);
//         for (int p : pfs) {
//             prime_cnt[p]++;
//         }
//     }
//     for (auto& [p, count] : prime_cnt) {
//         if (count > 1) {
//             cout << 0 << "\n";
//             return;
//         }
//     }

//     for (int x : a) {
//         vector<int> cur_pfs = get_prime_factors(x);
//         for (int p : cur_pfs) prime_cnt[p]--;
//         vector<int> next_pfs = get_prime_factors(x + 1);
//         for (int p : next_pfs) {
//             if (prime_cnt[p] > 0) {
//                 cout << 1 << "\n";
//                 return;
//             }
//         }
//         for (int p : cur_pfs) prime_cnt[p]++;
//     }
//     cout << 2 << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n);
//     for (auto &it : a) cin >> it;
//     for (auto &it : b) cin >> it;
//     if (a[n - 1] != b[n - 1])
//     {
//         cout << "NO";
//         return;
//     }
//     vector<int>xores(n);
//     for (int i = n - 2; i >= 0; i--)
//     {   bool f1=0,f2=0;
//         if (a[i] != b[i])
//         {   if((a[i] ^ a[i + 1]) == b[i])f1=1;
//             else if(((a[i]^xores[i+1])== b[i]))f2=1;
//            else{ cout << "NO";
//             return;}
//         }
//         if(f1&& a[i]!=b[i])xores[i]=(a[i]^a[i+1]);
//         if(f2&& a[i]!=b[i])xores[i]=(a[i]^xores[i+1]);
//     }
//     cout <<"YES";
// }
// signed main()
// {
//     cin.tie(0);
//     cin.sync_with_stdio(0);
//     cout.tie(0);
//     cout.sync_with_stdio(0);
//     int t = 1;
//     cin >> t;
//    while (t--)
//     {
//         solve();
//         cout << "\n";
        
//     }
// return 0;
// }



#include<bits/stdc++.h>

using namespace std;
const int NMAX = 2e5+5;
int dp[NMAX], id[NMAX];
vector<pair<int,int>> edg[NMAX];
void dfs(int u){
    for(auto it : edg[u]){
        if(dp[it.first] == 0){
            dp[it.first] = dp[u] + (it.second <= id[u]);
            id[it.first] = it.second;
            dfs(it.first);
        }
    }
}
void tc(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) dp[i] = id[i] = 0, edg[i].clear();
    for(int i=1; i<n; i++){
        int u,v;
        cin>>u>>v;
        edg[u].push_back({v,i});
        edg[v].push_back({u,i});
    }
    dp[1] = 1;
    dfs(1);
    int ans = 0;
    for(int i=1; i<=n; i++) ans=max(ans,dp[i]);
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
        tc();
    return 0;
}