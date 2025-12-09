#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] = arr[i] + arr[i - 1];
    }

    for(int i = 0; i < t; i++) {
        int start, end;
        cin >> start >> end;
        cout << arr[end] - arr[start - 1] << "\n";
    }

    return 0;
}