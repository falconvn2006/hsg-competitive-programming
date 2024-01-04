#include<bits/stdc++.h>

using namespace std;

const unsigned long long MOD = 998244353;

struct matrix
{
    long long x[2][2];
    matrix()
    {
        memset(x, 0, sizeof x);
    }
};

matrix operator * (matrix &a, matrix &b)
{
    matrix c;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            for(int k = 0; k < 2; k++)
                (c.x[i][j] += a.x[i][k] * b.x[k][j] % MOD) %= MOD;

    return c;
}

matrix m_pow(matrix &x, long long n)
{
    if(n == 0)
    {
        matrix I;
        for(int i = 0; i < 2; i++) I.x[i][i] = 1;

        return I;
    }

    matrix tmp = m_pow(x, n/2);
    tmp = tmp * tmp;
    if(n & 1) tmp = tmp * x;
    return tmp;
}

unsigned long long fibo(unsigned long long n)
{
    matrix a;
    a.x[0][0] = a.x[0][1] = a.x[1][0] = 1;

    if(n <= 1)
    {
        return n;
    }

    a = m_pow(a, n-1);
    matrix u;
    u.x[0][0] = 1;
    matrix ans = a * u;

    return ans.x[0][0];
}

unsigned long long power(unsigned long long x, unsigned long long y, unsigned long long p)
{
 
    // Initialize answer
    int res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x);
    }
    return res % p;
}

int main()
{
    unsigned long long n, k;
    cin >> n >> k;
    
    unsigned long long ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += power(fibo(i), k, MOD);
    }

    cout << ans << "\n";
    return 0;
}