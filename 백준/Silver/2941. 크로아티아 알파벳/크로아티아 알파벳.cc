#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, a[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    int count = 0;
    cin >> s;

    for(size_t i = 0; i < s.length(); i++) {
        int b = count; 

        for(int j = 0; j < 8; j++) {
            if(a[j].length() == 2 && s[i] == a[j][0] && s[i + 1] == a[j][1]) {
                i += 1;
                count++;
                break;
            }
            else if(a[j].length() == 3 && s[i] == a[j][0] && s[i + 1] == a[j][1] && s[i + 2] == a[j][2]) {
                i += 2;
                count++;
                break;
            }
        }

        if(count == b) count++;
    }
    cout << count;
}