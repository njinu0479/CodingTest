#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n;
    t = n;

    while(n > 0) {
        if(n > 2) {
            cout << n << " bottles of beer on the wall, " << n << " bottles of beer.\n";
            cout << "Take one down and pass it around, " << n - 1 << " bottles of beer on the wall.\n\n";
        }
        else if(n == 2) {
            cout << "2 bottles of beer on the wall, 2 bottles of beer.\n";
            cout << "Take one down and pass it around, 1 bottle of beer on the wall.\n\n";
        }
        else {
            cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
            cout << "Take one down and pass it around, no more bottles of beer on the wall.\n\n";
        }
        n--;
    }

    cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
    if (t == 1) {
        cout << "Go to the store and buy some more, 1 bottle of beer on the wall.\n";
    } else {
        cout << "Go to the store and buy some more, " << t << " bottles of beer on the wall.\n";
    }

    return 0;
}