#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total = 0;
    char s[101];

    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        total += (int)s[i] - '0';
    }

    cout << total;

    return 0;
}