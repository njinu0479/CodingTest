#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int n = 1;
    cin >> s;

    for(int i = 1; i < s.length(); i++) {
        if(s[i - 1] == s[i]) n++;
        else break;
    }

    cout << n;

    return 0;
}