#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[101] = {0,};

    for (int i = 0; i < m; i++) {
        int start, end, ball;
        cin >> start >> end >> ball;

        for (int j = start - 1; j < end; j++) {
            arr[j] = ball;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}