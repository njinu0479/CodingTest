#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    int n, k;
    cin >> n >> k;
    cout << '<';

    for(int i = 1; i <= n; i++) q.push(i);
    
    for(int i = 0; i < n; i++) {
        int j = 0;
        while(j < k - 1) {
            q.push(q.front());
            q.pop();
            j++;
        }

        if(i < n - 1) {
            cout << q.front() << ", ";
        }
        else cout << q.front();
        q.pop();
    }
    cout << '>';

    return 0;
}