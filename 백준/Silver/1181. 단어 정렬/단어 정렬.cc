#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(const string& a, const string& b) {
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    sort(s.begin(), s.end(), compare);
    auto last = unique(s.begin(), s.end());
    s.erase(last, s.end());
    for(int i = 0; i < s.size(); i++) cout << s[i] << '\n';

    return 0;
}