#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int prime = t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if(n != 1) {
            for(int j = 2; j <= sqrt(n); j++) {
                if(n % j == 0) {
                    prime--;
                    break;
                }
            }
        }
        else prime--;
    }

    cout << prime;

    return 0;
}