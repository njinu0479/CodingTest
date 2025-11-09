#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, win = 0;
    cin >> n >> m;

    vector<int> c(n);
    for(size_t i = 0; i < n; i++) cin >> c[i];

    for(size_t i = 0; i < n - 2; i++) {
        for(size_t j = i + 1; j < n - 1; j++) {
            for(size_t k = j + 1; k < n; k++) {
                int sum = c[i] + c[j] + c[k];

                if(sum <= m && win < sum) {
                    win = sum;
                }
            }
        }
    }

    cout << win;

    return 0;
}