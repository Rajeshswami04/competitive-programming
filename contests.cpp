// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(auto &it:v)cin>>it;
//     for(int i=0;i<n-1;i++){
//         vector<int>temp;
//         if(i&1){
//             int x=-1,y=-1;
//             for(int j=0;j<v.size()-1;j++){
//                 if((v[j]==1&&v[j+1]==0)||(v[j]==0&&v[j+1]==1)){x=j; y=j+1;}
//             }
//             if(x!=-1){
//                 for(int j=0;j<v.size();j++){
//                     if(j==x){ temp.push_back(0); continue;}
//                     if(j==y)continue;
//                     temp.push_back(v[j]);
//                 }
//             }else{
//                 temp=v;
//             }

//         }else{
//             int x=-1,y=-1;
//             for(int j=0;j<v.size()-1;j++){
//                 if((v[j]==1&&v[j+1]==0)||(v[j]==0&&v[j+1]==1)){x=j; y=j+1;}
//             }
//             if(x!=-1){
//                 for(int j=0;j<v.size();j++){
//                     if(j==x){ temp.push_back(1); continue;}
//                     if(j==y)continue;
//                     temp.push_back(v[j]);
//                 }
//             }else{
//                 temp=v;
//             }
//         }
//         v=temp;
//     }
//     sort(begin(v),end(v));
//     if(v[0]==1){cout<<"Bessie";}else{cout<<"Elsie";}
//     cout<<"\n";
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
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     if(k<n||k>2*n-1){cout<<-1<<"\n"; return;}
//     vector<vector<int>>v(n,vector<int>(n,0));
//     if(n==k){for(int i=0;i<n;i++){
//         v[i][i]=(i+1);
//     }
//     int k=n+1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(v[i][j]==0)v[i][j]=k++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return;
// }
// int rem=2*n-k;
// int t=1;
// for(int i=0;i<rem;i++)v[i][i]=t++;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(v[i][j]==0){v[i][j]=t++;}
//     }
// }
// for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
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
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int k = 1; k <= n; k++)
        cin >> a[k];
    set<int> st;
    for (int k = 1; k <= n; k++) {
        for (int j = 0; j < a[k]; j++) {
            st.insert(j * k);
        }
    }
    for(int i=0;i<a[1];i++)st.insert(i);
    st.erase(a[0]);
    cout << st.size() << '\n';
    for (int x : st)
        cout <<x<<" ";
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