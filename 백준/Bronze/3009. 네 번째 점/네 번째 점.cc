#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x[3], y[3];
    
    for(int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    if(x[1] == x[2]) cout << x[0];
    else if(x[0] == x[2]) cout << x[1];
    else cout << x[2];

    cout << " ";

    if(y[1] == y[2]) cout << y[0];
    else if(y[0] == y[2]) cout << y[1];
    else cout << y[2];

    return 0;
}