#include <iostream>

using namespace std;

int factorial(int a) {
    if(a != 0) {
        for(int i = a - 1; i > 0; i--) {
            a *= i;
        }
    }
    else a = 1;
    
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    cout << factorial(n)/(factorial(k) * factorial(n - k));

    return 0;
}