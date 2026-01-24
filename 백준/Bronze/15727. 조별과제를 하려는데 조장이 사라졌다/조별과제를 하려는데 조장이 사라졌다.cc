#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l;
    cin >> l;

    if (l % 5 == 0) {
        cout << l / 5;
    } 
    else {
        cout << l / 5 + 1;
    }

    return 0;
}