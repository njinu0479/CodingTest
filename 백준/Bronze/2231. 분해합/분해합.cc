#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int gen = 0;

    for(int i = 1; i < n; i++) {
        int sum = i;
        int temp = i;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == n) {
            gen = i;
            break;
        }
    }

    cout << gen;

    return 0;
}