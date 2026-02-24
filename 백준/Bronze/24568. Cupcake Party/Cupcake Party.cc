#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, s;
    cin >> r >> s;
    cout << (r * 8 + s * 3) - 28;

    return 0;
}