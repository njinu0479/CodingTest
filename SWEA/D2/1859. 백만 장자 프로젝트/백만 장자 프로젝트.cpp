#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int test_case;
	int T;
	
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        long long total = 0; 
        int maxp = p[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (p[i] < maxp) {
                total += (maxp - p[i]);
            } else {
                maxp = p[i];
            }
        }

        cout << "#" << test_case << " " << total << "\n";
    }
    return 0;
}