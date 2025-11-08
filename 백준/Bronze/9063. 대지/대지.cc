#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x[2] = {10001, -10001}, y[2] = {10001, -10001};
    cin >> n;

    for(int i = 0; i < n; i++) {
        int xdot, ydot;
        cin >> xdot >> ydot;

        if(x[0] > xdot) x[0] = xdot;
        if(y[0] > ydot) y[0] = ydot;
        if(x[1] < xdot) x[1] = xdot;
        if(y[1] < ydot) y[1] = ydot;
    }

    cout << (x[1] - x[0]) * (y[1] - y[0]);

    return 0;
}