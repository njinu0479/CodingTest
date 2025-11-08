#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int deg[3];
    
    for(int i = 0; i < 3; i++) {
        cin >> deg[i];
    }

    if(180 != deg[0] + deg[1] + deg[2]) cout << "Error";
    else if(deg[0] == deg[1] && deg[1] == deg[2]) cout << "Equilateral";
    else if(deg[0] != deg[1] && deg[1] != deg[2] && deg[0] != deg[2]) cout << "Scalene";
    else cout << "Isosceles";

    return 0;
}