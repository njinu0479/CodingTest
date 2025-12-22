#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string str;
    cin >> str;

    for(int i = 1; i < n; i++) {
        string tmp;
        cin >> tmp;

        for(int j = 0; j < str.size(); j++) {
            if(str[j] != tmp[j]) str[j] = '?';
        }
    }
    cout << str;

    return 0;
}