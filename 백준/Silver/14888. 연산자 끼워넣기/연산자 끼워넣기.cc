#include <iostream>
#include <vector>

using namespace std;

int n, oper[4];
vector<int> a;
int maxv = -1000000001, minv = 1000000001;

void calc(int depth, int result) {
    if(depth == n) {
        if(result > maxv) maxv = result;
        if(result < minv) minv = result;
        return;
    }

    for(int i = 0; i < 4; i++) {
        if(oper[i] > 0) {
            oper[i]--;

            if(i == 0) calc(depth + 1, result + a[depth]);
            else if(i == 1) calc(depth + 1, result - a[depth]);
            else if(i == 2) calc(depth + 1, result * a[depth]);
            else if(i == 3) calc(depth + 1, result / a[depth]);

            oper[i]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < 4; i++) cin >> oper[i];

    calc(1, a[0]);
    cout << maxv << '\n' << minv;

    return 0;
}