#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, result;
    cin >> n;
    
    vector<int> temp(n + 1), cur_max(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cin >> temp[j];
        }

        for(int j = i; j >= 1; j--) {
            cur_max[j] = temp[j] + max(cur_max[j - 1], cur_max[j]);
        }
    }

    for(int i = 1; i <= n; i++) {
        result = max(result, cur_max[i]);
    }

    cout << result;

    return 0;
}