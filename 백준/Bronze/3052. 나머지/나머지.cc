#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0, arr[42] = { 0, };

    for(int i = 0; i < 10; i++) {
        cin >> n;

        arr[n % 42] = 1;
    }

    for(int i = 0; i < 42; i++) if(arr[i] == 1) count++;

    cout << count;

    return 0;
}