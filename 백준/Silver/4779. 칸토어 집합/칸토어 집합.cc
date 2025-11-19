#include <iostream>
#include <cmath>

using namespace std;

void cantor(const int &num) {
    int size = pow(3, num - 1);

    if(num == 0) {
        cout << '-';

        return;
    }

    cantor(num - 1);
    for(int i = 0; i < size; i++) cout << ' ';
    cantor(num - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    while(cin >> num) {
        cantor(num);
        cout << '\n';
    }

    return 0;
}