#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, w, v;
    cin >> a >> w >> v;

    if(a <= w / v) cout << 1;
    else cout << 0;

    return 0;
}