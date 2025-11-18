#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max;
    cin >> n;

    if(n == 3) {
        int a, b, c;
        cin >> a >> b >> c;

        max = gcd(gcd(a, b), c);
    }
    else {
        int a, b;
        cin >> a >> b;

        max = gcd(a, b);
    }

    for(int i = 1; i <= max; i++) {
        if(max % i == 0) cout << i << '\n';
    }

    return 0;
}