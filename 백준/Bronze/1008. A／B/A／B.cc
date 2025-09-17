#include <iostream>

int main() {
    double num1, num2, result;

    std::cin >> num1;
    std::cin >> num2;

    std::cout.precision(15);
    std::cout << std::fixed;
    
    result = num1 / num2;
    std::cout << result;

    return 0;
}