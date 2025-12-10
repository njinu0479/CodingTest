#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    vector<vector<int>> arr(26, vector<int>(str.size() + 1, 0));
    for(int i = 1; i <= str.size(); i++) {
        for(int j = 0; j < 26; j++) {
            arr[j][i] = arr[j][i - 1]; 
        }

        arr[str[i - 1] - 'a'][i]++;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++) {
        char c;
        cin >> c;

        int l, r;
        cin >> l >> r;

        cout << arr[c - 'a'][r + 1] - arr[c - 'a'][l] << '\n';
    }

    return 0;
}