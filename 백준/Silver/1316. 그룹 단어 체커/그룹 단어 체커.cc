#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, count;

    cin >> t;
    count = t;

    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;

        char alpabet[26] = { 0, };

        for(size_t j = 0; j < s.length(); j++) {
            if(alpabet[s[j] - 'a'] == 0) alpabet[s[j] - 'a'] = 1;
            else if(alpabet[s[j] - 'a'] == 1 && s[j - 1] == s[j] && j > 0) alpabet[s[j] - 'a'] = 1;
            else if(alpabet[s[j] - 'a'] == 1 && s[j - 1] != s[j] && j > 0) {
                count--;
                break;
            }
        }
    }

    cout << count;
}