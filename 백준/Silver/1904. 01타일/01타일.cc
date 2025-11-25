#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long a = 1, b = 2, cur = 0;

    if(n == 1) {
        cout << 1;
        return 0;
    }
    if(n == 2) {
        cout << 2;
        return 0;
    }

    for(int i = 3; i <= n; i++) {
        cur = (a + b) % 15746;
        a = b;
        b = cur;
    }

    cout << cur;

    return 0;
}