
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> getp() {
    int maxi = 200000;
    vector<bool> v(maxi + 1, 1);
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= maxi; i++) {
        if (v[i]) {
            for (int j = i * i; j <= maxi; j += i) {
                v[j] = 0;
            }
        }
    }
    vector<int> p;
    for (int i = 2; i <= maxi && (int)p.size() < 10001; i++) {
        if (v[i]) p.push_back(i);
    }
    return p;
}
void solve() {
    int n;
    cin>>n;
    vector<int>ans;
    vector<int>p=getp();
    ans.push_back(p[0]);
    for (int i=1;i<n;i++) {
    ans.push_back(p[i-1]*p[i]);}
    for(auto it:ans){cout<<it<<" ";}
    cout<<"\n";
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