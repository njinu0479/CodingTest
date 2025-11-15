#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, cnt = 0;
    cin >> t;

    vector<bool> prime(1000001, 1);
    prime[0] = 0; prime[1] = 0;

    for(int i = 2; i <= sqrt(1000000); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }

    for(int i = 0; i < t; i++) {
        cnt = 0;
        cin >> n;

        for (int i = 2; i <= n / 2; i++) {
            if (prime[i] && prime[n - i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}