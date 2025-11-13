#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, min = -1, cnt = 0;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(min == -1 && i >= 1) min = v[i] - v[i - 1];
        else if(i >= 1) min = gcd(min, v[i] - v[i - 1]);
    }

    for(int i = 1; i < n; i++) {
        if(v[i] - v[i - 1] > min) {
            cnt += (v[i] - v[i - 1]) / min - 1;
        }
    }

    cout << cnt;

    return 0;
}