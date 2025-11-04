#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[100][100] = { 0, }, t, total = 0;

    cin >> t;

    for(int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        for(int j = m; j < m + 10; j++) {
            for(int k = n; k < n + 10; k++) {
                matrix[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            total += matrix[i][j];
        }
    }

    cout << total;

    return 0;
}