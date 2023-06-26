#include <iostream>

// Задача на рекурсию
int fact(int n) {
    if (n < 2) {
        return n;
    }

    return n * fact(n - 1);
}

int main() {
    unsigned int result = fact(5);
    std::cout << "result = " << result << '\n';

    return 0;
}