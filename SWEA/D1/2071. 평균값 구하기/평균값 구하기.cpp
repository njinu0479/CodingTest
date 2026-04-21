#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        double avg = 0;
		for(int i = 0; i < 10; i++) {
            int num;
            cin >> num;
            avg += num;
        }
        printf("#%d %.0f\n", test_case, round(avg/10));
	}
	return 0;
}