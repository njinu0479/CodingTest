#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, result = "";
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int len_a = a.length();
    int len_b = b.length();
    int max_len = max(len_a, len_b);
    int carry = 0;

    for (int i = 0; i < max_len; i++) {
        int sum = carry;

        if (i < len_a) {
            sum += a[i] - '0';
        }
        if (i < len_b) {
            sum += b[i] - '0';
        }
        result += to_string(sum % 10);
        carry = sum / 10;
    }

    if (carry > 0) {
        result += to_string(carry);
    }

    reverse(result.begin(), result.end());
    cout << result;

    return 0;
}