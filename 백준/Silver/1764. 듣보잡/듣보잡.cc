#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cnt = 0;
    cin >> n >> m;

    map<string, int> who;
    for(int i = 0; i < n; i++) {
        string t;
        cin >> t;

        who[t]++;
    }

    for(int i = 0; i < m; i++) {
        string t;
        cin >> t;

        who[t]++;
        if(who[t] == 2) cnt++;
    }

    cout << cnt << '\n';

    for(const auto& pair : who) {
        if(pair.second == 2) cout << pair.first << '\n';
    }

    return 0;
}