#include<bits/stdc++.h>
using namespace std;
#define  print  cout<<
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
#define int long long
#define  vvpi vector<vector<pair<int,int>>>
vector<int> findDivisors(int n) {
    vector<int> divisors;
    divisors.push_back(n);
    // Loop only up to the square root of n
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i); // 'i' is a divisor
            
            // Check to avoid duplicate for perfect squares (like 6 * 6 = 36)
            if (i != n / i) {
                divisors.push_back(n / i); // 'n/i' is the paired divisor
            }
        }
    }
    
    // Optional: Sort the divisors if you want them in ascending order
    sort(divisors.begin(), divisors.end());
    
    return divisors;
}
void solve()
{
   int n,k;
   cin>>n>>k;
   unordered_set<int>v;
   for(int i=1;i<=n;i++){int c; cin>>c; v.insert(c);}
   set<int>st;
   unordered_map<int,unordered_set<int>>divs;
   for(auto it:v){
    vi div=findDivisors(it);
    for(int i:div){st.insert(i); divs[it].insert(i);}
   }
   unordered_set<int>vis;
   unordered_set<int>toerase;
   for(auto it:st){
    int p=it;
    if(vis.find(p)!=vis.end()){toerase.insert(it); continue;}
    while(p<=k){
        if(v.find(p)==v.end()){toerase.insert(it); break;}
        vis.insert(p);
        p+=it;}
   }
   for(auto it:toerase)st.erase(it);
   for(auto it:v){
    
    int b=0;
    for(int i:divs[it]){if(st.find(i)!=st.end()){b=1; break;}}
    if(b==0){cout<<-1; return;}
   }
   cout<<st.size()<<'\n';
   for(auto it:st)cout<<it<<" ";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define  print  cout<<
#define vvi vector<vector<int>>
#define vi vector<int>
#define pi pair<int,int>
#define int long long
#define  vvpi vector<vector<pair<int,int>>>

void solve()
{
   int n, k;
   cin >> n >> k;
   
   vi a(n);
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
       cin >> a[i];
       mp[a[i]] = -1; 
   }
   sort(a.begin(), a.end());
   set<int> st;
   for(int i = 0; i < n; i++) {
       if(mp[a[i]] == -1) {
           for(int j = a[i]; j <= k; j += a[i]) {
               if(mp.find(j) == mp.end()) { 
                   cout << -1; 
                   return;
               }
               if(mp[j] == 1) continue; 
               mp[j] = 1;
           }
           st.insert(a[i]);
       }
   }
   
   cout << st.size() << '\n';
   for(auto it : st) cout << it << " ";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}