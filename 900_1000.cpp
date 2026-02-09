#include <bits/stdc++.h>
using namespace std;

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_av::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//        long long n;
//        cin>>n;
//        vector<long long>a(n);
//        int even=0; int odd=0;
//        for(int i=0;i<n;i++){cin>>a[i];
//     if(a[i]&1)odd++;
//     else even++;
//     }
//     if((odd && even==0)||(even && odd==0)){
//        for(auto it : a)cout<<it<<" ";
//        cout<<"\n"; continue;
//     }
//     sort(a.begin(),a.end());
//     for(auto it : a)cout<<it<<" ";
//        cout<<"\n";
// }
//     return 0;
// }

// int vowelConsonantScore(string s) {
//       int c=0,v=0;
//         for(char  i:s){
//             if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')v++;
//             else if( i-'a' >=0 && i-'a'<=25)c++;
//         }
//         int s1=0;
//         if(c)s1+=floor((double)v/(double)c);
//         return s1;
//     }
//     int main(){
//       cout<<vowelConsonantScore("au 123");
//     }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_av::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//        long long n;
//        cin>>n;
//        vector<vector<long long>>v;
//        long long maxi1=LLONG_MAX;
//        long long maxi2=LLONG_MAX;
//         long long ans=0;
//         for(long long i=0;i<n;i++){
//             long long n1; cin>>n1;
//             vector<long long>t(n1);
//             for(long long j=0;j<n1;j++)cin>>t[j];
//             v.push_back(t);
//             sort(v[i].begin(),v[i].end());
//             maxi1=min(maxi1,v[i][0]);
//             if(v[i][1]){maxi2=min(maxi2,v[i][1]);
//             ans+=v[i][1];
//             }
//         }
//         ans-=maxi2;
//         ans+=maxi1;
//         cout<<ans<<"\n";
// }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_av::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//        long long n,m,h;
//        cin>>n>>m>>h;
//        vector<long long>v(n);
//        for(int i=0;i<n;i++){cin>>v[i];}
//       vector<pair<int,long long>>vc;
//       int id=0;
//        for(int i=0;i<m;i++){
//         int idx; long long a;
//         cin>>idx; cin>>a;
//         vc.push_back({idx,a});
//         if(v[idx]+a >h)id=i;
//        }
//        for(int i=id;i<m;i++){v[vc[i].first]+=vc[i].second;}
//        for(auto it:v){cout<<it<<" ";}
//        cout<<"\n";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_av::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//        long long n,m,h;
//        cin>>n>>m>>h;
//        vector<long long>v(n);
//        for(int i=0;i<n;i++){cin>>v[i];}
//        vector<long long>vc=v;
//        for(int i=0;i<m;i++){
//         int idx; long long a;
//         cin>>idx; cin>>a;
//         if(vc[idx-1]+a >h)vc=v;
//         else vc[idx-1]+=a;
//        }
//        for(auto it:vc){cout<<it<<" ";}
//        cout<<"\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, m, h;
//         cin >> n >> m >> h;
//         vector<long long> av(n), cv(n);
//         vector<int> last_used(n, -1);
//         for (int i = 0; i < n; i++) {
//             cin >> av[i];
//             cv[i] = av[i];
//         }
//         int last = 0;
//         while (m--) {
//             int idx;
//             long long a;
//             cin >> idx >> a;
//             idx--;
//             if (last_used[idx] != last) {
//                 cv[idx] = av[idx];
//                 last_used[idx] = last;
//             }
//             if (cv[idx] + a > h) {
//                 last++;
//             } else {
//                 cv[idx] += a;
//             }
//         }
//         for (int i = 0; i < n; i++) {
//             if (last_used[i] != last)
//                 cout << av[i] << " ";
//             else
//                 cout << cv[i] << " ";
//         }
//         cout << '\n';
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using pii=pair<long long,long long>;
// bool cmp(const pair<long long, long long>& a,
//          const pair<long long, long long>& b) {
//     if (a.first != b.first)
//         return a.first > b.first;
//     return a.second < b.second;

// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//        long long n ,k;
//        cin>>n>>k;
//        vector<long long>v(n); for(int i=0;i<n;i++)cin>>v[i];
//        vector<pii>vs;
//        for(int i=0;i<n;i++){
//             long long val = v[i];
//             val=val%k;
//             if(val==0)val=k;
//             vs.push_back({val,(long long)i+1});
//        }
//        sort(vs.begin(),vs.end(),cmp);
//        for(auto it : vs){cout<<it.second<<" ";}
//        cout<<"\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0);
//     int t; cin>>t;
//     while(t--){
//         int n,m,k; cin>>n>>m>>k;
//         vector<int>a(n);
//         for(int i=0;i<n;i++)cin>>a[i];
//         set<int>b;
//         for(int i=0;i<m;i++){
//             int x; cin>>x; b.insert(x);
//         }
//         string s; cin>>s;
//         vector<pair<int,int>>befaft;
//         set<pair<int,int>>before,after;
//         for(int i=0;i<n;i++){
//             auto it =b.upper_bound(a[i]);
//             int bef=INT_MAX,aft=INT_MAX;
//             if(it!=b.end())aft=(*it)-a[i];
//             if(it!=b.begin()){it--; bef=a[i]-(*it);}
//             before.insert({bef,i});
//             after.insert({aft,i});
//             befaft.push_back({bef,aft});
//         }
//         int val=0,ans=n;
//         for(int i=0;i<k;i++){
//             if(s[i]=='R')val++;
//             else val--;
//             if(val>0){
//                 while(!after.empty()&&abs(val)>=(*after.begin()).first){
//                     auto i=(*after.begin()).second;
//                     after.erase(after.begin());
//                     before.erase(before.find({befaft[i].first,i}));
//                     ans--;
//                 }
//              }else{
//                  while(!before.empty()&&abs(val)>=(*before.begin()).first){
//                     auto i=(*before.begin()).second;
//                     before.erase(before.begin());
//                     after.erase(after.find({befaft[i].second,i}));
//                     ans--;
//                 }
//             }
//             cout<<ans<<" ";
//         }
//         cout<<"\n";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {  ios_base::sync_with_stdio(false); cin.tie(0);
// 	long long t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		long long n;
// 		cin >> n;
// 		vector<long long> a(n);
// 		for (long long i = 0; i < n; i++)
// 			cin >> a[i];
// 		vector<long long> b(n);
// 		for (long long i = 0; i < n; i++)
// 			cin >> b[i];
// 		vector<long long> longest_subarray_a(2 * n + 1, 0);
// 		vector<long long> longest_subarray_b(2 * n + 1, 0);

// 		long long counter = 1;
// 		for (int i = 1; i < n; i++)
// 		{
// 			if (a[i] == a[i - 1])
// 				counter++;
// 			else
// 			{
// 				longest_subarray_a[a[i - 1]] = max(longest_subarray_a[a[i - 1]], counter);
// 				counter = 1;
// 			}
// 		}
// 		longest_subarray_a[a[n - 1]] = max(longest_subarray_a[a[n - 1]], counter);
// 		counter = 1;
// 		for (int i = 1; i < n; i++)
// 		{
// 			if (b[i] == b[i - 1])
// 				counter++;
// 			else
// 			{
// 				longest_subarray_b[b[i - 1]] = max(longest_subarray_b[b[i - 1]], counter);
// 				counter = 1;
// 			}
// 		}
// 		longest_subarray_b[b[n - 1]] = max(longest_subarray_b[b[n - 1]], counter);
// 		long long max_freq = -1;
// 		for (int i = 1; i <= 2 * n; i++)
// 			max_freq = max(max_freq, longest_subarray_a[i] + longest_subarray_b[i]);

// 		cout << max_freq << "\n";
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//       int n;
//       cin>>n;
//       char c; cin>>c;
//       string s;
//       cin>>s;
//       s=s+s;
//       int start=INT_MIN; int last=-1;
//       for(int i=2*n-1;i>=0;i--){
//          if(s[i]=='g')last=i;
//          if(s[i]==c){
//             int diff=last-i;
//             start=max(start,diff);
//          }
//       }
//       cout<<start<<"\n";
//    }
//     return 0;
// }
// 6
// 5 r
// rggry
// 1 g
// g
// 3 r
// rrg
// 5 y
// yrrgy
// 7 r
// rgrgyrg
// 9 y
// rrrgyyygy


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n; cin>>n;
//         vector<int>v(n);
//         for(auto &x : v)cin>>x;
//         int l=0;
//         for(;l<n;l++){
//                 if(v[l]!=n-l)break;
//         }
//         int r=0;
//         for(;r<n;r++){
//                 if(v[r]==n-l)break;
//         }
//         if(l<=n-1&&r<=n-1){
//                 reverse(v.begin()+l,v.begin()+r+1);
//         }
//         for(auto i:v)cout<<i<<" ";
//         cout<<"\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// using ll =long long;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--) {
//         int n,k; cin>>n>>k;
//         string s;
//         cin>>s;
//         int l=0; int r=0;
//         int cnt=0; int ans=INT_MAX; int f=0;
//         if(n==1){
//             if(s[0]=='W')cout<<1<<"\n";
//             else cout<<0<<"\n";
//             continue;
//         }
//         while(r<n){
//             if(s[r]=='W'){cnt++;}
//             r++;
//             while(r-l+1>k){
//                 ans=min(ans,cnt);
//                 if(s[l]=='W')cnt--;
//                 l++;
//             }
            
//         }
//         // if(f)cnt=0;
//         cout<<ans<<"\n";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>>n;
//         int k=0;
//         while((1<<(k+1))<=n-1)k++;
//         for(int i=(1<<k)-1;i>=0;i--)cout<<i<<" ";
//         for(int i=(1<<k);i<n;i++)cout<<i<<" ";
//     }
      
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     v[0]=((n/2)+1);
//     int a=1;
//     int flag=0;
//     for(int i=1;i<n;i++){
//         if(flag==0){
//             v[i]=v[i-1]-a;
//             flag=1;
//         }else{
//             v[i]=v[i-1]+a;
//             flag=0;
//         }
//         a++;
//     }
//     for(auto it:v){cout<<it<<" ";}
//     cout<<"\n";
// }
      
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int mini=INT_MAX;
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mini=min(mini,v[i]);
//         maxi=max(maxi,v[i]);
//     } int f=0;
//     vector<int>vs(v.begin(),v.end());
//     sort(vs.begin(),vs.end());
//     for(int i=0;i<n;i++){
//         if(vs[i]!=v[i]){f=1; break;}
//     }
//     if(f==0){
//         cout<<-1<<"\n"; continue;
//     }
//     int ans=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(vs[i]!=v[i]){
//         int a=v[i]-mini;
//         int b=maxi-v[i];
//         ans=min(ans,max(a,b));
//     }
// }
//     if(ans==0){
//         cout<<-1<<"\n";
//     }else{
//     cout<<ans<<"\n";
// }    
// }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// long long xor_till(long long n)
// {
	
// 	long long a = n % 4;
// 	if (a == 0)
// 		return n;
// 	else if (a == 1)
// 		return 1;
// 	else if (a == 2)
// 		return n + 1;
// 	else
// 		return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {    ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		long long a,b;
// 		cin>>a>>b;
		
// 		long long cnt=LLONG_MAX;
// 		for(long long add=0;add<=32;add++){
// 			long long cb=b+add;
// 			if(cb==1)continue;
// 			long long c=add; long long ac=a;
// 			while(ac>0){
// 				c++;
// 				ac/=cb;
// 			}
// 			cnt=min(c,cnt);
// 		}
// 		cout<<cnt<<"\n";

// 	}
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {    
//     vector<long long>primes;
//     // primes.push_back(2);
//     for(long long i=2;i<=10000;i++){
//         bool idp=1;
//         for(long long j=2;j*j<=i;j++){
//             if(i%j==0){idp=0; break;}
//         }
//         if(idp)primes.push_back(i);
//     }
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		long long d; cin>>d;
//         long long p=-1; long long q=-1;
        
//         for(long long i=0;i<primes.size();i++){
//             if(primes[i]>=(1+d)){p=primes[i]; break;}
//         }
//         for(long long i=0;i<primes.size();i++){
//             if(primes[i]>=(p+d)){q=primes[i]; break;}
//         }
//         long long a=min(1LL*p*p*p,1LL*p*q);
//         cout<<a<<endl;
// 	}
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//        long long x,y,k;
//        cin>>x>>y>>k;
//        long long s= 1LL*y*k+k-1;
//        long long xx=x-1;
//        cout<<(xx+s-1)/xx + k<<"\n";
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;

// bool func(long long n){
// long long d;
// long long a=n;
// while(a){
//     d=a%10LL;
//     if(d&&n%d!=0LL)return 0;
//     a=a/10LL;
// }
// return 1;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//        long long n;
//        cin>>n;
//        while(n<=1e18){
//         if(func(n)){
//             cout<<n<<"\n";
//             break;
//         }
//         n++;
//        }
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//     int n; cin>>n;
//     string s; cin>>s;
//     stack<char>st;
//     int cnt=0;
//     for(char i:s){
//         if(st.empty()&&i==')')cnt++;
//         else if(i==')'&&st.top()=='(')st.pop();
//         if(i=='(')st.push(i);
//     }
//     cout<<cnt<<"\n";
//     } 
// }



#include<bits/stdc++.h>
using namespace std;

void  solve(){
    long long a,b;
    cin>>a>>b;
    vector<long long>v1(a);
    vector<long long>v2(b);
       long long sum=0LL;
    for(long long i=0;i<a;i++){
        cin>>v1[i];
        sum+=v1[i];
    }
    for(long long i=0;i<b;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
   long long idx=a;
    for(long long k=0;k<b;k++){
        idx-=v2[k];
        if(idx>=0)sum-=v1[idx];
    }
    cout<<sum<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){solve();}
}


