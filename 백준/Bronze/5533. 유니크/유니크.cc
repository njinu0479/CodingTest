#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(3));
    vector<int> score(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    for (int j = 0; j < 3; j++) {
        int count[101] = { 0, };

        for (int i = 0; i < n; i++) {
            int num = v[i][j];
            count[num]++;
        }

        for (int i = 0; i < n; i++) {
            int num = v[i][j];
            if (count[num] == 1) score[i] += num;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << score[i] << '\n';
    }

    return 0;
}