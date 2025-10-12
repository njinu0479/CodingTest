#include <iostream>

using namespace std;

int main() {
	int n, min = 1000000, max = -1000000;
	cin >> n;
 
	int arr[1000000];
 
	for(int i = 0; i < n; i++) {
		cin >> arr[i];

        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
	}

    cout << min << " " << max;

    return 0;
}