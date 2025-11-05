#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d = 2, t;
    cin >> t;

    while(t--) d = d * 2 - 1;
    cout << d * d;

    return 0;
}