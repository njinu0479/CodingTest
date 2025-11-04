#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c[5][15] = { 0, }, str[225];
    int n = 0;

    for(int i = 0; i < 5; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 5; j++) {
            if(c[j][i] != '\0') {
                str[n] = c[j][i];
                n++;
            }
        }
    }
    str[n] = '\0';
    cout << str;

    return 0;
}