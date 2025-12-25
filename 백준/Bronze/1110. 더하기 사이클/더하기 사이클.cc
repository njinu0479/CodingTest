#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp, cnt = 0;
    cin >> n;

    tmp = n;
    while(1) {
        tmp = tmp % 10 * 10 + (tmp / 10 + tmp % 10) % 10;
        cnt++;
        if(tmp == n) break;
    }

    cout << cnt;

    return 0;
}