#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

bool is_padlindrome(string s)
{
    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
            return false;
    }

    return true;
}

bool solve_prime(int num)
{
    while(num > 0)
    {
        if(!is_prime(num))
        {
            return false;
        }
        num /= 10;
    }

    return true;
}

int solve(int n)
{
    int count = 0;

    int num = 0;
    while(num / 10 <= pow(10, n))
    {
        num++;
        if(!is_prime(num)) continue;
        if(!is_padlindrome(to_string(num))) continue;
        if(!solve_prime(num)) continue;

        count++;
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    cout << solve(n) << "\n";

    return 0;
}