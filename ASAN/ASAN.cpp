#include <iostream>

int main() {
    char stack_men[8] = {42, 42, 42, 42, 42, 42, 42, 42};
    char stack_men2[8] = {63, 63, 63, 63, 63, 63, 63, 63};
    auto x = stack_men[9];
    std::cout << "x:" << static_cast<int>(x) << "\n";
    auto y = stack_men2[-1];
    std::cout << "y:" << static_cast<int>(y) << "\n";
}