#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total = a * 60 * 60 + b * 60 + c + d;

    if(total < 86400) {
        cout << total / 3600 << ' ';
        total %= 3600;
        cout << total / 60 << ' ';
        total %= 60;
        cout << total;
    }
    else {
        total %= 86400;
        cout << total / 3600 << ' ';
        total %= 3600;
        cout << total / 60 << ' ';
        total %= 60;
        cout << total;
    }

    return 0;
}