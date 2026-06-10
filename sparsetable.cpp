#include<bits/stdc++.h>
using namespace std;


//maximum total subarray sum 2
//3691

class Solution {
public:
    
    vector<int>arr;
    vector<vector<int>>rmqm;
    void preprocessm(int n,int m){
        rmqm.assign(n,vector<int>(m,0));
        for(int i=0;i<n;i++){rmqm[i][0]=i;}
        for(int j=1;pow(2,j)<=n;j++){
            for(int i=0;i-1+pow(2,j)<n;i++){
               if(arr[rmqm[i][j-1]]<arr[rmqm[i+pow(2,j-1)][j-1]]){
                rmqm[i][j]=rmqm[i][j-1];}else{
                    rmqm[i][j]=rmqm[i+pow(2,j-1)][j-1];
                }
            }
        }
    }
    int qm(int l,int r){
        int t=r-l+1;
        int k=log10(t)/log10(2);
        return min(arr[rmqm[l][k]],arr[rmqm[l+t-pow(2,k)][k]]);
    }
    vector<vector<int>>rmqma;
    void preprocessma(int n,int m){
        rmqma.assign(n,vector<int>(m,0));
        for(int i=0;i<n;i++){rmqma[i][0]=i;}
        for(int j=1;pow(2,j)<=n;j++){
            for(int i=0;i-1+pow(2,j)<n;i++){
               if(arr[rmqma[i][j-1]]>arr[rmqma[i+pow(2,j-1)][j-1]]){
                rmqma[i][j]=rmqma[i][j-1];}else{
                    rmqma[i][j]=rmqma[i+pow(2,j-1)][j-1];
                }
            }
        }
    }
    int qma(int l,int r){
        int t=r-l+1;
        int k=log10(t)/log10(2);
        return max(arr[rmqma[l][k]],arr[rmqma[l+t-pow(2,k)][k]]);
    }
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        int t=log10(n)/log10(2)+1;
        arr=nums;
        preprocessm(n,t);
        preprocessma(n,t);
        set<pair<int,int>>st;
        priority_queue<pair<long long,pair<int,int>>>q;
        int fq=qma(0,n-1);
        int sq=qm(0,n-1);
        q.push({fq-sq,{0,n-1}});
        st.insert({0,n-1});
        long long ans=0;
        while(!q.empty()&&k){
            auto top=q.top();
            q.pop();
            int val=top.first;
            int l=top.second.first;
            int r=top.second.second;
            k--;
            ans+=val;
            if(l+1<=r&&!st.count({l+1,r})){
                fq=qma(l+1,r);
                sq=qm(l+1,r);
                st.insert({l+1,r});
                q.push({(long long)fq-sq,{l+1,r}});
            }
            if(r-1>=l&&!st.count({l,r-1})){
                fq=qma(l,r-1);
                sq=qm(l,r-1);
                st.insert({l,r-1});
                q.push({(long long)fq-sq,{l,r-1}});
            }
        }
        return ans;
    }
};