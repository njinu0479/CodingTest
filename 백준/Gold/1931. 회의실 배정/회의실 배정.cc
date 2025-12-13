#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0, end = 0;
    cin >> n;

    vector<pair<int, int>> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i].second >> arr[i].first; 
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++) {
        if(arr[i].second >= end) {
            end = arr[i].first;
            count++;
        }
    }
    cout << count;

    return 0;
}