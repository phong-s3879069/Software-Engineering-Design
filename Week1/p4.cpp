#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num; // 123

    int val = 0;
    while (num != 0) {
        int digit = num % 10; // 1
        val = val*10 + digit; // 321
        num /= 10; // 0
    }

    std::cout << "-> Reversed number: " << val << "\n";

    return 0;
}