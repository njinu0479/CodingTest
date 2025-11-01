#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int max = 0, arr[26] = {0, };
    string s;
    char a = '?';
    cin >> s;

    for(char c : s) {
        if(c >= 'a' && c <= 'z') arr[c - 'a']++;
        else arr[c - 'A']++;
    }

    for(int i = 0; i < 26; i++) {
        if(arr[i] == max && max != 0) {
            a = '?';
        }
        else if(arr[i] > max) {
            max = arr[i];
            a = (char)i + 'A';
        }
    }

    cout << a;

    return 0;
}