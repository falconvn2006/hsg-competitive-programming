#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

vector<int> factor_count(100009, -1);

void count_factor(int number, vector<int>& factor_count) {
    int count = 0;
    int factor = 2;
    int tmp = number;
    while (factor <= tmp) {
        if (tmp % factor == 0) {
            count++;
            tmp /= factor;
        } else {
            factor++;
        }
    }
    factor_count[number] = count;
}

int find_min_path(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            if (factor_count[matrix[i][j]] == -1) {
                count_factor(matrix[i][j], factor_count);
            }
            matrix[i][j] = factor_count[matrix[i][j]];
        }
    }

    vector<vector<int>> min_path(matrix.size(), vector<int>(matrix[0].size(), 9999999));
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            if (i == 0 && j == 0) {
                min_path[i][j] = matrix[i][j];
                continue;
            }

            int last_min_path = 9999999;
            if (i > 0) {
                last_min_path = min(last_min_path, min_path[i - 1][j]);
            }
            if (j > 0) {
                last_min_path = min(last_min_path, min_path[i][j - 1]);
            }

            min_path[i][j] = last_min_path + matrix[i][j];
        }
    }

    return min_path[matrix.size() - 1][matrix[0].size() - 1];
}

int main() {
    freopen("5.in", "r", stdin);
    freopen("5.out", "w", stdout);
    int T;
    cin >> T;
    while (T > 0) {
        T--;

        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        cout << find_min_path(matrix) << endl;
    }

    return 0;
}
