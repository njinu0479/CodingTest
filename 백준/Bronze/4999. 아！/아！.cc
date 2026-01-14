#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string jaehwan, doctor;
    cin >> jaehwan >> doctor;

    if (jaehwan.length() >= doctor.length()) {
        cout << "go";
    } else {
        cout << "no";
    }

    return 0;
}