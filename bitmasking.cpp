#include<bits/stdc++.h>
using namespace std;



// int n=3;
// int c=1<<n;
// int main(){
//     for(int mask=0;mask<c;mask++){
//         for(int i=0;i<n;i++){
//             if((mask&(1<<i))){
//                 cout<<i+1<<" ";
//             }
//         }
//         cout<<"null\n";
//     }
// }

//subset of given mask
// int mask=7;
// int main(){
// for (int submask = mask;; 
//      submask = (submask - 1) & mask)
// {
//     cout<<submask<<" ";
//     if(submask == 0)
//         break;
// }
// }


// //fliping bits
// uint32_t fnc(uint32_t n){
// cout<< (n^0xFFFFFFFF)<<" ";
//     return ~n;
// }
// int main(){
//     cout<<fnc(0);
// }


// int fnc(int n){
// cout<< (n^0xFFFFFFFF)<<" ";
// }
// int main(){
//     fnc(5);
// }


// reversing bits

// int fun(int n){
//     int t=0;
//     for(int i=0;i<32;i++){
//         t=t<<1;
//         t|=(n&1);
//         n>>=1;
//     }
//     return t;
// }

// int main(){
//     cout<<fun(43261596);
// }

