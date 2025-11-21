#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, total[10] = {0};
    string num;
    cin >> a >> b >> c;
    num = to_string(a * b * c);
    
    for(int i = 0; i < num.length(); i++) total[num[i] - '0']++;
    for(int n : total) cout << n << '\n';

    return 0;
}