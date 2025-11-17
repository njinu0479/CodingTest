#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(true) {
        string str;
        getline(cin, str, '\n');

        if(str == ".") break;

        string result = "yes";
        stack<char> vps;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(' || str[i] == '[') {
                vps.push(str[i]);
            }
            else if(str[i] == ')') {
                if(vps.empty() || vps.top() != '(') {
                    result = "no";
                    break;
                }
                vps.pop();
            }
            else if(str[i] == ']') {
                if(vps.empty() || vps.top() != '[') {
                    result = "no";
                    break;
                }
                vps.pop();
            }
        }

        if(!vps.empty()) {
            result = "no";
        }

        cout << result << '\n';
    }

    return 0;
}