#include <iostream>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> dic(n);
    map<string, int> map;

    for(int i = 0; i < n; i++) {
        cin >> dic[i];
        map[dic[i]] = i;
    }

    for(int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if(isdigit(s[0]) != 0) {
            cout << dic[stoi(s) - 1] << '\n';
        }
        else cout << map[s] + 1 << '\n';
    }

    return 0;
}