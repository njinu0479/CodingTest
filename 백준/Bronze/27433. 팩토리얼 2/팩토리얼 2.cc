#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if(n == 0) cout << 1;
    else {
        for(int i = n - 1; i > 0; i--) n *= i;
        cout << n;
    }

    return 0;
}