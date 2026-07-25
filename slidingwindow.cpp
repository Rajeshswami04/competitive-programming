// #include<bits/stdc++.h>/
// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque<int>dq;
//         int l=0; int n=nums.size();
//         vector<int>ans;
//         for(int r=0;r<n;r++){
//             while(!dq.empty()&&nums[dq.back()]<=nums[r])dq.pop_back();
//             dq.push_back(r);
//             if(!dq.empty()&&l>dq.front())dq.pop_front();
//             if(r-l+1==k){
//                 ans.push_back(nums[dq.front()]);
//                 l++;
//             }

//         }
//         return ans;
// }

    // https://leetcode.com/problems/max-value-of-equation/description/
    // modify the equation given in question yi+yj+|xi-xj| => yi+yj+xj-xi try to maximise yi-xi


//     class Solution {
// public:
//     string minWindow(string s, string t) {
//         unordered_map<char,int>mpp;
//         for(char c : t)mpp[c]++;
//         int l=0; int right=s.size();
//         int left=-1;
//         if(s.size()<t.size())return "";
//         unordered_map<char,int>freq;
//         auto check=[&](unordered_map<char,int>&m1,unordered_map<char,int>&m2){
//             for(auto it:m1){if(m2.count(it.first)==0||it.second>m2[it.first])return 0;}
//             return 1;
//         };
//             for(int i=0;i<s.size();i++){
//             freq[s[i]]++;
//             while(check(mpp,freq)&&l<=i){
//                 if(right-left>i-l){left=l; right=i;}
//                 freq[s[l]]--; if(freq[s[l]]==0)freq.erase(s[l]); l++;
//             }
//         }
//         if(left==-1)return "";
//         return s.substr(left,right-left+1);
//     }
// };


// class Solution {
// public:
//     vector<int> findSubstring(string s, vector<string>& words) {
//         vector<int> ans;
//         int n = s.size();
//         int m = words.size();
//         if (n == 0 || m == 0) return ans;
//         int w = words[0].size();
//         int total_len = m * w;
//         if (n < total_len) return ans;
//         unordered_map<string, int> word_count;
//         for (const string& word : words) {
//             word_count[word]++;
//         }

//         for (int i = 0; i < w; ++i) {
//             int left = i;
//             int right = i;
//             unordered_map<string, int> current_count;
//             int words_matched = 0;
//                 while (right + w <= n) {
//                 string word = s.substr(right, w);
//                 right += w;

//                 if (word_count.count(word)) {
//                     current_count[word]++;
//                     words_matched++;
//                     while (current_count[word] > word_count[word]) {
//                         string left_word = s.substr(left, w);
//                         current_count[left_word]--;
//                         words_matched--;
//                         left += w;
//                     }
//                      if (words_matched == m) {
//                         ans.push_back(left);
//                     }
//                 } 
//                 else {
//                     current_count.clear();
//                     words_matched = 0;
//                     left = right;
//                 }
//             }
//         }

//         return ans;
//     }
// };


// longes subarray with abs diff bw any two element of array is equal or less than limit
// int longestSubarray(vector<int>& nums, int limit) {
//         deque<int>maxd; deque<int>mind;
//         int left=0; int maxi=0;
//         int right=0; int n=nums.size();
//         for(right;right<n;right++){
//             while(!maxd.empty() && maxd.back()<nums[right])maxd.pop_back();
//             maxd.push_back(nums[right]);
//              while(!mind.empty() && mind.back()>nums[right])mind.pop_back();
//             mind.push_back(nums[right]);
//             while(abs(maxd.front()-mind.front())>limit){
//                 if(maxd.front()==nums[left])maxd.pop_front();
//                 if(mind.front()==nums[left])mind.pop_front();
//             left++;
//             }
//             maxi=max(maxi,right-left+1);
//         }
//         return maxi;
// }
 

// class Solution {
// public:
//     int maxSatisfied(vector<int>& cust, vector<int>& gry, int m) {
//        int n =cust.size();
//        vector<int>pref(n,0);
//        vector<int>ones(n,0);
//        pref[0]=(gry[0])?cust[0]:0;
//        ones[0]=gry[0];
//        for(int i=1;i<n;i++)if(gry[i]){pref[i]+=cust[i]+pref[i-1];} else pref[i]=pref[i-1];
//        for(int i=1;i<n;i++)ones[i]+=gry[i]+ones[i-1];
//        int left=-1; int right=n+1;
//        int sum=0;
//        for(int i=m-1;i<n;i++){
//         int t=pref[i]-(i-m>=0?pref[i-m]:0);
//         int tp=ones[i]-(i-m>=0?ones[i-m]:0);
//         if(t>sum&&tp>0){sum=t; left=i-m+1; right=i; }
//        }
//        sum=0;
//        vector<int>b;
//        for(int i=left;i<=right&&i<n&&i>=0;i++){
//         if(gry[i])b.push_back(cust[i]);
//        }
//        sort(begin(b),end(b));
//        int i=b.size()-1;
//        while(i>=0&&m--)sum+=b[i--];
//        for(int i=0;i<n;i++){
//         if(gry[i]==0)sum+=cust[i];
//        }
//        return sum;
//     }
// };

// Given an integer array nums and two integers left and right, return the number of
// contiguous non-empty subarrays such that the value of the maximum array 
//element in that subarray is in the range [left, right].
// class Solution {
// public:
//     int func(int m,vector<int>&nums){
//         int n=nums.size();
//         int cnt=0;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]<=m){
//                 cnt++;
//                 sum+=cnt;
//             }else{
//                 cnt=0;
//             }
//         }
//         return sum;
//     }
//     int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
//       int n=nums.size();
//       int a=func(right,nums)-func(left-1,nums);
//       return a;
//     }
// };


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define int long long
// void solve(){
//     int n,k,l,r;
//     cin>>n>>k>>l>>r;
//     vector<int>v(n);
//     for(auto &it:v)cin>>it;
//     int cnt=0;
//     unordered_map<int,int>mp;
//     int i=0;
//     int j=0;
//     for( j=0;j<n;j++){
//         mp[v[j]]++;
//         if(j-i+1>=r&&mp.size()==k){
//             int p=i;
//             while(i<j&&mp.size()==k&&j-i+1>=l)i++;
//             cnt+=i-p+1;
//             i--;
//         }
//     }
//     while(i<n&&j-i+1<=r&&j-i+1>=l&&mp.size()==k){
//         cnt++;
//         mp[v[i]]--; if(mp[v[i]]==0)mp.erase(v[i]); i++;
//     }
//     cout<<cnt;
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
//         cout<<'\n';
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// ll countAtMostK(const vector<int>& a, int n, int k, int l, int r) {
//     if (k <= 0) return 0
//     ll count = 0;
//     unordered_map<int, int> freq;
//     int distinct = 0;
//     int left = 0;
//     for (int right = 0; right < n; ++right) {
//         if (freq[a[right]] == 0) {
//             distinct++;
//         }
//         freq[a[right]]++;
//         while (distinct > k) {
//             freq[a[left]]--;
//             if (freq[a[left]] == 0) {
//                 distinct--;
//             }
//             left++;
//         }
//         int min_i = max(right - r + 1, left);
//         int max_i = right - l + 1;
//         if (min_i <= max_i) {
//             count += (max_i - min_i + 1);
//         }
//     }
//     return count;
// }
// void solve() {
//     int n, k, l, r;
//     cin >> n >> k >> l >> r;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }
//     ll ans = countAtMostK(a, n, k, l, r) - countAtMostK(a, n, k - 1, l, r);
//     cout << ans << "\n";
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


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    for(int i=1;i<n/2;i++){
            int f=n-i-1;
                int t=0;
                if(i-1>=0&&v[i]==v[i-1])t++;
                if(f+1<n&&v[f]==v[f+1])t++;
                swap(v[i],v[f]); 
                int nex=0;
                if(i-1>=0&&v[i]==v[i-1])nex++;
                if(f+1<n&&v[f]==v[f+1])nex++;
                if(nex<t){}
                else{swap(v[i],v[f]);}
    }
    int cnt=0;
    for(int i=0;i<n-1;i++){if(v[i]==v[i+1])cnt++;}
    cout<<cnt;
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
        cout<<'\n';
    }
    return 0;
}