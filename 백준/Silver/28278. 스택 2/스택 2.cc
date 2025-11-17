#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> stack;
    
    for(int i = 0; i < n; i++) {
        int command;
        cin >> command;

        if(command == 1) {
            int num;

            cin >> num;
            stack.push_back(num);
        }
        else if(command == 2) {
            if(!stack.empty()) {
                cout << stack.back() << '\n';
                stack.pop_back();
            } else {
                cout << -1 << '\n';
            }
        }
        else if(command == 3) {
            cout << stack.size() << '\n';
        }
        else if(command == 4) {
            cout << stack.empty() << '\n';
        }
        else {
            if(!stack.empty()) {
                cout << stack.back() << '\n';
            }
            else cout << -1 << '\n';
        }
    }

    return 0;
}