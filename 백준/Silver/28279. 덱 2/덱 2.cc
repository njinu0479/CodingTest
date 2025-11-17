#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    deque<int> d;

    for(int i = 1; i <= t; ++i) {
        int command;
        cin >> command;

        if(command == 1) {
            int num;
            cin >> num;

            d.push_front(num);
        }
        else if(command == 2) {
            int num;
            cin >> num;

            d.push_back(num);
        }
        else if(command == 3) {
            if(d.empty()) cout << -1 << '\n';
            else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if(command == 4) {
            if(d.empty()) cout << -1 << '\n';
            else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if(command == 5) {
            cout << d.size() << '\n';
        }
        else if(command == 6) {
            cout << d.empty() << '\n';
        }
        else if(command == 7) {
            if(d.empty()) cout << -1 << '\n';
            else cout << d.front() << '\n';
        }
        else if(command == 8) {
            if(d.empty()) cout << -1 << '\n';
            else cout << d.back() << '\n';
        }
    }

    return 0;
}