#include <iostream>

int main() {
    int score;

    std::cin >> score;

    if(score <= 100 && score >= 90) std::cout << "A";
    if(score < 90 && score >= 80) std::cout << "B";
    if(score < 80 && score >= 70) std::cout << "C";
    if(score < 70 && score >= 60) std::cout << "D";
    if(score < 60 && score >= 0) std::cout << "F";

    return 0;
}