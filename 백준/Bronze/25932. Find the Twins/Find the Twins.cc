#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int nums[10];
        int twins = 0; 

        for (int j = 0; j < 10; j++) {
            cin >> nums[j];

            int t = nums[j];

            if (t == 17 && twins == 0) twins = 1;
            if (t == 18 && twins == 0) twins = 2;
            if (t == 17 && twins == 2) twins = 3;
            if (t == 18 && twins == 1) twins = 3;
        }

        for (int j = 0; j < 10; j++) {
            cout << nums[j] << ' ';
        }
        cout << '\n';

        if (twins == 0) cout << "none\n\n";
        else if (twins == 1) cout << "zack\n\n";
        else if (twins == 2) cout << "mack\n\n";
        else cout << "both\n\n";
    }

    return 0;
}