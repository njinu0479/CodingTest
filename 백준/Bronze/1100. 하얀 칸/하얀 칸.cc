#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    int total = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> c;
            if((i + j) % 2 == 0 && c == 'F') {
                total++;
            }
        }
    }

    cout << total;

    return 0;
}