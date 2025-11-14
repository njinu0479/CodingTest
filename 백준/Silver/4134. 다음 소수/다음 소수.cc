#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        long long n, cnt;
        cin >> n;

        cnt = n;
        if(cnt < 2) cnt = 2;

        while(1) {
            bool prime = true;

            for(int j = 2; j <= sqrt(cnt); j++) {
                if(cnt % j == 0) {
                    prime = false;
                    break;
                }
            }

            if(prime) {
                cout << cnt << '\n';
                break;
            }
            else cnt++;
        }
    }
    return 0;
}