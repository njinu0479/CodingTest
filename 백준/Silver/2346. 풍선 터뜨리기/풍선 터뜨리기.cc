#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<pair<int, int>> d;

    for(int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        d.push_back(make_pair(i, num));
    }

    while(!d.empty()) {
        int index = d.front().first;
        int move = d.front().second;

        cout << index << ' ';
        d.pop_front();

        if(d.empty()) break;

        if(move > 0) {
            for(int j = 0; j < move - 1; j++) {
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else {
            for(int j = 0; j < -move; j++) {
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }

    return 0;
}