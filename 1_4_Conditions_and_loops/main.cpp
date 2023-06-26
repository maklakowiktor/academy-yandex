#include <cmath>
#include <cstdint>
#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <locale.h>

long int getSum(int n);
long getSumAProg(int n);
void printTableOfSquaresOfNaturalNumbers();
bool isLeapYear(int year);
int countDaysInMonthMy(int year, int month);
int countDaysInMonth(int year, int month);
void printCalendar(int n);

int main() {
    // setlocale(LC_ALL, "ru_RU.UTF-8");
    setlocale(LC_ALL, "en_US.UTF-8");

    // int x;
    // std::cin >> x;

    // if (x <= 0) {
    //     std::cout << "zero or negative\n";
    // } else if (x == 1) {
    //     std::cout << "one\n";
    // } else if (x == 2) {
    //     std::cout << "two\n";
    // } else {
    //     std::cout << "many\n";
    // }


    // int a, b, x;
    // std::cin >> a >> b >> x;

    // if (a <= x && x <= b) {
    //     std::cout << "точка лежит на отрезке [a; b]" << '\n';
    // } else {
    //     std::cout << "точка лежит вне отрезка [a; b]" << '\n';
    // }

    // if (!(x < a || x > b)) {
    //     std::cout << "точка лежит на отрезке [a; b]" << '\n';
    // } else {
    //     std::cout << "точка лежит вне отрезка [a; b]" << '\n';
    // }


    // double x = 0.1, y = 0.2;
    // if (x + y == 0.3) {
    //     std::cout << "EQUAL ";
    // } else {
    //     std::cout << "NOT EQUAL ";
    // }
 
    // std::cout << x + y << "\n"
    

    // char s; 
    // string answer;

    // while ((cin >> s) && s != '\n') {
    //     answer += s;
    // }

    // cout << "answer: " << answer << '\n';
    
    
    // double delta = 0.000001;

    // double x = 0.1, y = 0.2;
    // double sum = x + y; // 0.30000000000000004

    // // 0.00000000000000004 < 0.000001 == true
    // if (std::abs(sum - 0.3) < delta) {
    //     std::cout << "EQUAL ";
    // } else {
    //     std::cout << "NOT EQUAL ";
    // }

    // std::cout << sum << '\n';

    // int64_t a, b;
    // char operation;
    // std::cin >> a >> operation >> b;

    // int64_t result = 0;
    // if (operation == '+') {
    //     result = a + b;
    // } else if (operation == '-') {
    //     result = a - b;
    // } else if (operation == '*') {
    //     result = a * b;
    // } else if (operation == '/' || operation == ':') {
    //     result = a / b;
    // } else if (operation == '%') {
    //     result = a % b;
    // }

    // std::cout << result << '\n';

//    int64_t a, b;
//    char operation;
//    std::cin >> a >> operation >> b;
//
//    int64_t result = 0;
//    switch (operation) {
//        case '+':
//            result = a + b;
//            break; // если не написать этот break, программа просто пойдёт дальше в код следующего блока case
//        case '-':
//            result = a - b;
//            break;
//        case '*':
//            result = a * b;
//            break;
//        case '/':
//        case ':':
//            result = a / b;
//            break;
//        case '%':
//            result = a % b;
//            break;
//        default: // здесь обрабатывается случай, когда ни один case выше не сработал
//            result = 0;
//    }
//
//    std::cout << result << '\n';

    // std::string name;
    // std::cin >> name;
    // switch (name) { // ошибка авторизации
    //     case "Alice":
    //         std::cout << "Hello, Alice!\n";
    //         break;
    // }

    // Ugly code :)
    // int arr[100];
    // arr[0] = 24;
    // arr[-5] = 2523;
    // arr[432] = 32;
    // std::cout << -54[arr];

    // Издёвка с собеседования
    // int z = 0;
    // int j = ++z + ++z + ++z + ++z;
    // // std::cout << "j: " << j << '\n';
    // printf("j=%i\n", j);

    // again: // метка - это произвольное имя с двоеточием

    // std::cout << "How old are you?\n";
    // int age;
    // std::cin >> age;

    // if (age < 0 || age >= 128) {
    //     std::cout << "Wrong age...\n";
    //     goto again; // безусловный прыжок в место, помеченное меткой
    // }

    // std::cout << "Your age is " << age << ".\n";

    // int n = 1;
    // while (n <= 10) {
    //     std::cout << n << "\t" << n * n << "\n"; // выводим число и его квадрат через табуляцию
    //     ++n;
    // }

    // int n = 1;
    // do {
    //     std::cout << n << "\t" << n * n << "\n";
    //     ++n;
    // } while (n <= 10);

    // for (int i = 1; i <= 10; ++i) {
    //     std::cout << i << "\t" << i * i << "\n";
    // }

    // std::string line;
    // std::getline(std::cin, line);
    // for (char symbol : line) {
    //     std::cout << symbol << "\t" << static_cast<int>(symbol) << "\n";
    // }

    // for (int i = 1; i <= 10; ++i) {
    //     for (int j = 1; j <= 10; ++j) {
    //         std::cout << i * j << "\t";
    //     }
    //     std::cout << "\n";
    // }

    // for (int i = 0; i <= 10; ++i) {
    //     for (int j = 0; j <= 10; ++j) {
    //         if (i == 0 || j == 0) {
    //             continue;
    //         }
    //         if (i == 1 || j == 1) {
    //             std::cout << i * j << "\t";
    //         } else {
    //             std::cout << 10 * i * j << "\t";
    //         }
    //     }
    //     std::cout << "\n";
    // }
    
    // TODO: Write below code such that it print table of square

    // Write below function that print table of square
    // print_table_of_squares_of_natural_numbers();

    // int n = 5;
    // auto result = getSumAProg(n);

    // std::cout << "getSumAProg(" << n << ") = " << result << '\n';

    // int sum = 0;
    // while (true) {
    //     int x;
    //     std::cin >> x;
    //     if (x == 0) {
    //         break;
    //     }
    //     sum += x;
    // }

    // std::cout << sum << "\n";

    // std::string name;
    // while (std::getline(std::cin, name)) {
    //     std::cout << "Hello, " << name << "!\n";
    // }

    //   1 2 3 4 5 6 7 8
    // 1 * * * * * * * *
    // 2 A * * * * * * *
    // 3 * * * * * * * *
    // 4 * * * * * * * *
    // 5 * * * * * * * *
    // 6 * * * * B * * *
    // 7 * * * * * * * *
    // 8 * * * * * * * *

    // f = 1, 2; s = 5, 6
    // abs(1 - 5) == abs(2 - 6) => 
    
    //
    // int aX, aY, bX, bY;
    // std::cin >> aX >> aY >> bX >> bY;

    // if (aX == bX || aY == bY || std::abs(aX - bX) == std::abs(aY - bY)) {
    //     std::cout << "YES" << '\n';
    // } else {
    //     std::cout << "NO" << '\n';
    // }

    /*
    
      /\
     /  \
    /    \
          \
    */

    /*
    
           /\
          /  \
         /    \
        /      \
        --------
    */

    // int a, b, c;
    // std::cin >> a >> b >> c;
    // std::string answer;

    // // Valid triangle
    // if ((a + b) > c && (a + c) > b && (b + c) > a) {
    //     // Is triangle rectanguar
    //     if ((a * a + b * b) == (c * c) || (a * a + c * c) == (b * b) || (b * b + c * c) == (a * a)) {
    //         answer = "YES";
    //     } else {
    //         answer = "NO";
    //     }
    // } else {
    //     answer = "UNDEFINED";
    // }

    // std::cout << answer << '\n';

    // TODO: How to get count days in month with provided month and year 
    // int year, month;
    // std::cin >> month >> year;

    // int days = countDaysInMonth(month, year);
    // std::cout << days << '\n';


    // 9.
    // std::vector<std::vector<int>> a = {
    //     {3, 3, 5, 6}, 
    //     {7, 9, 2, 7}, 
    //     {2, 8, 8, 2},
    //     {9, 1, 6, 4},
    // };

    // int sum = 0;
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         if (i == j) { 
    //             sum = sum + a[i][i]; 
    //             sum = sum / 2; 
    //         } 
    //     } 
    // }
    
    // std::cout << sum << std::endl; // 5

    // x = 4253, y = 3, a = 1, b = 1
    // x = 425, y = 5, a = 2, b = 2
    // x = 42, y = 2, a = 2, b = 3
    // x = 4, y = 4, a = 3, b = 4 <-- final
    // x = 0
    // cout: 
    // 3
    // 4

    // 2.
    // int a, b, y, x;
    // a = 0;
    // b = 0;

    // std::cin >> x;
    
    // while (x > 0) {
    //     y = x % 10;
    //     if (y > 2) {
    //         a = a + 1;
    //     }

    //     if (y < 7) {
    //         b = b + 1;
    //         x= x / 10;
    //     }
    // }
    // std::cout << a << std::endl;
    // std::cout << b;

    // 7.
    // int k, i, temp;
    // int A[10] = {11, 16, 5, 13, 5, 18, 14, 6, 2, 13};

    // k = 0;
    // for (i = 1; i < 10; i++) {
    //     if (A[i - 1] < A[i])
    //     {
    //         k = k + 1;
    //         temp = A[i];
    //         A[i] = A[i - 1];
    //         A[i - 1] = temp;
    //     }
    // }
    // std::cout << k << "\n";

    // const char* str = "Десятки";
    // for (int i = 0; str[i] != '\0'; i++) {
    //     std::cout << static_cast<char>(str[i]) << " ,";
    // }
    // std::cout << std::endl;

    // printTableOfSquaresOfNaturalNumbers();

    int n;
    std::cin >> n;
    printCalendar(n - 1);

    return 0;
}


void printCalendar(int n) {
    
}





int countDaysInMonthMy(int month, int year) {
    int leapYear = isLeapYear(year);
    int februaryDays = leapYear ? 29 : 28;
    
    int daysInMonth[12] = {
        31, februaryDays, 31, 30, 
        31, 30, 31, 31,
        30, 31, 30, 31
    };
    return daysInMonth[month - 1];
}


int countDaysInMonth(int month, int year) {
    int days = 0;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = isLeapYear(year) ? 29 : 28;
            break;
        default:
            break;
    }
    return days;
}


bool isLeapYear(int year) {
    bool leap = false;
    if (year % 400 == 0) {
        leap = true;
    } else if (year % 100 == 0) {
        leap = false;
    } else if (year % 4 == 0) {
        leap = true;
    } else {
        leap = false;
    }
    return leap;
}


long getSum(int n) {
    long sum = 0;
    for (long i = 1; i < n; ++i) {
        sum += i;
    }
    return sum;
}

long getSumAProg(int n) {
    return (long)n * ((long)n + 1) / 2;
}

void printTableOfSquaresOfNaturalNumbers() {
    std::cout << "\t\tЕдиницы\n";
    const char* decimals = "Десятки";
    std::cout << "   ";
    for (int i = 0; i < 10; ++i) {
        std::cout << i << "  " << " ";
    }
    std::cout << "\n";

    for (int i = 1; i < 10; i++) {
        unsigned long length = static_cast<int>(sizeof(decimals) / sizeof(decimals[0]));
        if (i > 1 && decimals[i] != '\0') {
            std::cout << decimals[i-1] << "  ";
        } else {
            std::cout << "   ";
        }
        std::cout << i << " ";
        for (int j = 0; j < 10; ++j) {
            int n = pow((i * 10) + j, 2);
            std::cout << n << " ";
        }
        std::cout << "\n";
    }
}

