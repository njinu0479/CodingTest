#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, w, h, xmin = 0, ymin = 0;
    cin >> x >> y >> w >> h;

    if(x < w - x) xmin = x;
    else xmin = w - x;

    if(y < h - y) ymin = y;
    else ymin = h - y;

    if(xmin < ymin) cout << xmin;
    else cout << ymin;

    return 0;
}