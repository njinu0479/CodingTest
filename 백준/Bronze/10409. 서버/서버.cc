#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, count = 0;
    cin >> n >> t;

    for(int i = 0; i < n; i++) {
        int j;
        cin >> j;

        t -= j;
        if(t < 0) break;
        
        count++;
    }

    cout << count;

    return 0;
}