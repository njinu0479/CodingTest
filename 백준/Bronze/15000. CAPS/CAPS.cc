#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]); 
    }

    cout << s;

    return 0;
}