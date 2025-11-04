#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[9][9], max = -1, maxpos[2];

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> matrix[i][j];

            if(matrix[i][j] > max) {
                max = matrix[i][j];
                maxpos[0] = i;
                maxpos[1] = j;
            }
        }
    }

    cout << max << '\n' << maxpos[0] + 1 << ' ' << maxpos[1] + 1;

    return 0;
}