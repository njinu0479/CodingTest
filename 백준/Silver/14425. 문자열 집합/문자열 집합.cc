#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, cnt = 0;
    cin >> n >> m;

    unordered_set<string> s(n);
    for(int i = 0; i < n; i++) {
        string t;
        cin >> t;
        s.insert(t);
    }

    for (int i = 0; i < m; i++) {
        string t;
        cin >> t;
        
        if (s.count(t)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}