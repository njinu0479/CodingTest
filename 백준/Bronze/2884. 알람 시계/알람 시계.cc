#include <iostream>

int main() {
    int hour, minute;

    std::cin >> hour >> minute;

    if (minute >= 45) std::cout << hour << " " << minute - 45;
    else {
        if (hour == 0) {
            std::cout << 23 << " " << minute + 15;
        } else {
            std::cout << hour - 1 << " " << minute + 15;
        }
    }

    return 0;
}