#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double weight, height;
    cin >> weight >> height;

    if(25 < weight/(height * height)) cout << "Overweight";
    else if(18.5 > weight/(height * height)) cout << "Underweight";
    else cout << "Normal weight";

    return 0;
}