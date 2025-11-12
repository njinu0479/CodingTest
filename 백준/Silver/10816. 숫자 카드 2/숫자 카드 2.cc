#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    vector<int> card(n);
    for(int i = 0; i < n; i++) cin >> card[i];
    sort(card.begin(), card.end());

    cin >> m;
    for(int i = 0; i < m; i++) {
        int t;
        cin >> t;

        auto lower = lower_bound(card.begin(), card.end(), t);
        auto upper = upper_bound(card.begin(), card.end(), t);

        cout << upper - lower << ' ';
    }

    return 0;
}