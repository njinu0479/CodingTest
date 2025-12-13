#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0;
    cin >> n;

    vector<int> arr(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = 1; i <= n; i++) {
        arr[i] = arr[i] + arr[i - 1];
        ans += arr[i];
    }

    cout << ans;

    return 0;
}