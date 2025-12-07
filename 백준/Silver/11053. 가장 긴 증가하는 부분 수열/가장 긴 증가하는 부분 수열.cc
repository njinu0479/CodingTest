#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n + 1), max_len(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        max_len[i] = 1;
        
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i]) {
                max_len[i] = max(max_len[i], max_len[j] + 1);
            }
        }
    }

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (max_len[i] > result) {
            result = max_len[i];
        }
    }

    cout << result;

    return 0;
}