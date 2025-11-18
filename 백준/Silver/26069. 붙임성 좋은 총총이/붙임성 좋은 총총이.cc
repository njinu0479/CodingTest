#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<string> s;
    s.insert("ChongChong");
    
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        if(s.count(a) || s.count(b)) {
            s.insert(a);
            s.insert(b);
        }
    }

    cout << s.size();

    return 0;
}