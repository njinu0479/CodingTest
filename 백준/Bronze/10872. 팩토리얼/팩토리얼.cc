#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n != 0) {
        for(int i = n - 1; i > 0; i--) {
            n *= i;
        }
        cout << n;
    }
    else cout << 1;

    return 0;
}