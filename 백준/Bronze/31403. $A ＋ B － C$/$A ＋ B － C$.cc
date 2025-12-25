#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    string str;
    cin >> a >> b >> c;

    cout << a + b - c << '\n';
    
    str = to_string(a) + to_string(b);
    cout << stoi(str) - c;

    return 0;
}