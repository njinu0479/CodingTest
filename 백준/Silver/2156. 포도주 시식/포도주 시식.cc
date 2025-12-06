#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, index = 0;
    cin >> n;

    vector<int> arr(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> cur_max(n + 1, 0);
    cur_max[1] = arr[1];
    if(n > 1) {
        cur_max[2] = arr[1] + arr[2];
    }
    for(int i = 3; i <= n; i++) {
        cur_max[i] = max(cur_max[i - 1], max(cur_max[i - 2] + arr[i], cur_max[i - 3] + arr[i - 1] + arr[i]));
    }

    cout << cur_max[n];

    return 0;
}