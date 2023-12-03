////
//
// Solution base on VNOI BFS : https://vnoi.info/wiki/algo/graph-theory/breadth-first-search.md
//
////
#include<bits/stdc++.h>
using namespace std;


int m, n;

const int maxN = 300;
bool a[maxN][maxN], visit[maxN][maxN];
vector<int> ships;
int moveX[] = {0, 0, 1, -1};
int moveY[] = {1, -1, 0, 0};


int bfs(int sx, int sy) {
    int sizeSlicks = 1; // Biến đếm số lượng đỉnh thuộc thành phần liên thông
    queue < pair <int, int> > q;
    q.push({sx, sy});
    visit[sx][sy] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int u = x + moveX[i];
            int v = y + moveY[i];

            if (u > n || u < 1) continue;
            if (v > m || v < 1) continue;

            if (a[u][v] && !visit[u][v]) {
                ++sizeSlicks;
                visit[u][v] = true;
                q.push({u, v});
            }
        }
    }
    return sizeSlicks;
}

int main() {
    freopen("demtau.inp", "r", stdin);
    freopen("demtau.out", "w", stdout);

    cin >> n >> m;

    if (!n && !m) return 0;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) cin >> a[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i][j] && !visit[i][j]) 
                ships.push_back(bfs(i, j));

    cout << ships.size() << '\n';
}