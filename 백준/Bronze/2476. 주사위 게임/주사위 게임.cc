#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total = 0, max = 0;
    cin >> n;

    while(n--) {
        int dice[3];
        cin >> dice[0] >> dice[1] >> dice[2];

        if(dice[0] == dice[1] && dice[1] == dice[2]) total = 10000 + dice[0] * 1000;
        else if(dice[0] == dice[1]) total =  1000 + dice[0] * 100;
        else if(dice[1] == dice[2]) total =  1000 + dice[1] * 100;
        else if(dice[0] == dice[2]) total =  1000 + dice[2] * 100;
        else {
            if(dice[0] > dice[1] && dice[0] > dice[2]) total = dice[0] * 100;
            else if(dice[1] > dice[0] && dice[1] > dice[2]) total = dice[1] * 100;
            else total = dice[2] * 100;
        }

        if(max < total) max = total;
    }

    cout << max;

    return 0;
}