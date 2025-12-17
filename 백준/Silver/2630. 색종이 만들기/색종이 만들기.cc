#include <iostream>

using namespace std;

int arr[129][129];
int white = 0;
int blue = 0;

void solve(int x, int y, int size) {
    int check = arr[x][y];
    bool same = true;

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[i][j] != check) {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same) {
        if (check == 0) white++;
        else blue++;
        return;
    }

    int new_size = size / 2;
    solve(x, y, new_size);
    solve(x, y + new_size, new_size);
    solve(x + new_size, y, new_size);
    solve(x + new_size, y + new_size, new_size);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    solve(0, 0, n);

    cout << white << '\n';
    cout << blue << '\n';

    return 0;
}