#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 1; i <= t; ++i) {
        stack<char> vps;
        string str;
        cin >> str;

        string result = "YES";

        for(int j = 0; j < str.length(); j++) {
            if(str[j] == '(') vps.push('(');
            else if(str[j] == ')') {
                if(!vps.empty()) {
                    vps.pop(); 
                }
                else result = "NO";
            }
        }

        if(!vps.empty()) {
            result = "NO";
        }

        cout << result << '\n';
    }

    return 0;
}