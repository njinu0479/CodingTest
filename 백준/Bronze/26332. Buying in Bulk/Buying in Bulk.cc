#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int c, p;
        cin >> c >> p;

        if(c == 1) cout << c << ' ' << p << '\n' << c * p << '\n';
        else cout << c << ' ' << p << '\n' << c * p - (c - 1) * 2 << '\n';
    }

    return 0;
}