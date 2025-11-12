#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, cnt = 0;
    cin >> a >> b;

    unordered_map<int, int> set;

    for(int i = 0; i < a + b; i++) {
        int t;
        cin >> t;

        set[t]++;
    }

    for(const auto& pair : set) {
        if(pair.second != 2) cnt++;
    }

    cout << cnt;

    return 0;
}