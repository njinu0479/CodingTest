#include <iostream>

int main() {
    int num1, num2, num3;

    std::cin >> num1 >> num2 >> num3;
    std::cout << (num1 + num2) % num3 << "\n";
    std::cout << (((num1 % num3) + (num2 % num3)) % num3) << "\n";
    std::cout << ((num1 * num2) % num3) << "\n";
    std::cout << (((num1 % num3) * (num2 % num3)) % num3);

    return 0;
}