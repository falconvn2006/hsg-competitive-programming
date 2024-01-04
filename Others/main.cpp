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

int main()
{
    faster;

    int n;
    cin >> n;

    int arr[1000005];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int dp[1000005];
    
    for(int i = 0; i < n; i++)
    {
        dp[i] = 1;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] >= arr[j])
            {
                if(dp[j]+1 > dp[i]) dp[i] = dp[j]+1;
            }
        }
    }

    cout << *max_element(dp, dp+n) << "\n";

    return 0;
}