#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int a, b;
        cin >> a >> b;
        
        printf("#%d ", test_case);
        if(a != b) {
            cout << (a > b ? '>' : '<');
        }
        else cout << '=';
        cout << '\n';
	}
	return 0;
}