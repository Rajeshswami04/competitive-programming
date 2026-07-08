
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
        int n; cin>>n;
        vector<int>v(n);
        for(auto &it:v)cin>>it;
        int co=0;
        for(int i=1;i<n;i++)co+=abs(v[i]-v[i-1]);
        if(co==0){cout<<1; return;}
        set<int>st(begin(v),end(v));
        if(st.size()==1){cout<<1; return ;}
        if(st.size()==2&&n==2){cout<<n; return;}
        int cnt=1;
        int val=-1;
        int prev=*(st.begin());
        auto it=st.begin(); it++;
        val=*it - prev;
        it++;
        for(;it!=st.end();it++){
            int diff=(*it)-prev;
            if(diff<=val)continue;
            else {prev= *it; diff=val; cnt++;}
        }
        cout<<cnt;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(); cout<<"\n";
    }
    return 0;
}