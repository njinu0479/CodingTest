#include <iostream>

using namespace std;

long long arr[1000001] = {0 };

int seq(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(arr[n] != 0) return arr[n];
    return arr[n] = (seq(n - 1) + seq(n - 2)) % 15746;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << seq(n);

    return 0;
}