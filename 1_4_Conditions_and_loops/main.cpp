#include <cmath>
#include <cstdint>
#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <locale.h>
#include <cstring>
#include <iomanip>
#include <algorithm>

long int getSum(int n);
long getSumAProg(int n);
void printTableOfSquaresOfNaturalNumbers();
bool isLeapYear(int year);
int countDaysInMonthMy(int year, int month);
int countDaysInMonth(int year, int month);
void printCalendar(int month, int year);
void reverse(char* str);
void printCalendar(int startDay, int numDays);
int sumOfNum(int num);
double sumOfLn(int n);

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


    return 0;
}




/**
 * Reverses the given C-style string.
 *
 * @param str pointer to the C-style string to be reversed
 *
 * @return void
 *
 * @throws None
 */
void reverse(char* str) {
    int strLen = std::strlen(str);
    std::cout << strLen << '\n';

    for (int i = 0; i < (strLen / 2); i++) {
        char temp = str[i];
        str[i] = str[strLen - i - 1];
        str[strLen - i - 1] = temp;
    }
    std::cout << str << '\n';
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


