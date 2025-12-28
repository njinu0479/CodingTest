#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, r, k;
    cin >> l >> r >> k;
    
    int cnt = 0;
    
    if (k == 2) {
        int start = max(l, 3);
        if (r >= start) cnt = r - start + 1;
    }
    else if (k == 3) {
        for (int i = max(l, 6); i <= r; i++) {
            if (i % 3 == 0) cnt++;
        }
    }
    else if (k == 4) {
        for (int i = max(l, 10); i <= r; i++) {
            if (i == 12) continue;
            if (i % 2 == 0) cnt++;
        }
    }
    else if (k == 5) {
        for (int i = max(l, 15); i <= r; i++) {
            if (i % 5 == 0) cnt++;
        }
    }

    cout << cnt;

    return 0;
}