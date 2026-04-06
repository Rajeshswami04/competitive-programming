#include<bits/stdc++.h>
using namespace std;

// #define int long long

// vector<int>seg;
// vector<int>lazy;
// void update(int st,int e,int i,int l,int r,int val){
//     if(lazy[i]!=0){
//         seg[i]=(r-l+1)*lazy[i];
//         if(l!=r){
//             lazy[2*i+1]+=lazy[i];
//             lazy[2*i+2]+=lazy[i];
//             lazy[i]=0;
//         }
//         if(e<l||st>r||l>r)return;
//         if(st<=l&&r<=e){
//             seg[i]=(r-l+1)*val;
//             if(l!=r){
//                 lazy[2*i+1]+=val;
//                 lazy[2*i+2]+=val;
//             }
//             return;
//         }
//         int mid=(l+r)/2;
//         update(st,e,2*i+1,l,mid,val);
//         update(st,e,2*i+2,mid+1,e,val);
//         seg[i]=seg[2*i+1]+seg[i*2+2];
//     }
// }



// #define int long long
// vector<int>segmin;
// vector<int>segmax;
// vector<int>lazy;
// void propagate(int i,int l,int r){
//     if(lazy[i]!=0){
//         segmin[i]+=lazy[i];
//         segmax[i]+=lazy[i];
//         if(l!=r){
//             lazy[2*i+1]+=lazy[i];
//             lazy[2*i+2]+=lazy[i];
//         }
//         lazy[i]=0;
// }
// }
// void update(int st,int e,int i,int l,int r,int val){
//     propagate(i,l,r);
    
//         if(e<l||st>r||l>r)return;
//         if(st<=l&&r<=e){
//             lazy[i]+=val;
//             propagate(i,l,r);
//             return;
//         }
//         int mid=(l+r)/2;
//         update(st,e,2*i+1,l,mid,val);
//         update(st,e,2*i+2,mid+1,r,val);
//         segmin[i]=min(segmin[2*i+1],segmin[i*2+2]);
//         segmax[i]=max(segmax[2*i+1],segmax[i*2+2]);
// }