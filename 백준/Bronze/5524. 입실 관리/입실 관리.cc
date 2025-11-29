#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        string str;
        cin >> str;

        for(char &c : str) {
            c = tolower(c);
        }

        cout << str << '\n';
    }

    return 0;
}