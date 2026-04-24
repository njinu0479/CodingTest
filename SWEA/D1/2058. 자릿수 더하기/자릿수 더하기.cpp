#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num, t, i;
	cin >> num;
	
	for(i = num; i >0; i /= 10) {
        t = t + i % 10;
    }
    cout << t;
    
	return 0;
}