#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    size_t i = 0, cnt = 0;

    cin >> s;

    while(s[i] != '\0') {
        if(s[i] >= 'A' && s[i] <= 'C') cnt += 3;
        else if(s[i] >= 'D' && s[i] <= 'F') cnt += 4;
        else if(s[i] >= 'G' && s[i] <= 'I') cnt += 5;
        else if(s[i] >= 'J' && s[i] <= 'L') cnt += 6;
        else if(s[i] >= 'M' && s[i] <= 'O') cnt += 7;
        else if(s[i] >= 'P' && s[i] <= 'S') cnt += 8;
        else if(s[i] >= 'T' && s[i] <= 'V') cnt += 9;
        else cnt += 10;

        i++;
    }

    cout << cnt;

    return 0;
}