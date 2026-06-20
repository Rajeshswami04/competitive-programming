#include<bits/stdc++.h>
using namespace std;
//partition dp 
//scramble string 

// unordered_map<string,int>mp;
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


//2218

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

