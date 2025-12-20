#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int total = 0, n;
    for(int i = 0; i < 10; i++) {
        cin >> n;
        
        if(total + n <= 100) {
            total += n;
            if(total == 100) break; 
        }
        else {
            if(abs(100 - (total + n)) <= abs(100 - total)) {
                total += n;
            }
            break; 
        }
    }

    cout << total;

    return 0;
}