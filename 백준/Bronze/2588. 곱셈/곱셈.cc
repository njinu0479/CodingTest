#include <iostream>

int main() {
    int num1, num2;

    std::cin >> num1 >> num2;

    std::cout << num2 % 100 % 10 * num1 << "\n";
    std::cout << num2 % 100 / 10 * num1 << "\n";
    std::cout << num2 / 100 * num1 << "\n";
    std::cout << num1 * num2;

    return 0;
}