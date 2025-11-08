#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int stick[3];
    cin >> stick[0] >> stick[1] >> stick[2];

    if(stick[0] >= stick[1] + stick[2]) stick[0] = stick[1] + stick[2] - 1;
    else if(stick[1] >= stick[0] + stick[2]) stick[1] = stick[0] + stick[2] - 1;
    else if(stick[2] >= stick[0] + stick[1]) stick[2] = stick[0] + stick[1] - 1;

    cout << stick[0] + stick[1] + stick[2];

    return 0;
}