#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<bool> flag(n);
    deque<int> d;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        flag[i] = num;
    }
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(!flag[i]) d.push_front(num);
    }
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        d.push_back(num);
        cout << d.front() << ' ';
        d.pop_front();
    }

    return 0;
}