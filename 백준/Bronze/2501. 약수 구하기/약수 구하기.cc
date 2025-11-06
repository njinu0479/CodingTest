#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, ans = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            k--;
        }

        if (k == 0) {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}