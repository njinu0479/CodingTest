#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    for (char c : s) {
        cout << c - 'A' + 1 << " ";
    }
    
    cout << "\n";
    
    return 0;
}