#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> have(n);
    for(int i = 0; i < n; i++) cin >> have[i];

    cin >> m;
    vector<int> card(m);
    for(int i = 0; i < m; i++) cin >> card[i];

    sort(have.begin(), have.end());

    for(int i = 0; i < m; i++) {
        auto it = lower_bound(have.begin(), have.end(), card[i]);
        
        if (it != have.end() && *it == card[i]) cout << 1 << " ";
        else cout << 0 << " ";
    }

    return 0;
}