#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, min = 4001, max = -4001;
    double total = 0;
    cin >> n;
    int counting[8001] = { 0, };

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        total += num;

        counting[4000 + num]++;

        if(num < min) min = num;
        if(num > max) max = num; 
    }

    cout << (int)round(total / n) << '\n';

    int t = 0;

    for(int i = 0; i < 8001; i++) {
        t += counting[i];

        if(t > n / 2) { 
            cout << i - 4000 << '\n';
            break; 
        }
    }

    int freq = 0, mode = -4001;

    for(int i = 0; i < 8001; i++) {
        if(counting[i] != 0 && counting[i] > freq) freq = counting[i];
    }
    for(int i = 0; i < 8001; i++) {
        if(counting[i] == freq && mode == -4001) mode = i - 4000;
        else if(counting[i] == freq) {
            mode = i - 4000;
            break;
        }
    }

    cout << mode << '\n';
    cout << max - min;

    return 0;
}