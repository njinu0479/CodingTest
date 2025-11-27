#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cur_max = 0, ovr_max = -1001;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;

        cur_max = max(t, cur_max + t);
        ovr_max = max(ovr_max, cur_max);
    }

    cout << ovr_max;

    return 0;
}