#include <iostream>
#include <cstdio>
#include <limits>
#include <string>
#include <cstdint>



int main() {
    char c = '1';
    bool b = true;
    // int i = 42;
    short int i = 17;
    long li = 12321321312;
    float f = 2.71828;
    double d = 3.141592;
    long double ld = 1e15;
    unsigned int ui = 4294967295; // 2^32 - 1

    std::cout << c << b << i << li << f << d << ld << ui << '\n';
    
    std::cout << "minimum value: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "maximum value: " << std::numeric_limits<int>::max() << '\n';

    unsigned int a = 123456; // на 64-битной платформе sizeof(a) == 4
    std::cout << a * a << '\n';

    unsigned int x = 0; // на 64-битной платформе sizeof(a) == 4
    unsigned int y = x - 1; // 4294967295, то есть 2**32 - 1
    unsigned int z = y + 1;  // 0

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    int xx;
    std::cout << x << '\n';
    int yy;
    std::cin >> y;

    std::cout << "got y = " << y << '\n';

    int a = 7, b = 3;
    int q = a / b; // 2
    int r = a % b; // 1

    std::cout << "a: " << a << ", q: " << q << ", r: " << r << '\n';

    int a = 6, b = 4;
    double q = static_cast<double>(a) / b; // 1.5

    std::cout << "q = " << static_cast<int>(q) << '\n';

    char c = 'A';
    c += 25; // увеличиваем ASCII-код символа на 25
    std::cout << c << '\n'; // Z

    char s = 0x21;
    std::cout << s << '\n';

    std::string maklakowiktor = "maklakowiktor";
    int size = static_cast<int>(maklakowiktor.length());
    std::string hexedName = "";
    
    for (int i = 0; i < size; i++) {
        printf("%X", maklakowiktor[i]);
    }

    std::cout << '\n';

    std::string astr = "Hello, ";
    std::string bstr = " world!";
    std::string cstr = astr + bstr; // Hello, world!

    std::cout << cstr << '\n';

    // int x = 5;
    // x += 3;
    // x *= x;
    // std::cout << x << '\n';

    int x = 5;
    ++x;
    --x;

    std::cout << x << '\n';

    auto x = 42; // int
    auto pi = 3.14159; // double

    auto str = "hello";

    std::cout << x << ", " << pi << ", " << str << '\n';

    std::cout << "max long value: " << std::numeric_limits<long long>::max() << '\n';
    
    unsigned long int n = 4000000000;
    std::cout << n * (n + 1) / 2 << "\n";
}

