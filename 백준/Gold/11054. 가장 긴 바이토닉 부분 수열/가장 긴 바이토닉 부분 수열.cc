#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n + 1), right(n + 1), left(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        left[i] = 1;
        
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i]) {
                left[i] = max(left[i], left[j] + 1);
            }
        }
    }

    for (int i = n; i >= 1; i--) {
        right[i] = 1;
        
        for (int j = n; j > i; j--) {
            if (arr[j] < arr[i]) {
                right[i] = max(right[i], right[j] + 1);
            }
        }
    }

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (left[i] + right[i] - 1 > result) {
            result = left[i] + right[i] - 1;
        }
    }

    cout << result;

    return 0;
}