#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int j;
        string s;
        
        cin >> j >> s;

        for (size_t l = 0; l < s.length(); l++) {
            for (int k = 0; k < j; k++) {
                cout << s[l];
            }
        }
        cout << "\n";
    }

    return 0;
}