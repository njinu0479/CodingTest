#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<bool> prime(n + 1, 1);
    prime[0] = 0;
    prime[1] = 0;

    for(int i = 2; i <= sqrt(n); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if (prime[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}