#include<bits/stdc++.h>
using namespace std;
// long long binpow(long long a, long long b, long long m) {
//     a %= m;
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a % m;
//         a = a * a % m;
//         b >>= 1;
//     }
//     return res;
// }


// int lcm (int a, int b) {
//     return a / __gcd(a, b) * b;
// }



// #define int long long
// signed main(){
// int n;
//     cin>>n;
// vector<bool> is_prime(n+1, true);
// is_prime[0] = is_prime[1] = false;
// for (int i = 2; i * i <= n; i++) {
//     if (is_prime[i]) {
//         for (int j = i * i; j <= n; j += i)
//             is_prime[j] = false;
//     }
// }
// vector<int>allp;
// for(int i=2;i<=n;i++){if(is_prime[i])allp.push_back(i);}
// for(int i=1;i<allp.size();i++){
//     cout<<allp[i]<<" "<<allp[i-1]<<" "<<allp[i]*allp[i-1]<<"\n";
// }
// }


// const int MOD = 1e9 + 7;
// typedef vector<vector<long long>> Matrix;
// // Function to multiply two matrices
// Matrix matrixMultiplication(Matrix &A, Matrix &B) {
//     int m1=A.size();
//     int n1=A[0].size();
//     int n2=B[0].size();
//     Matrix result(m1, vector<long long>(n2, 0));
//     for (int i = 0; i < m1; ++i)
//         for (int j = 0; j < n2; ++j)
//             for (int k = 0; k < n1; ++k)
//                 result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
//     return result;
// }
// // Function to raise matrix base to the power exponent (Just like Binary exponentiation)
// Matrix matrixExponentiation( Matrix& base, int exponent) {
//     if (exponent == 0) {
//         Matrix identity={{1,0},{0,1}};
//         return identity;
//     }
//     Matrix half   = matrixExponentiation(base, exponent / 2);
//     Matrix result = matrixMultiplication(half, half);
//     if (exponent % 2 == 1)
//         result = matrixMultiplication(result, base);
//     return result;
// }
// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     if (n == 0) {
//         cout << "Fibonacci(" << n << ") = 0" << endl;
//         return 0;
//     }
//     Matrix T = {{1, 1}, {1, 0}};
//     Matrix mat = {{1}, {0}}; // Base case matrix: F(1) = 1, F(0) = 0
//     Matrix Tn = matrixExponentiation(T, n - 1);
//     Matrix result = matrixMultiplication(Tn, mat);
//         // cout<<"hel";
//     cout << "Fibonacci(" << n << ") = " << result[0][0] << endl;
//     return 0;
// }




// const int MAXN = 1e6;
// long long fac[MAXN + 1];
// long long inv[MAXN + 1];
// /** @return x^n modulo m in O(log p) time. */
// long long exp(long long x, long long n, long long m) {
// 	x %= m;  // note: m * m must be less than 2^63 to avoid ll overflow
// 	long long res = 1;
// 	while (n > 0) {
// 		if (n % 2 == 1) { res = res * x % m; }
// 		x = x * x % m;
// 		n /= 2;
// 	}
// 	return res;
// }
// /** Precomputes n! from 0 to MAXN. */
// void factorial(long long p) {
// 	fac[0] = 1;
// 	for (int i = 1; i <= MAXN; i++) { fac[i] = fac[i - 1] * i % p; }
// }
// /**
//  * Precomputes all modular inverse factorials
//  * from 0 to MAXN in O(n + log p) time
//  */
// void inverses(long long p) {
// 	inv[MAXN] = exp(fac[MAXN], p - 2, p);
// 	for (int i = MAXN; i >= 1; i--) { inv[i - 1] = inv[i] * i % p; }
// }
// //p is modulo
// long long ncr(long long n, long long r, long long p) {
// 	return fac[n] * inv[r] % p * inv[n - r] % p;
// }
// #include<bits/stdc++.h>
// using namespace std;

//  long long powerMod(long long base, long long exp, long long mod) {
//         long long result = 1;
//         base = base % mod; // Handle base larger than mod
//         while (exp > 0) {
//             // If exp is odd, multiply base with result
//             if (exp % 2 == 1) {
//                 result = (result * base) % mod;
//             }
//             // exp must be even now; divide exp by 2 and square the base
//             exp /= 2;
//             base = (base * base) % mod;
//         }
//         return result;
//     }
//     const int mod = 1e9 + 7;
//     int sumDecoded(vector<long long>& nums) {
//         long long sum = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int w = (nums[i]) % 10;
//             long long d = nums[i] / 10;
//             string dd = to_string(d);
//             long long x = 0;
//             long long y = 0;
//             for (int j = 0; j < w; j++) {
//                 x = (1LL * x * 10 + (dd[j] - '0'))%mod;
//             }
//             for (int j = w; j < dd.size(); j++) {
//                 y = (1LL * y * 10 + (dd[j] - '0'))%mod;
//             }
//             sum = (sum + powerMod(x, y, mod)) % mod;
//         }
//         return sum;
//     }
//     int main(){
//         vector<long long>v={17752335231789};
//         cout<<sumDecoded(v);
//     }


// int dp[102][50001];
//     int solve(int i,int sum,vector<int>&nums,int flag){
//         if(i>=nums.size())return 1e9;
//         if(sum<0)return 1e9;
//         if(sum==0)return 0;
//         int cnt=1e9;
//         if(flag==0){
//             int pick=solve(i+1,sum-nums[i],nums,0);
//             int npick=solve(i+1,sum,nums,0);
//             nums[i]*=2;
//             int m=solve(i,sum-nums[i],nums,1);
//             nums[i]/=4;
//             int d=solve(i,sum-nums[i],nums,2);
//             nums[i]*=2;
//             cnt=min({cnt,pick,npick,1+m,1+d});
//         }else if(flag==1){
//             int pick=solve(i+1,sum-nums[i],nums,1);
//             int npick=solve(i+1,sum,nums,1);
//             nums[i]*=2;
//             int m=solve(i,sum-nums[i],nums,1);
//             nums[i]/=4;
//             int d=solve(i,sum-nums[i],nums,2);
//             nums[i]*=2;
//             cnt=min({cnt,pick,npick,1+m,1+d});
//         }else if(flag==2){
//             int pick=solve(i+1,sum-nums[i],nums,2);
//             int npick=solve(i+1,sum,nums,2);
//             nums[i]/=2;
//             int d=solve(i,sum-nums[i],nums,2);
//             nums[i]*=2;
//             cnt=min({cnt,pick,npick,1+d});
//         }
//         return cnt;
//     }
//     int minOperations(vector<int>& nums, int sum) {
//         int n=nums.size();
//         memset(dp,-1,sizeof(dp));
//         return solve(0,sum,nums,0);
//     }
//     int main(){
//         vector<int>a={10,2};
//         cout<<minOperations(a,13);
//     }



