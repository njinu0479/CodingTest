#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(1) {
        cin >> n;

        if(n == 0) break;

        int cnt = 0;
        vector<bool> prime(2 * n + 1, 1);

        prime[0] = 0;
        prime[1] = 0;

        for(int i = 2; i <= sqrt(2 * n); i++) {
            if(prime[i]) {
                for(int j = i * i; j <= 2 * n; j += i) {
                    prime[j] = 0;
                }
            }
        }

        for (int i = n + 1; i <= 2 * n; i++) {
            if (prime[i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}