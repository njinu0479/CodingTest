#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int n, total = 0;
    
    cin >> s >> n;

    int i = (int)s.length() - 1;

    for(char c : s) {
        int m;

        if(c >= '0' && c <= '9') m = c - '0';
        else m = c - 'A' + 10;

        total += m * (int)pow(n, i);
        i--;
    }

    cout << total;

    return 0;
}