#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0;
    int arr[100000];

    string inFileName = "chuoi.dat";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())  
    {
        for (i = 0; i < 22; i++) 
        {
            inFile >> arr[i];
            // cout << arr[i] << " ";
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }

    for(int i = 0; i < 22; i++)
    {
        cout << arr[i] << endl;
    }

    set<int> colors;
    for(int i = 0; i < 22; i++)
    {
        if(arr[i] != 0)
            colors.insert(arr[i]);
    }

    // Result
    cout << colors.size() << endl;

    return 0;
}