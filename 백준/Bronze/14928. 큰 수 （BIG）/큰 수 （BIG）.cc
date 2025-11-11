#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    long long rmd = 0;

    for(int i = 0; i < n.length(); i++) {
        int cdig = n[i] - '0';
        rmd = (rmd * 10 + cdig) % 20000303;
    }

    cout << rmd;

    return 0;
}