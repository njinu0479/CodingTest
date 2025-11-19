#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int s, int g, int t) {
    if(n == 1) {
        cout << s << ' ' << g << '\n';
        return;
    }

    hanoi(n - 1, s, t, g);
    cout << s << ' ' << g << '\n';
    hanoi(n - 1, t, g, s);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << '\n';
    hanoi(n, 1, 3, 2);

    return 0;
}