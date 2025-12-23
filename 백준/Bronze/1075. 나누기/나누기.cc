#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, f;
    string str;
    cin >> n >> f;
    n -= n % 100;

    while(1) {
        if(n % f == 0) {
            str = to_string(n);
            break;
        }
        n++;
    }

    cout << str[str.size() - 2] << str[str.size() - 1];

    return 0;
}