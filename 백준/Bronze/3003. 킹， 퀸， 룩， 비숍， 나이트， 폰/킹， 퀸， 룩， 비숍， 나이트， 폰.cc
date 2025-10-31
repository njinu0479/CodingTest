#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int chess[6] = { 1, 1, 2, 2, 2, 8 };
    int arr[6];

    for(int i = 0; i < 6; i++) {
        cin >> arr[i];

        arr[i] = chess[i] - arr[i];
    }

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}