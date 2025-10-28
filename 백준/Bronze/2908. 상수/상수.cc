#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int ia = stoi(a);
    int ib = stoi(b);

    ia > ib ? cout << ia : cout << ib;

    return 0;
}