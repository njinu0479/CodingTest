#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n, c[4] = { 0, };
        cin >> n;

        c[0] = n / 25;
        n %= 25;

            
        c[1] = n / 10;
        n %= 10;
            
        c[2] = n / 5;
        n %= 5;
        
        c[3] = n;

        cout << c[0] << ' ' << c[1] << ' ' << c[2] << ' ' << c[3] << '\n';
    }

    return 0;
}