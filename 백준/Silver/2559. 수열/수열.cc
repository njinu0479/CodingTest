#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    int kmax = -10000001;
    for(int i = k; i <= n; i++) {
        kmax = max(kmax, arr[i] - arr[i - k]);
    }

    cout << kmax;

    return 0;
}