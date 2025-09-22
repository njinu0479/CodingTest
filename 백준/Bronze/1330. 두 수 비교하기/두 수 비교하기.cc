#include <iostream>

int main() {
    int num1, num2;

    std::cin >> num1 >> num2;
    if(num1 < num2) std::cout << "<";
    if(num1 > num2) std::cout << ">";
    if(num1 == num2) std::cout << "==";

    return 0;
}