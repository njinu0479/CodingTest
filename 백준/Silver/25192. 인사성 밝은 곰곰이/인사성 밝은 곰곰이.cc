#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cnt = 0;
    cin >> n;
    set<string> v;

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if(str == "ENTER") {
            cnt += v.size();
            v.clear();
        }
        else {
            v.insert(str);
        }
    }

    cout << cnt + v.size();

    return 0;
}