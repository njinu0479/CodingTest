#include <iostream>
#include <cmath>

using namespace std;

int col[15], n, cnt = 0;

bool check(int row) {
    for(int i = 0; i < row; i++) {
        if(col[row] == col[i] || abs(col[row] - col[i]) == row - i) return false;
    }

    return true;
}

void queen(int row) {
    if(row == n) {
        cnt++;
        return;
    }
    
    for(int i = 0; i < n; i++) {
        col[row] = i;

        if(check(row)) queen(row + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    queen(0);
    cout << cnt;

    return 0;
}