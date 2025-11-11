#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    vector<int> v(n.length());

    for(int i = 0; i < n.length(); i++) {
        v[i] = n[i] - '0';
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(int i = 0; i < n.length(); i++) cout << v[i];

    return 0;
}