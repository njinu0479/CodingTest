#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, cnt;
    cin >> n;

    cnt = sqrt(n);
    cout << cnt << '\n';

    return 0;
}