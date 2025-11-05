#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int line = 1;

    while (x > line) {
        x -= line;
        line++;
    }

    int num, d;

    if (line % 2 == 0) {
        num = x;
        d = (line + 1) - x;
    } else {
        num = (line + 1) - x;
        d = x;
    }

    cout << num << '/' << d;

    return 0;
}