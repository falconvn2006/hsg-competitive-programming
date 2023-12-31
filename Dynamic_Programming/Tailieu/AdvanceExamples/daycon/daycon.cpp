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

const char* INPUT = "daycon.inp";
const char* OUTPUT = "daycon.out";

int main()
{

    freopen(INPUT, "r", stdin);
    freopen(OUTPUT, "w", stdout);

    faster;

    // Code here
    int n;
    cin >> n;

    int arr[100004];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int dp[100004];
    dp[0] = 1;

    for(int i = 1; i < n; i++)
    {
        int tmp = 0;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[i] && dp[j] > tmp)
                tmp = dp[j];

            dp[i] = tmp+1;
        }
    }

    cout << *max_element(dp, dp+n); EL;

    return 0;
}