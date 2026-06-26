#include<bits/stdc++.h>
using namespace std;
//

// int minLength(vector<int> nums, int k)
// {
//     int n = nums.size();
//     int ans = 1e9;
//     int i = 0;
//     int sum = 0;
//     int j = 0;
//     while (i < n)
//     {   while (i!=0 && i < n && nums[i] == nums[i - 1])
//           {  i++; 
//             j++;}
//         sum += nums[i];
//         if(sum>=k)ans=min(ans,i-j+1);
//         while (sum >= k && j < n && j<i)
//         {
//             sum -= nums[j++];
//             if(sum>=k)ans=min(ans,i-j+1);
            
//         }
//         i++;
//     }
//     return ans==1e9?-1:ans;
// }

//     int main(){
//    cout<<minLength({6,6,11},12);
//     }

// int func(string s, string t,int f,int sw,int c,int i,int j){
//     if(i==0&&j==0){
//         if(s[i]==t[j])return 0;
//     return min({sw,c,f});
//     }
//     if(s[i]==t[j])return func(s,t,f,sw,c,i-1,j-1);
//    int w=0;
//     w=min({
//         f+func(s,t,f,sw,c,i-1,j-1),sw+func(s,t,f,sw,c,i-1,j-1)
//     ,c+func(s,t,f,sw,c,i-1,j-1)});
//     return w;
//  }
// int minimumCost(string s, string t, int flipCost, int swapCost, int crossCost) {
// cout<<func(s,t,10,2,2,s.size()-1,t.size()-1);        
//  }
//  int main(){
//     cout<<minimumCost("010","010",10,2,2);
//  }


// long long func(string s, string t, int f, int sw, int c, int i, int j,
//                vector<vector<long long>>& dp) {
//     if(i < 0 && j < 0) return 0;
//     if(i < 0 || j < 0) return 1e9;

//     if(dp[i][j] != -1) return dp[i][j];

//     if(s[i] == t[j]) 
//         return dp[i][j] = func(s, t, f, sw, c, i-1, j-1, dp);
//     long long costFlip = f + func(s, t, f, sw, c, i-1, j-1, dp);
//     long long costSwap = 1e9;
//     for(int p = 0; p <= i; p++) {
//         for(int q = p+1; q <= i; q++) {
//             string temp = s;
//             swap(temp[p], temp[q]);
//             costSwap = min(costSwap, sw + func(temp, t, f, sw, c, i, j, dp));
//         }
//     }

//     // Cross: some other defined operation (still i-1, j-1)
//     long long costCross = c + func(s, t, f, sw, c, i-1, j-1, dp);

//     return dp[i][j] = min({costFlip, costSwap, costCross});
// }

// long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost) {
//     vector<vector<long long>> dp(s.size()+1, vector<long long>(t.size()+1, -1));
//     return func(s, t, flipCost, swapCost, crossCost, s.size()-1, t.size()-1, dp);
// }

// int main() {
//     cout << minimumCost("01000", "10111", 10, 2, 2) << endl;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Trie {
// private:
//     struct TrieNode {
//         unordered_map<char, TrieNode*> children;
//         bool endOfWord;

//         TrieNode() : endOfWord(false) {}
//     };

//     TrieNode* root;

//     // Recursive insert helper
//     void insertRecursive(TrieNode* current,  string& word, int index) {
//         if (index == word.size()) {
//             current->endOfWord = true;
//             return;
//         }

//         char ch = word[index];
//         if (current->children.find(ch) == current->children.end()) {
//             current->children[ch] = new TrieNode();
//         }

//         insertRecursive(current->children[ch], word, index + 1);
//     }

//     // Recursive search helper
//     bool searchRecursive(TrieNode* current,  string& word, int index) {
//         if (index == word.size()) {
//             return current->endOfWord;
//         }

//         char ch = word[index];
//         if (current->children.find(ch) == current->children.end()) {
//             return false;
//         }

//         return searchRecursive(current->children[ch], word, index + 1);
//     }

//     // Recursive delete helper
//     // Returns true if the parent should delete this node
//     bool deleteWord(TrieNode* current,  string& word, int index) {
//         if (index == word.size()) {
//             if (!current->endOfWord) {
//                 return false;
//             }

//             current->endOfWord = false;
//             return current->children.empty();
//         }

//         char ch = word[index];
//         auto it = current->children.find(ch);
//         if (it == current->children.end()) {
//             return false;
//         }

//         bool shouldDeleteCurrentNode =
//             deleteWord(it->second, word, index + 1);

//         if (shouldDeleteCurrentNode) {
//             delete it->second;
//             current->children.erase(ch);
//             return current->children.empty() && !current->endOfWord;
//         }

//         return false;
//     }

// public:
//     Trie() {
//         root = new TrieNode();
//     }

//     /**
//      * Iterative insert
//      */
//     void insert( string& word) {
//         TrieNode* current = root;

//         for (char ch : word) {
//             if (current->children.find(ch) == current->children.end()) {
//                 current->children[ch] = new TrieNode();
//             }
//             current = current->children[ch];
//         }

//         current->endOfWord = true;
//     }

//     /**
//      * Recursive insert
//      */
//     void insertRecursive( string& word) {
//         insertRecursive(root, word, 0);
//     }

//     /**
//      * Iterative search
//      */
//     bool search( string& word) {
//         TrieNode* current = root;

//         for (char ch : word) {
//             if (current->children.find(ch) == current->children.end()) {
//                 return false;
//             }
//             current = current->children[ch];
//         }

//         return current->endOfWord;
//     }

//     /**
//      * Recursive search
//      */
//     bool searchRecursive( string& word) {
//         return searchRecursive(root, word, 0);
//     }

//     /**
//      * Delete word
//      */
//     void deleteWord( string& word) {
//         deleteWord(root, word, 0);
//     }
// };


// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     Node*link[2];
//     bool contains(int bit){
//         return link[bit]!=nullptr;
//     }
//     Node* getnode(int bit){
//         return link[bit];
//     }
//     void put(int bit,Node*node){
//         link[bit]=node;
//     }
// };
// class Trienode{
//     Node*root;
//     public:
//     Trienode(){
//         root=new Node();
//     }
//     void insert(int num){
//         Node*temp=root;
//         for(int i=31;i>=0;i--){
//             int bit=(num>>i)&1;
//             if(!temp->contains(bit)){
//                 temp->link[bit]=new Node();
//             }
//             temp=temp->link[bit];
//         }
//     }
//     int maxxor(int num){
//         int maxxor=0;  Node*temp=root;
//         for(int i=31;i>=0;i--){
//             int bit=(num>>i)&1;
//             if(temp->contains(1-bit)){maxxor^=(1<<i); bit=1-bit;}
//             temp=temp->link[bit];
//         }
//         return maxxor;
//     }
// };
// n ^ ((1 << k) - 1)

#include<bits/stdc++.h>
using namespace std;
//   int finalElement(vector<int>nums) {
//       int maxele=INT_MIN;
//         for(auto it : nums){maxele=max(it,maxele);}
//         int n=nums.size();
//         if(nums[n-1]==maxele||nums[0]==maxele)return maxele;
//         int i=0;
//         while(nums[i]<maxele)i++;
//         while(i<n-1)i++;
//         return nums[i];
//     }

// int main(){
// cout<<finalElement({1,4});
// }


// void mergesort(vector<int>&v,int low,int mid, int high){
//   // int n=v.size();
//   vector<int>a(high-low+1);
//   int i=low; int j=mid+1; int k=0;
//   while(i<=mid&&j<=high){
//     if(v[i]<=v[j]){
//       a[k++]=v[i++];
//     }else{
//       a[k++]=v[j++];
//     }
//   }
//   while(i<=mid)a[k++]=v[i++];
//   while(j<=high)a[k++]=v[j++];
//   for(i=low;i<=high;i++){
//     v[i]=a[i-low];
//   }
// }
// void merge(vector<int>&v,int low,int high){
//   if(low>=high)return;
//   int mid=low+(high-low)/2;
//   merge(v,low,mid);
//   merge(v,mid+1,high);
//   mergesort(v,low,mid,high);
// }
//c

// void merge(int v[],int low,int mid, int high){
//   int a[high-low+1];
//   int i=low; int j=mid+1; int k=0;
//   while(i<=mid&&j<=high){
//     if(v[i]<=v[j]){
//       a[k++]=v[i++];
//     }else{
//       a[k++]=v[j++];
//     }
//   }
//   while(i<=mid)a[k++]=v[i++];
//   while(j<=high)a[k++]=v[j++];
//   for(i=low;i<=high;i++){
//     v[i]=a[i-low];
//   }
// }
// void mergesort(int v[],int low,int high){
//   if(low>=high)return;
//   int mid=low+(high-low)/2;
//   mergesort(v,low,mid);
//   mergesort(v,mid+1,high);
//   merge(v,low,mid,high);
// }
// int main(){
//  int n;
//  cin>>n;
//  int arr[n];
//  for(int i=0;i<n;i++)cin>>arr[i];
//  merge(arr,0,n-1);
//  for(int i:arr)cout<<i<<" ";
// }










// #include<bits/stdc++.h>
// using namespace std;

// vector<long long> mergeAdjacent(vector<int> nums) {
//     list<long long> a;
//     for (int x : nums) a.push_back(x);

//     auto it = a.begin();
//     while (it != a.end()) {
//         auto next = it;
//         ++next;
//         if (next == a.end()) break;

//         if (*it == *next) {
//             *it = *it + *next;
//             a.erase(next);
//             if (it != a.begin()) --it; // re-check left pair first
//         } else {
//             ++it;
//         }
//     }

//     vector<long long> ans;
//     for (long long v : a) ans.push_back(v);
//     return ans;
// }

// int main(){
// vector<long long>v=mergeAdjacent({2,2,4});
// for(auto it : v)cout<<it<<" ";
// }
// // output should be 4 ,2

// vector<long long> segmax;
// vector<long long> segmin;

// void buildtree(int l, int r, int idx, vector<int>& nums) {
//     if (l == r) {
//         segmax[idx] = segmin[idx] = nums[l];
//         return;
//     }
//     int mid = (l + r) / 2;
//     buildtree(l, mid, 2 * idx + 1, nums);
//     buildtree(mid + 1, r, 2 * idx + 2, nums);
//     segmax[idx] = max(segmax[2 * idx + 1], segmax[2 * idx + 2]);
//     segmin[idx] = min(segmin[2 * idx + 1], segmin[2 * idx + 2]);
// }

// pair<long long, long long> query(int l, int r, int idx, int ql, int qr) {
//     if (qr < l || r < ql) return {LLONG_MAX, LLONG_MIN};
//     if (ql <= l && r <= qr) return {segmin[idx], segmax[idx]};
//     int mid = (l + r) / 2;
//     auto left = query(l, mid, 2 * idx + 1, ql, qr);
//     auto right = query(mid + 1, r, 2 * idx + 2, ql, qr);
//     return {min(left.first, right.first), max(left.second, right.second)};
// }
    
//     long long countSubarrays(vector<int> nums, long long k) {
//        int n=nums.size();
//         segmax.assign(4*n,LLONG_MIN);
//         segmin.assign(4*n,LLONG_MAX);
//         buildtree(0,n-1,0,nums);
//         long long cnt=0;
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 auto it =query(0,n-1,0,i,j);
//                 long long cost=1LL*(it.second-it.first)*(j-i+1);
//                 if(cost<=k)cnt++;
//             }
//         }
//         return cnt;
//     }
// int main(){
//   cout<<countSubarrays({1,2,3},0);
// }
// class Solution {
// public:
//     int almostPalindromic(string s) {
//         int n = s.length();
//         int maxLen = 0;

//         auto isPal = [&](int l, int r) {
//             while (l < r) {
//                 if (s[l++] != s[r--]) return false;
//             }
//             return true;
//         };

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 int len = j - i + 1;
//                 if (len <= maxLen) continue; // optimisation number 1

//                 int l = i, r = j;
//                 bool mismatch = false;
//                 while (l < r) {
//                     if (s[l] == s[r]) {
//                         l++;
//                         r--;
//                     } else {
//                         if (isPal(l + 1, r) || isPal(l, r - 1)) {
//                             maxLen = max(maxLen, len);
//                         }
//                         mismatch = true;
//                         break; // optimisation number 2
//                     }
//                 }
//                 if (!mismatch) {
//                     maxLen = max(maxLen, len); // this is for true palindrom
//                 }
//             }
//         }
//         return maxLen;
//     }
// };




#include<bits/stdc++.h>
using namespace std;

// unordered_map<long long,unordered_map<double,long long>>mpp;
// int func(int i,int last,vector<int>&nums,double val, double k){
//     if(i==nums.size())return (long long)val==(long long)k&&last!=i;
//     if(mpp.count(i)&&mpp[i].count(val))return mpp[i][val];
//     double mul=1.0*val*nums[i]; 
//     double div=(val*1.0)/nums[i]; 
//     long long cnt=func(i+1,i,nums,mul,k)+func(i+1,i,nums,div,k)+func(i+1,last,nums,val,k);
//     return mpp[i][val]=cnt;
// }


    
    // bool isDigitorialPermutation(int n) {
    // int cnt=0;
    // if (n < 0) return false;
    // int a=n;
    // while(a){
    //     int pro=1;
    //     int num=a%10;
    //     while(num>1){pro*=num; num--;}
    //     cnt+=pro;
    //     a/=10;
    // }    
    // return n==cnt;
    // }
    // int main(){
    //     cout<<isDigitorialPermutation(10);
    // }

//     #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <unordered_map>

// int maxDifference(std::string s) {
//     int n = s.length();
//     if (n == 0) return 0;

//     std::unordered_map<char, int> counts;
//     int max_mpp = 0;

//     for (char c : s) {
//         counts[c]++;
//         max_mpp = std::max(max_mpp, counts[c]);
//     }

//     // Logic: If max_mpp is small enough, we can swap everyone.
//     // If not, the "overflow" of the most mppuent char must stay put.
//     if (max_mpp <= n / 2) {
//         return n;
//     } else {
//         return 2 * (n - max_mpp);
//     }
// }

// int main() {
//     std::string s = "abcdesfffffffffddddd"; // max_mpp = 3, n = 4. Result: 2 * (4 - 3) = 2
//     std::cout << "Max difference: " << maxDifference(s) << std::endl;
//     return 0;
// }


//  int mirrormppuency(string s) {
//       unordered_map<char,int>mpp;
//         for(char i:s){
//             mpp[i]++;
//         }
//         unordered_set<char>m1;
//         int cnt=0;
//         for(char i:s){
//             char m;
//             if(i<='z'&&i>='a'){m='a'+('z'-i);}
//             else { m='0'+('9'-i);}
//             if(m1.count(i)||m1.count(m))continue;
//                 cnt+=abs(mpp[i]-mpp[m]);
//                 m1.insert(i);
//                 m1.insert(m);
//         }
//         return cnt;
//     }
//     int main(){
//         cout<<
// mirrormppuency("4m7h");
//     }

#include <bits/stdc++.h>
using namespace std;

// vector<int> good(int n) {
//     unordered_map<int,int> mpp;
//     int maxi = cbrt(n); 
//     for(int a=1; a<=maxi; a++) {
//         for(int b=a; b<=maxi; b++) {
//             int t = a*a*a + b*b*b;
//             if(t <= n) {
//                 mpp[t]++;
//             }
//         }
//     }
//     vector<int> ans;
//     for(auto p : mpp) {
//         if(p.second >= 2) ans.push_back(p.first);
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }
// int main() {
//     int n = 578;
//     vector<int> res = good(4104);
//     for(int x : res) cout << x << " ";
// }
// vector<int> findValidElements(vector<int> nums) {
//     int n = nums.size();
//     if(n == 0) return {};
//     if(n==2&&nums[0]==nums[1])return {nums[0]};
//     vector<int> suf(n);
//     suf[n-1] = nums[n-1];
//     for(int i = n-2; i >= 0; i--) {
//         suf[i] = max(nums[i], suf[i+1]);
//     }

//     vector<int> ans;

//     int leftMax = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         int rightMax = (i == n-1) ? INT_MIN : suf[i+1];

//         if(i == 0 || i == n-1 || 
//            nums[i] > leftMax || nums[i] > rightMax) {
//             ans.push_back(nums[i]);
//         }

//         leftMax = max(leftMax, nums[i]);
//     }

//     return ans;
// }
//     int main(){
// vector<int>a=findValidElements({5,5});
// for(auto it:a){cout<<it<<" ";}
//     }

// string sortVowels(string s) {
//     vector<int> freq(26, 0);
//     for(char c : s) {
//         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
//             freq[c - 'a']++;
//         }
//     }
//     vector<tuple<int,int,char>> fre;
//     for(char c : {'a','e','i','o','u'}) {
//         int idx = c - 'a';
//         if(freq[idx] > 0) {
//             int pos = s.find(c);
//             fre.push_back({freq[idx], pos, c});
//         }
//     }
//     sort(fre.begin(), fre.end(), [](auto &a, auto &b){
//         if(get<0>(a) != get<0>(b))
//             return get<0>(a) > get<0>(b);
//         return get<1>(a) < get<1>(b);    
//     });
//     string ans = "";
//     for(auto &t : fre) {
//         int count = get<0>(t);
//         char c = get<2>(t);
//         ans += string(count, c);
//     }
//     int j = 0;
//     for(int i = 0; i < s.size(); i++) {
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
//             s[i] = ans[j++];
//         }
//     }
//     return s;
// }

// string sortVowels(string s) {
//        vector<int>v(26,0);
//         for(char i:s){
//             if(i=='a'||i=='e'||i=='o'||i=='i'||i=='u'){
//             v[i-'a']++;}
//         }
//         vector<tuple<int,int,char>> fre;
//         for(char i : {'a','e','i','o','u'}) {
//     int idx = i - 'a';
//     if(v[idx] != 0) {
//         int t = s.find(i);
//         fre.push_back({v[idx], t, i});
//     }
// }
//         sort(fre.begin(),fre.end(),[&](auto&a,auto&b){
//             if(get<0>(a) != get<0>(b))
//             return get<0>(a) > get<0>(b);
//         return get<1>(a) < get<1>(b);    
//         });
//         string ans="";
//         for(auto &t:fre){
//             int count=get<0>(t);
//             char c=get<2>(t);
//             ans+=string(count,c);
//         }
//         int j=0;
//         for(int i=0;i<s.size();i++){
//              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
//             s[i] = ans[j++];
//         } 
//         }
//         return s;
//     }
//     int main(){
//         string s=sortVowels("baeiou");
//         cout<<s;
//     } 
// bool check(int i,vector<int>&nums){
//         int maxi=0; bool b=0;
//         for(int j=0;j<i;j++){
//             maxi=max(nums[j],maxi);
//             if(maxi>=nums[i]){b=1; break;}
//         }
//         if(b==0)return 1;
//         if(b==1){
//             b=0;
//             maxi=0;
//             for(int j=nums.size()-1;j>i;j--){
//                 maxi=max(maxi,nums[j]);
//                 if(nums[i]<=maxi){b=1; break;}
//             }
//         }
//         if(b==1)return 0;
//         return 1;
//     }
//     vector<int> findValidElements(vector<int> nums) {
//         vector<int>ans;
//         int n=nums.size();
//         if(n==1)return nums;
//         for(int i=0;i<n;i++){
//             if(check(i,nums)){ans.push_back(nums[i]);}
//         }
//         return ans;
//     }
//     int main(){
//         vector<int>a=findValidElements({1,2,4,2,3,2});
//         for(auto it:a){cout<<it<<" ";}
//     }

// hard 3699

// class Solution {
// public:
//     const int mod=1e9+7;
//     int zigZagArrays(int n, int l, int r) {
//         int m=r-l+1;
//         vector<int>dp(m,1);
//         for(int i=2;i<=n;i++){
//             reverse(dp.begin(),dp.end());
//             int sum=0;
//             for(auto &it:dp){
//                 sum=(sum+exchange(it,sum))%mod;
//             }
//         }
//         int t=0;
//         for(int i:dp){
//             t=(t+i)%mod;
//         }
//         return (t<<1)%mod;
//     }
// };


// good point to notice here find a number in set between numsi-valdiff,numsi+valdiff
// that why put a lower bound search on numbi-diff , ensure it is le to numsi+valdiff
//hehe return answer now
//220
// bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
//       int n=nums.size();
//       set<int>st;
//       for(int i=0;i<n;i++){
//         auto it=st.lower_bound(nums[i]-valueDiff);
//         if(it!=st.end()&&(*it<=nums[i]+valueDiff))return 1;
//         st.insert(nums[i]);
//         if(i>=indexDiff){
//             st.erase(nums[i-indexDiff]);
//         }
//       }  
//       return  0;
//     }

//835 leetcode googli

// #include<bits/stdc++.h>
// using namespace std;
// #define  print  cout<<
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// #define  vvpi vector<vector<pair<int,int>>>
// int maxoverloaps(vvi&a,vvi&b)
// {
//     int n=a.size();
//     int ans=0;
//     for(int xoff=1-n;xoff<n;xoff++){
//         for(int yoff=1-n;yoff<n;yoff++){
//             int cnt=0;
//             for(int i=0;i<n;i++){
//                 for(int j=0;j<n;j++){
//                     if(i+xoff<0||j+yoff<0||i+xoff>=n||j+yoff>=n)continue;
//                     cnt+=(a[i][j]*b[i+xoff][j+yoff]);
//                 }
//             }
//             ans=max(ans,cnt);
//         }
//     }
//     return ans;
// }
// int main(){
//     vvi a={{1,1,0},{0,0,1},{1,0,1}};
//     vvi b={{0,0,0},{1,1,0},{0,0,1}};
//     cout<<maxoverloaps(a,b);
// }



// class Solution {
// public:
//     long long countMajoritySubarrays(vector<int>& nums, int target) {
//         unordered_map<int,int>mp;
//         int currsum=0;
//         int validleft=0;
//         int res=0;
//         mp[0]++;
//         for(int i:nums){
//             if(i==target){
//                 validleft+=mp[currsum];
//                 currsum++;
//             }else{
//                 currsum--;
//                 validleft-=mp[currsum];
//             }
//             mp[currsum]++;
//             res+=validleft;
//         }
//         return res;
//     }
// };


#include<bits/stdc++.h>
using namespace std;
// vector<string>ans;
//     int n; int t;
//     void solve(int i,int cnt,int prev,string s){
//         if(i==n){ans.push_back(s); return;}
//         if(prev==1){
//             s+='0';
//             solve(i+1,cnt,0,s);
//             s.pop_back();
//             }
//         else{
//            s+='0';
//             solve(i+1,cnt,0,s);
//             s.pop_back();
//             if(cnt+i<=t){
//                 s+='1';
//                 solve(i+1,cnt+i,1,s);
//                 s.pop_back();
//             }
//         }
//     }
//     void generateValidStrings(int p, int k) {
//         t=k;
//         n=p;
//         string s="";
//         solve(0,0,-1,s);
//         for(auto it:ans)cout<<it<<" ";
//     }



// 1293. Shortest Path in a Grid with Obstacles Elimination
// #define vvi vector<vector<int>>
// #define vi vector<int>
// #define pi pair<int,int>
// // #define int long long
// #define  vvpi vector<vector<pair<int,int>>>
// class Solution {
// public:
//     int shortestPath(vector<vector<int>>& grid, int k) {
//        priority_queue<vi,vector<vi>,greater<vi>>pq;
//        pq.push({0,0,0,k});
//        vvi dir={{0,1},{1,0},{-1,0},{0,-1}};
//        int m=grid.size();
//        int n=grid[0].size();
//        vector<vector<vector<int>>>vis(m,vvi(n,vi(k+1,1e9)));
//        vis[0][0][k]=0;
//        while(!pq.empty()){
//         auto it=pq.top(); pq.pop();
//         int x=it[1];
//         int y=it[2]; int st=it[0]; int kk=it[3];
//        if (x == m - 1 && y == n - 1) return st;
//         for(auto d:dir){
//             int i=x+d[0]; int j=y+d[1];
//             if(i>=0&&j>=0&&i<m&&j<n){
//                 int nk=kk-grid[i][j];
//                 if(nk>=0){
//                 if(st+1<vis[i][j][nk]){
//                     pq.push({st+1,i,j,nk});vis[i][j][nk]=st+1; }
//                 }
//                 }
//             }
//         }
       
//         return -1;
//     }
// };