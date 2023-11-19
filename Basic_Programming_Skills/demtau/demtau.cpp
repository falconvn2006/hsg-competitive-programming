#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("demtau.inp", "r", stdin);
    freopen("demtau.out", "w", stdout);

    int m, n;

    cin >> m >> n;

    int arr[100][100];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    string x, y;

    return 0;
}


// int count = 0;

// int prev_x = -1;
// int prev_y = -1;

// for(int i = 0; i < m; i++)
// {
//     for(int j = 0; j < n; j++)
//     {
//         if(arr[i][j] == 1)
//         {
//             count++;

//             int x = j+1, y = i+1;

//             if(arr[i][x] == 1)
//             {
//                 while(arr[i][x] == 1)
//                 {
//                     x++;
//                 }
//             }

//             if(arr[i][x] == 0)
//             {
//                 j = x;
//                 prev_x = x;
//             }
//             else
//             {
//                 prev_x = -1;
//             }
//         }
//     }
// }