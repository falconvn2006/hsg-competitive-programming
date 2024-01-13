#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("thongke.inp", "r", stdin);
    freopen("thongke.out", "w", stdout);

    int n;
    cin >> n;

    unordered_map<int, double> male;
    unordered_map<int, double> female;

    double min_male = INT_MAX, max_male = INT_MIN;
    double min_female = INT_MAX, max_female = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        int g, t; double c;
        cin >> g >> t >> c;

        c = round(c*10)/10;

        if(g == 1)
        {
            male.insert({t, c});

            if(c > max_male) max_male = c;
            if(c < min_male) min_male = c;
        }
        else if(g == 0)
        {
            female.insert({t, c});

            if(c > max_female) max_female = c;
            if(c < min_female) min_female = c;
        }
    }

    double male_tb = 0;
    for(auto m : male)
    {
        male_tb += m.second;
    }

    male_tb /= male.size();

    double female_tb = 0;
    for(auto f : female)
    {
        female_tb += f.second;
    }

    female_tb /= female.size();

    cout << setprecision(1) << fixed << male_tb << " " << female_tb << "\n";

    cout << setprecision(1) << fixed << min_male << " " << max_male << "\n";
    cout << setprecision(1) << fixed << min_female << " " << max_female << "\n";

    unordered_map<int, double> sum_male;
    unordered_map<int, double> sum_female;

    for(auto m : male)
    {
        sum_male[m.first] += m.second;
    }
    for(auto f : female)
    {
        sum_female[f.first] += f.second;
    }

    int tb_max_male = 0, tb_max_female = 0;
    double tb_max_male_h = 0.0, tb_max_female_h = 0.0;
    for(auto sm : sum_male)
    {
        int count = 0;
        for(auto m : male)
        {
            if(sm.first == m.first)
                count++;
        }

        double val = sm.second / count;
        if(val > tb_max_male_h)
        {
            tb_max_male_h = val;
            tb_max_male = sm.first;
        }
    }

    for(auto sf : sum_female)
    {
        int count = 0;
        for(auto f : female)
        {
            if(sf.first == f.first)
                count++;
        }

        double val = sf.second / count;
        if(val > tb_max_female_h)
        {
            tb_max_female_h = val;
            tb_max_female = sf.first;
        }
    }

    cout << tb_max_male << " " << tb_max_female;
    return 0;
}