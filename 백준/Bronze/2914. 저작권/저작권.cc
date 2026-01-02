#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, i;

    if (cin >> a >> i) {
        cout << a * (i - 1) + 1;
    }

    return 0;
}