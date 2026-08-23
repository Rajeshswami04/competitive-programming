#include<bits/stdc++.h>
using namespace std;

vector<int>bit;
vector<int>nums;
void build(){
    int n=nums.size();
    bit.assign(n+1,0);
    for(int i=0;i<n;i++){
        int next=i+1;
        int val=nums[i];
        while(next<=n){
        bit[next]+=val;
        next+=(next & (-next));}
    }
}
void update(int idx,int val){
    int n=nums.size();
    int diff=val-nums[idx];
        int next=idx+1;
        while(next<=n){
        bit[next]+=diff;
        next+=(next & (-next));}
}
int query(int right){
    int sum=0;
    int i=right+1;
    while(i>0){
        sum+=bit[i];
        i-=(i & (-i));
    }
    return sum;
}
int main(){
    int n=11;
    nums={3,2,1,6,5,4,-3,3,7,2,3};
    build();
    cout<<query(4)-query(-1)<<endl;
    cout<<query(6)-query(2)<<endl;
    update(4,265);
    cout<<query(10)-query(1)<<endl;
}


///
// // code
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> bit;
// vector<int> nums;
// // O(N) Linear Time Construction
// void build() {
//     int n = nums.size();
//     bit.assign(n + 1, 0);

//     for (int i = 0; i < n; i++) {
//         bit[i + 1] = nums[i];
//     }

//     for (int i = 1; i <= n; i++) {
//         int parent = i + (i & (-i));
//         if (parent <= n) {
//             bit[parent] += bit[i];
//         }
//     }
// }
// void update(int idx, int val) {
//     int n = nums.size();
//     int diff = val - nums[idx];
//     nums[idx] = val; // Keep nums synchronized

//     int i = idx + 1;
//     while (i <= n) {
//         bit[i] += diff;
//         i += (i & (-i));
//     }
// }
// // Prefix sum helper from 1 to idx
// int prefix_sum(int idx) {
//     int sum = 0;
//     while (idx > 0) { // Fixed: idx > 0 avoids infinite loop when idx == 0
//         sum += bit[idx];
//         idx -= (idx & (-idx));
//     }
//     return sum;
// }
// // Range sum query for [left, right] (0-indexed inclusive)
// int query(int left, int right) {
//     return prefix_sum(right + 1) - prefix_sum(left);
// }
// int main() {
//     nums = {3, 2, 1, 6, 5, 4, -3, 3, 7, 2, 3};
//     build();
//     cout << "Sum [0, 4]:  " << query(0, 4) << endl; // Output: 17 (3+2+1+6+5)
//     cout << "Sum [3, 6]:  " << query(3, 6) << endl; // Output: 12 (6+5+4-3)
//     cout << "Sum [7, 10]: " << query(7, 10) << endl; // Output: 15 (3+7+2+3)
//     return 0;
// }