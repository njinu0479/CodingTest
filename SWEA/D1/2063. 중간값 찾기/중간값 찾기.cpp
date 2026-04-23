#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
    vector<int> v;
    
	for(int i = 0; i < T; i++) 
    {
        int num;
        cin >> num;
        v.push_back(num); 
    }
    
    sort(v.begin(), v.end());
    cout << v[T/2];
    
	return 0;
}