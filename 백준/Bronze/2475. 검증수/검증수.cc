#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total = 0;

    for(int i = 0; i < 5; i++) {
        cin >> n;

        total +=  n * n;
    }

    cout << total % 10;

    return 0;
}