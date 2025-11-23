#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n;
int s[21][21];
bool visited[21];
int mind = 1e9;

void dfs(int idx, int cnt) {
    if (cnt == n / 2) {
        vector<int> start, link;

        for (int i = 0; i < n; i++) {
            if (visited[i]) start.push_back(i);
            else link.push_back(i);
        }

        int sscore = 0;
        int lscore = 0;

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                sscore += s[start[i]][start[j]];
                lscore += s[link[i]][link[j]];
            }
        }

        int d = abs(sscore - lscore);
        if (d < mind) mind = d;
        
        return;
    }

    for (int i = idx; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }

    dfs(0, 0);

    cout << mind;

    return 0;
}