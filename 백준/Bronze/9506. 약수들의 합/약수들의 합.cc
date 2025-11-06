#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1) {
        int n;
        cin >> n;

        if(n == -1) break;

        int total = 1;
        string s = to_string(n) + " = 1";

        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                total += i;
                s += " + " + to_string(i);
            }
        }

        if(total == n) {
            cout << s << "\n";
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}