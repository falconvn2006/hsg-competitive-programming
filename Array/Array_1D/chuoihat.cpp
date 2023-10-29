#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Read file
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

        inFile.close(); // Close input file
    }
    else { // Error message
        cerr << "Can't find input file " << inFileName << endl;
    }

    vector<int> vec;
    for(int i = 0; i < 22; i++)
    {
        if(arr[i] != 0)
        {
            vec.push_back(arr[i]);
            cout << arr[i] << endl;
        }
    }

    cout << endl;

    set<int> colors(vec.begin(), vec.end());

    // Result
    cout << colors.size() << endl;

    return 0;
}