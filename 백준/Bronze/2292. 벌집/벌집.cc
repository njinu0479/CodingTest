#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 1, line = 1;
    cin >> n;

    while(n > line) {
        line += 6 * count;
        count++;
    }

    cout << count;

    return 0;
}