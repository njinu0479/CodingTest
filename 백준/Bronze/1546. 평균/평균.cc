#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max = 0, arr[1000];
    double total = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        total += arr[i];

        if(arr[i] > max) max = arr[i];
    }

    cout << fixed;
    cout.precision(15);
    cout << total / max / n * 100;
}