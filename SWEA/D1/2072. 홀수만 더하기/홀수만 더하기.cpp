#include<iostream>

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
        int cnt = 0;
        
		for(int i = 0; i < 10; i++) {
            int t;
            cin >> t;
            
            if(t % 2 == 1) cnt += t;
        }
        
        cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}