#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 665, title;
    cin >> n;

    while(n) {
        int t = i;
        int cnt = 0;

        while(t > 0) {
            if(t % 10 == 6) cnt++;
            else cnt = 0;
            if(cnt == 3) {
                title = i;
                n--;
                break;
            }
            t /= 10;
        }

        i++;
    }
    cout << title;

    return 0;
}