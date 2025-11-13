#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b, t, cnt = 1;
        cin >> a >> b;
        t = min(a, b);

        for(int j = 2; j <= t; j++) {
            if(a % j == 0 && b % j == 0) {
                cnt *= j;
                a /= j;
                b /= j;
                j--;
            }
        }

        cnt *= a * b;
        cout << cnt << '\n';
    }

    return 0;
}