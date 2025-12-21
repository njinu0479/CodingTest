#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        int total = 1;
        for(int j = 0; j < b; j++) {
            total = total * a % 10;
        }

        if (total == 0) cout << 10 << '\n';
        else cout << total << '\n';
    }

    return 0;
}