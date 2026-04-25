#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // C++ 스트림 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for (int t = 1; t <= T; t++) {
        string date;
        cin >> date;
        
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(4, 2));
        int d = stoi(date.substr(6, 2));
        
        cout << "#" << t << " ";
        if (m >= 1 && m <= 12 && d >= 1 && d <= days[m]) {
            cout << setfill('0') << setw(4) << y << "/"
                 << setw(2) << m << "/"
                 << setw(2) << d << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}