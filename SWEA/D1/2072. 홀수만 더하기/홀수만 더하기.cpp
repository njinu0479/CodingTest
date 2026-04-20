#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int total = 0; 
        
        for(int i = 0; i < 10; i++) {
            int num;
            cin >> num;
            
            if(num % 2 != 0) {
                total += num;
            }
        }
        
        printf("#%d %d\n", test_case, total);
	}
	return 0;
}