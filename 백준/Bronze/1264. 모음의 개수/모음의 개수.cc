#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;

    while (1) {
        getline(cin, str);

        if (str == "#") break;

        int cnt = 0;
        for (char c : str) {
            c = tolower(c); 
            
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}