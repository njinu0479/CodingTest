#include <iostream>

using namespace std;

int count[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int num;
    for(int i = 0; i < n; i++) {
        cin >> num;
        count[num]++;
    }

    for(int i = 1; i <= 10000; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}