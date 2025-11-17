#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    queue<int> line;
    stack<int> t;

    string result = "Nice";

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        line.push(num);
    }

    int target = 1;

    while(target <= n) {
        if(!line.empty() && line.front() == target) {
            line.pop();
            target++;
        }
        else if(!t.empty() && t.top() == target) {
            t.pop();
            target++;
        }
        else if(!line.empty()) {
            t.push(line.front());
            line.pop();
        }
        else {
            result = "Sad";
            break;
        }
    }

    cout << result;

    return 0;
}