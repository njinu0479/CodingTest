#include <iostream>

using namespace std;

int combination(int n, int k) {
    int dp[31][31];

    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
        dp[i][i] = 1;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= k && j < i; j++) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    return dp[n][k];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        cout << combination(m, n) << '\n';
    }

    return 0;
}