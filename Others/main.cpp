#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

bool solve(int k)
{
    ll sum = 0;
    for(int i = 1; i < k; i++)
    {
        if(k % i == 0)
            sum += i;

        if(sum > k)
            return true;
    }

    if(sum > k)
        return true;
    else
        return false;
}

int main()
{
    faster;

    int l, r;
    cin >> l >> r;

    for(int i = l; i <= r; l++)
    {
        if(solve(i))
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}