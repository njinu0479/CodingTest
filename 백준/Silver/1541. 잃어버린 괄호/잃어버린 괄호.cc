#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str, tmp = "";
    int total = 0;
    bool minus = false;
    cin >> str;

    for(int i = 0; i <= str.size(); i++) {
        if(str[i] == '-' || str[i] == '+' || i == str.size()) {
            if(minus) {
                total -= stoi(tmp);
            } else {
                total += stoi(tmp);
            }
            tmp = "";

            if(str[i] == '-') {
                minus = true;
            }
        } 
        else {
            tmp += str[i];
        }
    }

    cout << total;

    return 0;
}