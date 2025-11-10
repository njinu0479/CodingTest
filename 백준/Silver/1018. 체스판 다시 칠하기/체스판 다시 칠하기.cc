#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, min = 65;
    cin >> n >> m;

    vector<string> c(n);

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int w = 0, b = 0;

            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if ((k + l) % 2 == 0) {
                        if (c[k][l] == 'B') w++;
                        if (c[k][l] == 'W') b++;
                    } else {
                        if (c[k][l] == 'W') w++;
                        if (c[k][l] == 'B') b++;
                    }
                }
            }
            int cmin = w > b ? b : w;
            
            if (cmin < min) {
                min = cmin;
            }
        }
    }
    cout << min;

    return 0;
}