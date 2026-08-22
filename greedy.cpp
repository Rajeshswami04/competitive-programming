#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int dp[501][501];
int solve(vector<int>&v,int low,int high){
    if(high<=low)return 0;
    if(high-low==1){return min(v[low],v[high]);}
    long long sum=0;
    for(int i=low;i<=high;i++)sum+=v[i];
    int ans=0;
    int p=0;
    for(int i=low;i<=high-1;i++){
        p+=v[i];
        sum-=v[i];
        if(p<sum){ans=max(ans,solve(v,low,i)+p);}
        else if(sum<p){ans=max(ans,sum+solve(v,i+1,high));}
        else{ return p+max(solve(v,low,i),solve(v,i+1,high));}
    }
    return ans;
}
signed main(){
    vector<int>v={68,75,25,50,34,29,77,1,2,69};
    cout<<solve(v,0,v.size()-1);
}