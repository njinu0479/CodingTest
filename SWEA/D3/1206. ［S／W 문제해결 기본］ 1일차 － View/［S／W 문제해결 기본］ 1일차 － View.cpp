#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	for(int i = 1; i <= 10; ++i) {
		int n, cnt = 0;
        cin >> n;
        vector<int> buildings(n);
        
        for(int j = 0; j < n; j++) {
            cin >> buildings[j];
        }
        
        for(int j = 2; j < n - 2; j++) {
            int total, left, right;
            left = max(buildings[j - 2], buildings[j - 1]);
            right = max(buildings[j + 1], buildings[j + 2]);
            total = max(left, right);
            
            if (buildings[j] > total) {
                cnt += buildings[j] - total;
            }
        }
        
        cout << '#' << i << ' ' << cnt << "\n";
	}
    
	return 0;
}