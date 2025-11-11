#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> n(5);

    for(int i = 0; i < 5; i++) {
        cin >> n[i];
    }

    sort(n.begin(), n.end());
    cout << accumulate(n.begin(), n.end(), 0) / 5 << "\n" << n[2];

    return 0;
}