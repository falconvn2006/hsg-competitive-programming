#include<bits/stdc++.h>

using namespace std;

int c, m; // piece on the table and max amount can take
bool ok = true;
int moveAmount; // the move the bot or player will make

void WinStrategy()
{
    moveAmount = floor(c % m+1);
    c -= moveAmount;

    cout << "The bot take : " << moveAmount << endl;
    cout << "Remaining pieces are : " << c << endl;

    ok = !ok;
}

void ExpandTime()
{
    moveAmount = 1;
    c -= moveAmount;

    cout << "The bot take : " << moveAmount << endl;
    cout << "Remaining pieces are : " << c << endl;

    ok = !ok;
}

void player()
{
    cout << "Enter the amount of piece you want to take : ";
    cin >> moveAmount;

    if(moveAmount > m || moveAmount < 0)
    {
        while(moveAmount > m || moveAmount < 0)
        {
            cout << "Invalid move. Re-enter again." << endl;
            cin >> moveAmount;
        }
    }

    c -= moveAmount;

    cout << endl;
    cout << "Remaining pieces are : " << c << endl;

    ok = !ok;
}

int main()
{
    cin >> c >> m;

    while(c > 0)
    {
        player();
        if(c <= 0)
            break;

        if(c % m+1 != 0)
            WinStrategy();
        else
            ExpandTime();
    }

    if(ok) cout << "Bot wins!" << endl;
    else cout << "You win!" << endl;

    return 0;
}