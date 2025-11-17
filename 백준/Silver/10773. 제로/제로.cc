#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total = 0;
    cin >> n;
    vector<int> stack;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if(num != 0) {
            stack.push_back(num);
        }
        else stack.pop_back();
    }

    for(int i = 0; i < stack.size(); i++) total += stack[i];
    cout << total;

    return 0;
}