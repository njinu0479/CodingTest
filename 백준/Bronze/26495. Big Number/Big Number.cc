#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(char c : s) {
        if(c == '0') cout << "0000\n0  0\n0  0\n0  0\n0000\n\n";
        else if(c == '1') cout << "   1\n   1\n   1\n   1\n   1\n\n";
        else if(c == '2') cout << "2222\n   2\n2222\n2\n2222\n\n";
        else if(c == '3') cout << "3333\n   3\n3333\n   3\n3333\n\n";
        else if(c == '4') cout << "4  4\n4  4\n4444\n   4\n   4\n\n";
        else if(c == '5') cout << "5555\n5\n5555\n   5\n5555\n\n";
        else if(c == '6') cout << "6666\n6\n6666\n6  6\n6666\n\n";
        else if(c == '7') cout << "7777\n   7\n   7\n   7\n   7\n\n";
        else if(c == '8') cout << "8888\n8  8\n8888\n8  8\n8888\n\n";
        else if(c == '9') cout << "9999\n9  9\n9999\n   9\n   9\n\n";
    }

    return 0;
}