#include <iostream>

int main() {
    int hour, minute, time;

    std::cin >> hour >> minute >> time;

    if (24 <= (minute + time) / 60 + hour) std::cout << (minute + time) / 60 + hour - 24 << " " << (minute + time) % 60;
    else std::cout << (minute + time) / 60 + hour << " " << (minute + time) % 60;

    return 0;
}