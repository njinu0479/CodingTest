#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int t;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> str;

        cout << str.front() << str.back() << "\n";
    }

    return 0;
}