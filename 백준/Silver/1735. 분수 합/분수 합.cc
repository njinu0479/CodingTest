#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int anum, aden, bnum, bden, num, den, gcd1, gcd2;
    cin >> anum >> aden >> bnum >> bden;
    gcd1 = gcd(aden, bden);
    
    num = anum * bden / gcd1 + bnum * aden / gcd1;
    den = aden * bden / gcd1;

    gcd2 = gcd(num, den);
    num /= gcd2;
    den /= gcd2;

    cout << num << ' ' << den;

    return 0;
}