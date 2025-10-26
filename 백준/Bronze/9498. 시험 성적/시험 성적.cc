#include <iostream>

using namespace std;

int main() {
    int s;

    cin >> s;

    if(s >= 90) std::cout << "A";
    else if(s < 90 && s >= 80) std::cout << "B";
    else if(s < 80 && s >= 70) std::cout << "C";
    else if(s < 70 && s >= 60) std::cout << "D";
    else std::cout << "F";

    return 0;
}