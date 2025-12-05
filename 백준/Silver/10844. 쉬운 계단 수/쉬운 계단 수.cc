#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> arr(n + 1, vector<int>(10, 0));

    for(int i = 1; i <= 9; i++) arr[1][i] = 1;

    for(int i = 2; i <= n; i++) {
        for(int j = 0; j <= 9; j++) {
            if (j == 0) {
                arr[i][j] = arr[i-1][1];
            }
            else if (j == 9) {
                arr[i][j] = arr[i-1][8];
            }
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j+1];
            }

            arr[i][j] %= 1000000000;
        }
    }

    long long total = 0;
    for(int i = 0; i <= 9; i++) {
        total += arr[n][i];
    }

    cout << total % 1000000000;

    return 0;
}