#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, int> m = {
        {"black", 0}, 
        {"brown", 1}, 
        {"red", 2},
        {"orange", 3}, 
        {"yellow", 4}, 
        {"green", 5},
        {"blue", 6}, 
        {"violet", 7}, 
        {"grey", 8}, 
        {"white", 9}
    };
    
    string a, b, c;
    cin >> a >> b >> c;

    long long answer = (m[a] * 10 + m[b]) * pow(10, m[c]);
    cout << answer;

    return 0;
}