#include <iostream>

using namespace std;

int n, m;
int nums[9];

void dfs(int num, int cnt) {
    if(cnt == m) {
        for(int i = 0; i < m; i++) cout << nums[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = num; i <= n; i++) {
        nums[cnt] = i;
        dfs(i, cnt + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    dfs(1, 0);

    return 0;
}