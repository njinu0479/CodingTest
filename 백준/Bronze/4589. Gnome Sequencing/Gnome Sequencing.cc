#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << "Gnomes:\n";

    for(int i = 0; i < n; i++) {
        int beards[3];
        cin >> beards[0] >> beards[1] >> beards[2];

        if(beards[0] < beards[1] && beards[1] < beards[2]) cout << "Ordered\n";
        else if(beards[0] > beards[1] && beards[1] > beards[2]) cout << "Ordered\n";
        else cout << "Unordered\n";
    }

    return 0;
}