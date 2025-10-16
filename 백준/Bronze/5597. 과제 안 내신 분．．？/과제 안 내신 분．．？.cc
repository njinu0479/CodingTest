#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, arr[31] = { 0, };

    for(int i = 0; i < 28; i++) {
        cin >> n;

        arr[n] = 1;
    }

    for(int i = 1; i <= 30; i++) if(arr[i] != 1)  cout << i << " ";

    return 0;
}