#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char str[1001];
    int n;

    cin >> str >> n;
    cout << str[n - 1];

    return 0;
}