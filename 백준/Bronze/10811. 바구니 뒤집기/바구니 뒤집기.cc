#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, arr[101];
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;

        start--; 
        end--;
        
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}