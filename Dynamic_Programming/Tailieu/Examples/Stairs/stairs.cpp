typedef long long ll;

#include<bits/stdc++.h>

using namespace std;

const char* INPUT = "stairs.inp";
const char* OUTPUT = "stairs.out";

int fib[1000005];

int fibo(int n)
{
    if(n <= 2) return 1;
    if(fib[n] != -1) return fib[n];

    fib[n] = fibo(n-1) + fibo(n-2);

    return fib[n];
}

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    cin.tie(0);
    cin.sync_with_stdio();

    // Code here

    int n;
    cin >> n;

    memset(fib, -1, 1000005);

    cout << fibo(n) << "\n";

    return 0;
}