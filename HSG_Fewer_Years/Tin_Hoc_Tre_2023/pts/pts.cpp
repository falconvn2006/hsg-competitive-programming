#include<bits/stdc++.h>

#define ll long long

using namespace std;

const int maxn = 1000000 + 5; //10^6 + 5
bool is_prime[maxn]; // mảng bool khởi tạo với các giá trị false
void sieve(int n){
    // Đánh dấu các số từ 2 đến n đều là số nguyên tố
    for (int i = 2; i <= n; i++)
        is_prime[i] = true;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * 2; j <= n; j += i)
            // Bỏ đánh dấu tất cả các số không phải số nguyên tố
                is_prime[j] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    sieve(maxn);

    while(n--)
    {
        ll k;
        cin >> k;

        int x = 0, y = 0;
        for(int i = 1; i < k; i++)
        {
            int sum = 0;
            for(int j = 1; j < k; j++)
            {
                if(is_prime[i] && is_prime[j])
                {
                    sum = i + j;
                    if(sum == k)
                    {
                        x = i, y = j;
                        break;                       
                    }
                }
            }
        }

        cout << x << " " << y;
    }

    return 0;
}