#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int down, up;
    cin >> down >> up;

    if(down >= 20 && down <= 23) cout << 24 - down + up;
    else cout << up - down;

    return 0;
}