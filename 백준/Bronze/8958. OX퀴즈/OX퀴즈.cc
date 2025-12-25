#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        int sum = 0, count = 0;

        for (char c : s) {
            if (c == 'O') {
                count++;
                sum += count;
            } else {
                count = 0;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}