#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> xi(n), xj(n);
    for(int i = 0; i < n; i++) cin >> xi[i];

    xj = xi;

    sort(xj.begin(), xj.end());
    auto last = unique(xj.begin(), xj.end());
    xj.erase(last, xj.end());

    for(int i = 0; i < n; i++) {
        auto it = lower_bound(xj.begin(), xj.end(), xi[i]);
        cout << (it - xj.begin()) << " "; 
    }

    return 0;
}