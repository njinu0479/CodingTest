#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, total = 0, min = -1;
    cin >> m >> n;

    for(int i = n; i >= m; i--) {
        bool prime = true;

        if (i < 2) { 
            continue; 
        }

        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                prime = false;
                break;
            }
        }

        if(prime) {
            total += i;
            min = i;
        }
    }

    if(total != 0) {
        cout << total << '\n' << min;
    }
    else cout << min;

    return 0;
}