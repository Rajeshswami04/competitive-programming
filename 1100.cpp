// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// voi solve(){
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
// voi solve(){
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
// voi solve(){
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
// voi solve()
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
// voi solve()
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
// voi solve()
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
// voi solve()
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
// int func(int ix){
//     while(((ix&1)==0))ix=ix>>1;
//     return ix;
// }
// voi solve()
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

// voi solve()
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
// voi solve()
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





// #include <bits/stdc++.h>
// using namespace std;
// // #define int long long
// voi solve()
// {
//     int n;
//     // long long X;
//     cin >> n ;
//     vector<long long> a(n+1);
//     for (int i = 0; i < n; i++)
//     {int x; cin>>x; a[x]++; }
//     int ans=0;
//     for(int s=2;s<=2*n;s++){
//         int cnt=0;
//         for(int i=max(1,(s-n));i<=min(s/2,n) ;i++){
//             if(2*i==s){cnt+=a[i]/2;}
//             else cnt+=min(a[i],a[s-i]);
//         }
//         // if(s%2==0)cnt+=a[s/2]/2;
//         ans=max(ans,cnt);
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
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// voi solve()
// {
//    int n; cin>>n;
//    vector<int>a(n+1);
//    for(int i=1;i<n+1;i++)cin>>a[i];
//    vector<int>b;
//    for(int i=0;i<n;i++){
//     int d=a[i+1]-a[i];
//     if(i-d>=0)b.push_back(b[i-d]);
//     else b.push_back(i+1);
//    }
//    for(auto it : b)cout<<it<<" ";
//    cout<<"\n";
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
// voi solve()
// {
//     int n;
//     cin>>n;
//     vector<int>v(2*n);
//     for(int i=0;i<2*n;i++){
//         cin>>v[i];
//     }
//     unordered_map<int,int>freq; 
//     for(auto it:v)freq[it]++;
//     int cnt1=0; int cnt2=0;
//     int a=0,b=0,c=0;
//     for(auto it:freq){
//         if((it.second%4)==0)c++;
//         else if((it.second%4)==2)b++;
//         else if(it.second&1)a++;
//     }

//     if(a>0 || (c%2==0))cout<<a+2*b+2*c<<"\n";
//     else if(a==0&& (c&1))cout<<a+2*b+2*c-2<<"\n";
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
// #include<bits/stdc++.h>
// using namespace std;
// int numSteps(string s) {
//        int n=s.size();
//        int sum=0;
//        int t=n-1;
//        for(int i=n-1;i>=0;i--){
//             if(s[i]=='1')sum+=(s[i]-'0')*(1<<(t-i));
//        }
//        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//        pq.push({0,sum});
//        while(!pq.empty()){
//         auto it=pq.top();
//         int num=it.second; int opr=it.first;
//         pq.pop();
//         if(num==1)return opr;
//         if(num&1){pq.push({opr+1,num+1});}
//         else pq.push({opr+1,num/2});
//        }
//        return 0;
//     }
// int main(){
//     cout<<numSteps("11011011");
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// vector<int> v;

// voi build() {
//     for (int i = 1;; i++) {
//         long long c = i * (3LL * i + 1) / 2; 
//         if (c > 1e9) break;
//         v.push_back(c);
//     }
// }

// voi solve() {
//     int n;
//     cin >> n;
//     int cnt = 0, m = n;

//     while (m >= 2) {
//         auto it = upper_bound(v.begin(), v.end(), m);
//         --it;             
//         m -= *it;
//         cnt++;
//     }

//     cout << cnt << "\n";
// }

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     build();

//     int t;
//     cin >> t;
//     while (t--) solve();
// }


// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// // Function to print transitions for a specific branch (A or B)
// voi printBranchTransitions(char startChar) {
//     string branch = (startChar == 'a') ? "A" : "B";
//     char targetChar = (startChar == 'a') ? 'b' : 'a';

//     // 1. Initial Transitions to Length 4
//     cout << "// Branch " << branch << " (Starts with " << startChar << ")\n";
//     cout << "q0 --" << startChar << "--> " << branch << "_L1\n";
//     for (int i = 1; i < 4; ++i) {
//         cout << branch << "_L" << i << " --a,b--> " << branch << "_L" << (i + 1) << "\n";
//     }

//     // 2. Transition from L4 to the first 3-bit Window states
//     // After 5th char, we track the last 3 chars. 
//     // From L4, an 'a' or 'b' input creates the first 3-bit history.
//     cout << branch << "_L4 --a--> " << branch << "_aa\n"; 
//     cout << branch << "_L4 --b--> " << branch << "_ab\n"; 
//     // Note: We use 2-bit names here because the 3rd char is the one being input now.

//     // 3. Sliing Window Transitions (The Core DFA)
//     string bits[] = {"aa", "ab", "ba", "bb"};
//     for (string s : bits) {
//         // If current window is 'xy' and we input 'z', new window is 'yz'
//         // Acceptance check: If the 'x' bit (3rd from right) != startChar
        
//         for (char input : {'a', 'b'}) {
//             string next = s.substr(1) + input;
//             cout << branch << "_" << s << " --" << input << "--> " << branch << "_" << next;
            
//             // Logic: The smybol that just got pushed to the "3rd from right" position 
//             // is the first character of the current state 's'.
//             if (s[0] == targetChar) {
//                 cout << " [ACCEPTING]";
//             }
//             cout << endl;
//         }
//     }
//     cout << "--------------------------------------\n";
// }

// int main() {
//     cout << "--- DFA State Transitions (Length >= 5, 3rd from end != start) ---\n\n";
    
//     // Start State
//     cout << "q0 (Start State)\n";
    
//     // Branch A: Starts with 'a', 3rd from right must be 'b'
//     printBranchTransitions('a');
    
//     // Branch B: Starts with 'b', 3rd from right must be 'a'
//     printBranchTransitions('b');

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
// long long solve (int N, vector<int> A) {
//    long long sum=0;
//    for(int i:A)sum+=i;
//    sum=(-1)*sum;
//    long long cnt=0;
//    for(int i:A){
//     if(i<0)cnt+=(abs(i)/2); 
//     else{cnt-=1;}
//    }
//    if(cnt>=0)return sum;
//    return -1;
// }

// int main() {

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T;
//     cin >> T;
//     for(int t_i = 0; t_i < T; t_i++)
//     {
//         int N;
//         cin >> N;
//         vector<int> A(N);
//         for(int i_A = 0; i_A < N; i_A++)
//         {
//         	cin >> A[i_A];
//         }

//         long long out_;
//         out_ = solve(N, A);
//         cout << out_;
//         cout << "\n";
//     }
// }
//   #include <bits/stdc++.h>
// using namespace std;

// struct DSU {
//     vector<int> parent, size;
//     DSU(int n) {
//         parent.resize(n);
//         size.resize(n, 1);
//         iota(parent.begin(), parent.end(), 0);
//     }
//     int find(int x) {
//         if (parent[x] == x) return x;
//         return parent[x] = find(parent[x]);
//     }
//     void unite(int a, int b) {
//         a = find(a);
//         b = find(b);
//         if (a != b) {
//             if (size[a] < size[b]) swap(a, b);
//             parent[b] = a;
//             size[a] += size[b];
//         }
//     }
//     int getSize(int x) {
//         return size[find(x)];
//     }
// };

// int maxActivatedPoints(vector<vector<int>>& points) {
//     int n = points.size();
//     unordered_map<int,int> mx, my;
//     int i = 0;
//     for (auto &p : points) {
//         if (!mx.count(p[0])) mx[p[0]] = i++;
//         if (!my.count(p[1])) my[p[1]] = i++;
//     }
//     DSU dsu(i);
//     for (auto &p : points) {
//         dsu.unite(mx[p[0]], my[p[1]]);
//     }
//     unordered_map<int,int> mp;
//     for (auto &p : points) {
//         int par = dsu.find(mx[p[0]]);
//         mp[par]++;
//     }
//     int maxPoints = 0;
//     for (auto &it : mp) {
//         maxPoints = max(maxPoints, it.second);
//     }
//     vector<int> sizes;
//     for (auto &it : mp) sizes.push_back(it.second);
//     sort(sizes.rbegin(), sizes.rend());
//     if (sizes.size() >= 2) {
//         maxPoints = max(maxPoints, sizes[0] + sizes[1]);
//     }
//     return maxPoints + 1; 
// }

// int main() {
//     vector<vector<int>> points = {{2,2},{1,5}};
//     cout << maxActivatedPoints(points) << endl;
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// void solve()
// {
//    int n;
//    int k;
//    vector<int>v(n);
//    for(int i=0;i<n;i++)cin>>v[i];
//    unordered_map<int,int>mp;
//    for(int i:v)mp[i]++;
//    unordered_map<int,int>mp1;
//    int cnt=0;
//    int left=0; int right=0;
//    while(right<n){
//     mp1[v[right]]++;
//     while(left<right&&mp1[v[right]]>(mp[v[right]]/k)){mp1[v[left]]--; left++;}
//     if(mp1[v[right]]<=(mp[v[right]]/k))cnt+=right-left+1;
//     right++;
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
//    int n; cin>>n;
//    vector<int>v(n+1);
//    for(int i=1;i<=n;i++)cin>>v[i];
//    vector<int>dp(n+1,1);
//    for(int i=1;i<n;i++){
//     for(int j=2*i;j<=n;j+=i){
//         if(v[i]<v[j])dp[j]=max(dp[j],1+dp[i]);
//     }
//    }
//    int ans=0;
//    for(int i:dp)ans=max(ans,i);
//    cout<<ans<<"\n";
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
// class LFUCache {
// private:
//     int cap;
//     int size;
//     unordered_map<int, list<vector<int>>::iterator> mp; //key -> address of list of vector{key, value, freq}
//     map<int, list<vector<int>>> freq; //freq -> list of vector{key, value, freq}
    
// public:
//     LFUCache(int capacity) {
//         cap = capacity;
//         size = 0;
//     }
    
//     void makeMostFrequentlyUsed(int key) {
//         auto &vec = *(mp[key]);
        
//         int value = vec[1];
        
//         int f     = vec[2];
        
//         freq[f].erase(mp[key]);
        
//         if(freq[f].empty())
//             freq.erase(f);
        
//         f++;
        
//         freq[f].push_front(vector<int>({key, value, f}));
        
//         mp[key] = freq[f].begin();
//     }
    
//     int get(int key) {
//         if(mp.find(key) == mp.end())
//             return -1;
        
//         auto &vec = (*(mp[key]));
        
//         int value = vec[1];
        
//         makeMostFrequentlyUsed(key);
        
//         return value;
//     }
    
//     void put(int key, int value) {
//         if(cap == 0)
//             return;
        
//         if(mp.find(key) != mp.end()) {
//             auto &vec = (*(mp[key]));
//             vec[1] = value;
//             makeMostFrequentlyUsed(key);
//         }
//         else if(size < cap) {
//             size++;
//             freq[1].push_front(vector<int>({key, value, 1}));
//             mp[key] = freq[1].begin();
//         }
//         else { //Time to remove LFU or LRU if tie
            
//             auto &kaun_sa_list = freq.begin()->second;
            
//             int key_delete = (kaun_sa_list.back())[0]; //ordered_map ensures that the begin() will be th eleast frequency
            
//             kaun_sa_list.pop_back();
            
//             if(kaun_sa_list.empty())
//                 freq.erase(freq.begin()->first);
            
//             freq[1].push_front(vector<int>({key, value, 1}));
            
//             mp.erase(key_delete);
//             mp[key] = freq[1].begin();
//         }
//     }
// };





#include <bits/stdc++.h>
using namespace std;
// #define int long long

// void solve()
// {
//    int r , g, b;
//    cin >> r >> g >> b;

//    string s;
//    vector<pair<int,char>>v={{r,'R'},{g,'G'},{b,'B'}};
//    while((v[0].first&&v[1].first)||(v[1].first&&v[2].first)||(v[0].first&&v[2].first)){
//       for(auto &it : v){
//          int n=s.size();
//          if(it.first&&s.size()==0){s+=string(1,it.second); it.first--;}
//          else{
//             if(it.first){
//                if(n>2){
//                   if(s[n-2]!=it.second&&s[n-1]!=it.second){s+=string(1,it.second); it.first--;}
//                }else{
//                   if(s[n-1]!=it.second){s+=string(1,it.second); it.first--;}
//                }
//             }
//          }
//       }
//    }
//    cout << s << "\n";
// }


// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) solve();
// // }
//  unordered_map<int, unordered_map<int,int>> mp;
//     int solve(vector<int>& nums, int t, int i,int m) {
//     if (t == m) return 0;
//     if (i == nums.size()) return 0;
//     if (mp.count(i) && mp[i].count(t)) return mp[i][m];
//     int pick =1+ solve(nums, t , i + 1,(m==-1?nums[i]:m^nums[i]));
//     int notpick = solve(nums, t, i + 1,m);
//     return mp[i][m] = max(pick, notpick);
// }
//     int minRemovals(vector<int>& nums, int target) {
//     int a=solve(nums,target,0,-1);
//     if(a<0)return -1;
//     return nums.size()-a;
//     }
//     int main(){
//         vector<int>f={7,6};
//         cout<<minRemovals(f,0);
//     }



#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    int cnt = 0;
    for (int p = 2; p <= n; p += 2) {
        if (v[p-1] > v[p]) {
            cnt += (v[p-1] - v[p]);
            v[p-1] = v[p];
        }
        if (p + 1 <= n) {
            if (v[p-1] + v[p+1] > v[p]) {
                int diff = (v[p-1] + v[p+1]) - v[p];
                cnt += diff;
                v[p+1] -= diff;
            }
        }
    }
    cout << cnt << "\n";
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