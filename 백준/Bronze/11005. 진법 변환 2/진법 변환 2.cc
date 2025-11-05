#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int total, n;
    string s = " ";
    cin >> total >> n;

    while(total > 0) {
        int m = total % n;

        if(m >= 0 && m <= 9) s += (char)(m + '0');
        else s += (char)(m - 10 + 'A');

        total /= n;
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}