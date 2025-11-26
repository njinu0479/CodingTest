#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        long long a = 1, b = 1, c = 1, cur = 0;

        cin >> n;

        if(n == 1) cur = a;
        else if(n == 2) cur = b;
        else if(n == 3) cur = c;
        else {
            for(int j = 4; j <= n; j++) {
                cur = a + b;
                a = b;
                b = c;
                c = cur;
            }
        }

        cout << cur << '\n';
    }

    return 0;
}