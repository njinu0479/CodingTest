#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[8];
    bool asc = true;
    for(int i = 0; i < 8; i++) {
        cin >> a[i];

        if(a[i] != i + 1) asc = false;
    }

    if(asc == true) {
        cout << "ascending";
        return 0;
    }

    for(int i = 8; i > 0; i--) {
        if(a[8 - i] != i) {
            cout << "mixed";
            return 0;
        }
    }

    cout << "descending";

    return 0;
}