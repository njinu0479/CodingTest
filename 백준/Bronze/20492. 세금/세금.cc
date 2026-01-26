#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int case1 = n * 78 / 100;
    int tax2 = (n * 20 / 100) * 22 / 100;
    int case2 = n - tax2;

    cout << case1 << " " << case2;

    return 0;
}