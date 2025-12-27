#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> files(n);
    for(int i = 0; i < n; i++) {
        cin >> files[i];
    }

    long long cluster;
    cin >> cluster;

    long long count = 0;

    for(int i = 0; i < n; i++) {
        if(files[i] == 0) continue;

        count += files[i] / cluster;
        
        if(files[i] % cluster != 0) {
            count++;
        }
    }
    cout << count * cluster;

    return 0;
}