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

const char* INPUT = "qbstr.inp";
const char* OUTPUT = "qbstr.out";

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    faster;

    // Code here

    string a, b;
    cin >> a >> b;

    int dp[100][100];
    for(int i = 0; i <= a.size(); i++)
    {
        dp[i][0] = 0;
    }

    for(int i = 0; i <= b.size(); i++)
    {
        dp[0][i] = 0;
    }

    for(int i = 1; i <= a.size(); i++)
    {
        for(int j = 1; j <= b.size(); j++)
        {
            if(a[i] == b[j])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << dp[a.size()][b.size()] << "\n";

    int m = a.size(), n = b.size();

    string res = "";

    while(m != 0 || n != 0)
    {
        if(dp[m][n] == dp[m-1][n-1] + 1)
        {
            res = a[m] + res;
            m--;
            n--;
        }
        else
        {
            if(dp[m][n] == dp[m-1][n])
                m--;
            else
                n--;
        }
    }

    cout << res << "\n";

    return 0;
}