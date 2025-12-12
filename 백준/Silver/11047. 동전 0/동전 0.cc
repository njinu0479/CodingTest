#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, count = 0;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(k) {
        count += k / arr[n - 1];
        k %= arr[n - 1];
        n--;
    }

    cout << count;

    return 0;
}