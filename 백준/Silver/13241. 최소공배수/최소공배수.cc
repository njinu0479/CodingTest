#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, ans;
    cin >> a >> b;
    ans = a * b;

    while(b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }

    cout << ans / a;

    return 0;
}