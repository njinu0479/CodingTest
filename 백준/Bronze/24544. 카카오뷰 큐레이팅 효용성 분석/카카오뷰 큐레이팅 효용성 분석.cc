#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total = 0, noview = 0;
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        total += v[i].first;
    }

    for(int i = 0; i < n; i++) {
        cin >> v[i].second;

        if(v[i].second == 0) noview += v[i].first;
    }

    cout << total << '\n' << noview;

    return 0;
}