#include <iostream>

int main() {
    int dice1, dice2, dice3;

    std::cin >> dice1 >> dice2 >> dice3;

    if (dice1 == dice2 && dice2 == dice3) std::cout << 10000 + dice1 * 1000;
    else if (dice1 == dice2 || dice2 == dice3) std::cout << 1000 + dice2 * 100;
    else if (dice3 == dice1) std::cout << 1000 + dice3 * 100;
    else {
        if (dice1 > dice2 && dice1 > dice3) std::cout << dice1 * 100;
        else if (dice2 > dice1 && dice2 > dice3) std::cout << dice2 * 100;
        else std::cout << dice3 * 100;
    }

    return 0;
}