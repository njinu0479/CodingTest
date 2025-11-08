#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n, min = 1001;
    cin >> a >> b >> n;

    while(n--) {
        int cost, node;
        cin >> cost >> node;
        
        bool dir = false, valid = false;

        for(int i = 0; i < node; i++) {
            int j;
            cin >> j;

            if(j == a) dir = true;
            if(j == b && dir) valid = true;
        }

        if(min > cost && valid) min = cost;
    }

    if(min != 1001) cout << min;
    else cout << -1;

    return 0;
}