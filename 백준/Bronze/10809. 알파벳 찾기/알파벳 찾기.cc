#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[101];
    int j = 0, arr[26];

    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    cin >> s;
    
    while(s[j] != '\0') {
        int k = s[j] - 'a';
        if (arr[k] == -1) {
            arr[k] = j;
        }
        j++;
    }

    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}