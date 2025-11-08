#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int line[3];
    
    while(1) {
        cin >> line[0] >> line[1] >> line[2];

        if(line[0] == 0 && line[1] == 0 && line[2] == 0) break;
        else if(line[0] + line[1] <= line[2] || line[0] + line[2] <= line[1] || line[1] + line[2] <= line[0]) cout << "Invalid\n";
        else if(line[0] == line[1] && line[1] == line[2]) cout << "Equilateral\n";
        else if(line[0] != line[1] && line[1] != line[2] && line[0] != line[2]) cout << "Scalene\n";
        else cout << "Isosceles\n";
    }

    return 0;
}