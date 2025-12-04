#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, m;
    cin >> k >> m;

    if(k % m == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}