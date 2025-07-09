#include <iostream>
using namespace std;

#include "Numgenerator.h"

int main() {
    int x, y, s, a;
    std::cout << "Enter a number: ";
    std::cin >> y;

    std::cout << "Enter a different number: ";
    std::cin >> x;

    s = Numgenerator(x, y);

    std::cout << "Enter a your guess: ";
    std::cin >> a;

    if (s > a || a > s) {
        std::cout << "You lose";
    } else {
        std::cout << "You Win";
    }
}