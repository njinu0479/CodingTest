#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;

    int ball = 1;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        if (ball == x) {
            ball = y;
        } else if (ball == y) {
            ball = x;
        }
    }

    cout << ball;

    return 0;
}