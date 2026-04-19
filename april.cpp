
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// vector<int> getp() {
//     int maxi = 200000;
//     vector<bool> v(maxi + 1, 1);
//     v[0] = v[1] = 0;
//     for (int i = 2; i * i <= maxi; i++) {
//         if (v[i]) {
//             for (int j = i * i; j <= maxi; j += i) {
//                 v[j] = 0;
//             }
//         }
//     }
//     vector<int> p;
//     for (int i = 2; i <= maxi && (int)p.size() < 10001; i++) {
//         if (v[i]) p.push_back(i);
//     }
//     return p;
// }
// void solve() {
//     int n;
//     cin>>n;
//     vector<int>ans;
//     vector<int>p=getp();
//     ans.push_back(p[0]);
//     for (int i=1;i<n;i++) {
//     ans.push_back(p[i-1]*p[i]);}
//     for(auto it:ans){cout<<it<<" ";}
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

//  void solve() {
//     int n, k;
//     cin >> n >> k;

//     vector<int> a(n + 1), b(n + 1);
//     for (int i = 1; i <= n; i++) cin >> a[i];
//     for (int i = 1; i <= n; i++) cin >> b[i];

//     int left_end = n - k;
//     int right_start = k + 1;

//     for (int i = 1; i <= left_end; i++) {
//         if (b[i] != -1 && b[i] != a[i]) {
//             cout << "NO\n";
//             return;
//         }
//     }

//     for (int i = right_start; i <= n; i++) {
//         if (b[i] != -1 && b[i] != a[i]) {
//             cout << "NO\n";
//             return;
//         }
//     }

//     int mid_l = left_end + 1;
//     int mid_r = right_start - 1;

//     if (mid_l <= mid_r) {
//         vector<int> allowed(n + 1, 0);
//         vector<int> used(n + 1, 0);

//         for (int i = mid_l; i <= mid_r; i++) {
//             allowed[a[i]] = 1;
//         }

//         for (int i = mid_l; i <= mid_r; i++) {
//             if (b[i] == -1) continue;
//             if (!allowed[b[i]] || used[b[i]]) {
//                 cout << "NO\n";
//                 return;
//             }
//             used[b[i]] = 1;
//         }
//     }

//     cout << "YES\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

//  void solve() {
//    int n;
//    cin>>n;
//    vector<int>v1(n+1);
//    vector<int>v2(n+1);
//    for(int i=1;i<=n;i++)cin>>v1[i];
//    for(int i=1;i<=n;i++)cin>>v2[i];
//    int cnt=0;
//    for(int i=1;i<=n;i++){
//     int gcd1=v1[i];
//     if(i>1)gcd1=__gcd(gcd1,v1[i-1]);
//     int gcd2=v1[i];
//     if(i<n)gcd2=__gcd(gcd2,v1[i+1]);
//     if(i==1){if(v1[i]>gcd2){cnt++; continue;}}
//     if(i==n){if(v1[i]>gcd1){cnt++; continue;}}
//     int gc=__gcd(gcd1,gcd2);
//     int lcm= (1LL*gcd1*gcd2)/gc;
//     if(lcm<v1[i])cnt++;
//    }
//    cout<<cnt<<"\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }

//  vector<long long> getp(){
//         int maxi=200000;
//         vector<bool>v(maxi+1,1);
//         v[0]=v[1]=0;
//         for(long long i=2;i*i<=maxi;i++){
//             if(v[i]){
//                 for(long long j=i*i;j<=maxi;j+=i){
//                     v[j]=0;
//                 }
//             }
//         }
//         vector<long long>p;
//         for(long long i=2;i<=maxi&&(int)p.size()<10001;i++){
//             if(v[i])p.push_back(i);
//         }
//         return p;
//     }
//     bool primee(int x){
//         if(x==1)return 0;
//         for(int i=2;i*i<=x;i++){if(x%i==0)return 0;}
//         return 1;
//     }
//     int minOperations(vector<int>& nums) {
//         int cnt=0;
//         vector<long long>v=getp();
//         for(int idx = 0; idx < nums.size(); idx++) {
//         int i = nums[idx];
//         if(idx % 2 == 0) {  
//             if(!primee(i)) {
//                 auto it = lower_bound(v.begin(), v.end(), i);
//                 cnt += (*it - i);
//             }
//         } 
//         else {  
//             if(primee(i)) {
//                 int x = i;
//                 while(primee(x)) x++;   
//                 cnt += (x - i);
//             }
//         }
//     }
//     return cnt;
// //     }
//   const int mod=1e9+7;
//     long long power(long long a,long long b){
//         long long res=1;
//         while(b){
//             if(b&1)res=(res*a)%mod;
//             a=(a*a)%mod;
//             b>>=1;
//         }
//         return res;
//     }
//     int maxValue(vector<int> nums1, vector<int> nums0) {
//       int res=0;  
//       vector<pair<int,int>>v;
//         for(int i=0;i<nums1.size();i++){
//             v.push_back({nums1[i],nums0[i]});
//         }
//         sort(v.begin(),v.end(),[&](pair<int,int>a,pair<int,int>b){
//             if(a.first!=b.first)return a.first>b.first;
//             return a.second<b.second;
//         });
//         for(auto it:v){
//             int one=it.first; int twos=it.second;
//             res=(res*power(2,one)+(power(2,one)-1+mod)%mod)%mod;
//             res=(res*power(2,twos))%mod;
//         }
//         return res;
//     }
// const int mod = 1e9+7;

// long long power(long long a, long long b) {
//     long long res = 1;
//     while(b) {
//         if(b & 1) res = (res * a) % mod;
//         a = (a * a) % mod;
//         b >>= 1;
//     }
//     return res;
// }

// int maxValue(vector<int> nums1, vector<int> nums0) {
//     vector<pair<int,int>> v;
//     for(int i = 0; i < nums1.size(); i++) {
//         v.push_back({nums1[i], nums0[i]});
//     }

//     sort(v.begin(), v.end(), [&](auto &a, auto &b){
//         return (long long)a.first * b.second > (long long)b.first * a.second;
//     });

//     long long res = 0;

//     for(auto it : v) {
//         int one=it.first; int twos=it.second;
//         long long p = power(2, one);
//         res = (res * p + (p - 1 + mod) % mod) % mod;

//         res = (res * power(2, twos)) % mod;
//     }

//     return res;
// }
// k measn 1 k-1 means 0
//number of 0 = numeber of 1
//  #include <bits/stdc++.h>
// using namespace std;

// bool check(string &s, int L) {
//     if (L % 2) return false;

//     int n = s.size();
//     int total1 = count(s.begin(), s.end(), '1');
//     int total0 = n - total1;

//     int ones = 0;

//     // first window
//     for (int i = 0; i < L; i++) {
//         if (s[i] == '1') ones++;
//     }

//     for (int i = 0; i <= n - L; i++) {
//         int zeros = L - ones;
//         int target = L / 2;

//         if (ones == target) return true;

//         if (ones > target) {
//             if (ones - target == 1) {
//                 int outside0 = total0 - zeros;
//                 if (outside0 > 0) return true;
//             }
//         } else {
//             if (target - ones == 1) {
//                 int outside1 = total1 - ones;
//                 if (outside1 > 0) return true;
//             }
//         }

//         // slide window
//         if (i + L < n) {
//             if (s[i] == '1') ones--;
//             if (s[i + L] == '1') ones++;
//         }
//     }

//     return false;
// }

// int maxBalancedSubstring(string s) {
//     int n = s.size();
//     int low = 0, high = n, ans = 0;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (mid % 2) mid--;

//         if (mid < 0) {
//             low = (low + high) / 2 + 1;
//             continue;
//         }

//         if (check(s, mid)) {
//             ans = mid;
//             low = mid + 2;
//         } else {
//             high = mid - 2;
//         }
//     }

//     return ans;
// }

// int main() {
//     string s;
//     cin >> s;
//     cout << maxBalancedSubstring(s) << endl;
// }
// // 10110011000001101011111011011110010011100101101111100111000111010001011101101100



// #include <bits/stdc++.h>
// using namespace std;

//  void solve() {
//    string s;
//    cin>>s;
//    int n=s.size();
//    bool p=0;
//    for(int i=0;i<n-1;i++){
//     if(s[i]!='<'&&s[i+1]!='>'){p=1; break;}
//    }
//    if(p){cout<<-1<<"\n"; return;}
//    else{
//     int m1=count(s.begin(),s.end(),'<');
//     int m2=count(s.begin(),s.end(),'>');
//     cout<<n-min(m1,m2)<<"\n";
// }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
//  void solve() {
//     int n; cin>>n;
//     vector<int>v(n,0);
//     for(int i=0;i<n;i++)cin>>v[i];
//    stack<int>st;
//    for(int i=n-1;i>=0;i--){
//    int x=v[i];
//    while(!st.empty()&&x+1==st.top())st.pop();
//    st.push(x);
//  }
//  cout<<st.size()<<"\n";
// }


// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
//  void solve() {
// int n,x;
// cin>>n>>x;
// vector<vector<int>>v(n,vector<int>(3,0));
// int mx=-1e17; int jump=0;
// for(int i=0;i<n;i++){
//     cin>>v[i][0]>>v[i][1]>>v[i][2];
//     mx=max(mx,v[i][0]*v[i][1]-v[i][2]);
//     jump+=v[i][0]*(v[i][1]-1);}
// if(jump-x>=0){
//     cout<<0<<"\n"; return;
// }
// if(mx<=0){cout<<-1<<"\n";
//     return;
// }
// int r=x-jump;
// cout<< (r+mx-1)/mx<<"\n";
// }


// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }




#include <bits/stdc++.h>
using namespace std;
// #define int long long
//  void solve() {
// int n;
// cin>>n;
// if(n%2==0){
//     int x=n/2;
//     for(int i=0;i<x;i++){
//         cout<<x-i<<" "<<n-i<<" ";
//     }
//     cout<<"\n";
// }else{
//     int x=n/2;
//     for(int i=0;i<x;i++){
//         cout<<n-i-1<<" "<<1+i<<" ";
//     }
//     cout<<n<<"\n";
// }
// }


// signed
//  main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }
vector<vector<int>> colorvis(int n, int m, vector<vector<int>>& sources) {

    queue<vector<int>> q;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for(auto &it : sources) {
        int x = it[0], y = it[1], c = it[2];
        q.push({0, c, x, y});
        vis[x][y] = c;
    }
    vector<vector<int>> dir = {{-1,0},{1,0},{0,1},{0,-1}};
    while(!q.empty()) {
        int sz = q.size();
        set<pair<int,int>> st;
        for(int i=0;i<sz;i++) {
            auto it = q.front();
            q.pop();
            int dep = it[0];
            int c   = it[1];
            int x   = it[2];
            int y   = it[3];
            for(auto &d : dir) {
                int x1 = x + d[0];
                int y1 = y + d[1];
                if(x1>=0 && x1<n && y1>=0 && y1<m) {
                    if(vis[x1][y1] == 0) {
                        vis[x1][y1] = c;
                        q.push({dep+1,c,x1,y1});
                        st.insert({x1,y1});
                    }
                    else if(st.count({x1,y1})) {
                        if(c > vis[x1][y1]) {
                            vis[x1][y1] = c;
                            q.push({dep+1,c,x1,y1});
                        }
                    }
                }
            }
        }
    }

    return vis;
}

    // int main(){
    //    int n=3; int m=3;
    //    vector<vector<int>>s={{0,1,3},{1,1,5}};
    //    vector<vector<int>>v=colorvis(n,m,s);
    //    for(auto it:v){
    //     for(auto itt:it){
    //         cout<<itt<<" ";
    //     }
    //     cout<<"\n";
    //    }
    // }
#include <bits/stdc++.h>
using namespace std;

vector<long long> good(string &src) {
    vector<long long> v;
    v.push_back(0);
    for (int i = 0; i < 6; i++) {
        if (src[i] == 'D') {
            v.push_back(v.back() + 4);
        } else {
            v.push_back(v.back() + 1);
        }
    }
    return v;
}

bool check(vector<long long> &d, string &s) {
    int last = s[0] - '0';
    for (long long i = 1; i <= 6; i++) {
        if (s[d[i]] - '0' < last) return false;
        last = s[d[i]] - '0';
    }
    return true;
}

long long countGoodIntegersOnPath(long long l, long long r, string directions) {
    vector<long long> idx = good(directions);
    long long cnt = 0;
    for (long long i = l; i <= r; i++) {
        string temp = to_string(i);
        if (temp.size() < 16) {
            temp = string(16 - temp.size(), '0') + temp;
        }
        if (check(idx, temp)) cnt++;
    }
    return cnt;
}

int main() {
    cout << countGoodIntegersOnPath(8, 10, "DDDRRR");
}
