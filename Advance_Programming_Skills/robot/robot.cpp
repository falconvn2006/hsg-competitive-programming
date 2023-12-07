#include<bits/stdc++.h>

using namespace std;

int main()
{

    freopen("robot.inp", "r", stdin);
    freopen("robot.out", "w", stdout);

    int n, m, k;
    cin >> n >> m >> k;

    int a[1000][1000];
    for(int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;

        a[x][y] = 1;
    }

    string move;
    cin >> move;

    int xRobot = 1, yRobot = 1;
    for(int i = 0; i < move.size(); i++)
    {
        if(move[i] == 'R')
        {
            xRobot++;
        }
        else if(move[i] == 'L')
        {
            xRobot--;
        }

        else if(move[i] == 'U')
        {
            yRobot--;
        }
        else if(move[i] == 'D')
        {
            yRobot++;
        }

        if(a[yRobot][xRobot] == 1)
        {
            cout << -1 << " " << -1 << "\n";
            exit(0);
        }
    }

    cout << yRobot << " " << xRobot << "\n";

    return 0;
}