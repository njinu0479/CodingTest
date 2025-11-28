#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total_cost[3] = {0, 0, 0}, cur_cost[3];

    for(int i = 0; i < n; i++) {
        cin >> cur_cost[0] >> cur_cost[1] >> cur_cost[2];

        int prev_r = total_cost[0];
        int prev_g = total_cost[1];
        int prev_b = total_cost[2];

        total_cost[0] = cur_cost[0] + min(prev_g, prev_b);
        total_cost[1] = cur_cost[1] + min(prev_r, prev_b);
        total_cost[2] = cur_cost[2] + min(prev_r, prev_g);
    }

    cout << min({total_cost[0], total_cost[1], total_cost[2]});

    return 0;
}