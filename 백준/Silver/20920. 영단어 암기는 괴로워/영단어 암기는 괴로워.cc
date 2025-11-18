#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    if (a.first.length() != b.first.length()) {
        return a.first.length() > b.first.length();
    }
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    map<string, int> w;
    vector<pair<string, int>> v;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if(str.length() >= m) {
            w[str]++;
        }
    }

    for (auto& iter : w) {
        v.push_back(iter);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto& iter : v){
        cout << iter.first << '\n';
    }

    return 0;
}