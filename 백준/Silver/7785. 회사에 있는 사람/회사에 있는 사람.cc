#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    set<string, greater<string>> entered;
    for(int i = 0; i < n; i++) {
        string name, log;
        cin >> name >> log;

        if(log == "enter") entered.insert(name);
        if(log == "leave") entered.erase(name);
    }

    for(const string& item : entered) cout << item << '\n';

    return 0;
}