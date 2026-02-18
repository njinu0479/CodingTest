#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double w, h;
    cin >> w >> h;
    cout << fixed << setprecision(1);
    cout << (w * h) / 2.0 << "\n";

    return 0;
}