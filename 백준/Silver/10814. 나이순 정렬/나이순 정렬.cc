#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, string>> list(n);
    for(int i = 0; i < n; i++) cin >> list[i].first >> list[i].second;

    stable_sort(list.begin(), list.end(), compare);
    for(int i = 0; i < n; i++) cout << list[i].first << ' ' << list[i].second << '\n';

    return 0;
}