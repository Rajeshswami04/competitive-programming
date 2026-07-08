#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int lcm (int a, int b) {
    return a / __gcd(a, b) * b;
}



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

const int MOD = 1e9 + 7;
typedef vector<vector<long long>> Matrix;
// Function to multiply two matrices
Matrix matrixMultiplication(Matrix &A, Matrix &B) {
    int m1=A.size();
    int n1=A[0].size();
    int n2=B[0].size();
    Matrix result(m1, vector<long long>(n2, 0));
    for (int i = 0; i < m1; ++i)
        for (int j = 0; j < n2; ++j)
            for (int k = 0; k < n1; ++k)
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
    return result;
}
// Function to raise matrix base to the power exponent (Just like Binary exponentiation)
Matrix matrixExponentiation( Matrix& base, int exponent) {
    if (exponent == 0) {
        Matrix identity={{1,0},{0,1}};
        return identity;
    }
    Matrix half   = matrixExponentiation(base, exponent / 2);
    Matrix result = matrixMultiplication(half, half);
    if (exponent % 2 == 1)
        result = matrixMultiplication(result, base);
    return result;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n == 0) {
        cout << "Fibonacci(" << n << ") = 0" << endl;
        return 0;
    }
    Matrix T = {{1, 1}, {1, 0}};
    Matrix mat = {{1}, {0}}; // Base case matrix: F(1) = 1, F(0) = 0
    Matrix Tn = matrixExponentiation(T, n - 1);
    Matrix result = matrixMultiplication(Tn, mat);
        // cout<<"hel";
    cout << "Fibonacci(" << n << ") = " << result[0][0] << endl;
    return 0;
}

