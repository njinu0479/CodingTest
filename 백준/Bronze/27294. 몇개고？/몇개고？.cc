#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, s;
    cin >> t >> s;

    if (s == 0 && t >= 12 && t <= 16) {
        cout << 320;
    } else {
        cout << 280;
    }

    return 0;
}