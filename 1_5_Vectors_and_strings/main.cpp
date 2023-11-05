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



void printTableOfSquaresOfNaturalNumbers() {
    std::cout << "\t\tЕдиницы\n";
    const char* decimals = "Десятки";
    // unsigned long length = std::strlen(decimals); 
    // static_cast<int>(sizeof(decimals) / sizeof(decimals[0]));
    std::cout << "   ";
    for (int i = 0; i < 10; ++i) {
        std::cout << i << "  " << " ";
    }
    std::cout << "\n";

    for (int i = 1; i < 10; i++) {
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

/**
 * Prints a calendar for a given start day and number of days.
 *
 * @param startDay the starting day of the calendar (1-7)
 * @param numDays the number of days to print in the calendar
 *
 * @throws None
 */
void printCalendar(int startDay, int numDays) {
    // Печать календаря
    // Напечатайте месяц из календаря по заданному начальному дню и количеству дней. Ваш ответ должен выглядеть примерно так:

    //                    1
    //  2  3  4  5  6  7  8
    //  9 10 11 12 13 14 15
    // 16 17 18 19 20 21 22
    // 23 24 25 26 27 28 29
    // 30 31

    // Формат ввода
    // Вводится два числа: n — номер дня недели первого числа месяца (целое число от 1 до 7) и k — количество дней в этом месяце (целое число от 1 до 99). 
    // n ≤ k
    // n ≤ k. Обратите внимание, что число дней в месяце не обязательно должно быть таким же, как в привычном календаре.

    // Формат вывода
    // Необходимо напечатать календарь как в примере. Пустые позиции в первой строке заполняйте пробелами. Соседние числа также разделяйте пробелами. Под одно число всегда выделяется два символа. В конце строчек до перевода строки пробелов быть не должно. Вывод должен завершаться ровно одним подряд идущим переводом строки.
    
    // std::cout << "Mon Tue Wed Thu Fri Sat Sun" << std::endl;
    int day = 1;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 && j < startDay) {
                std::cout << "   ";
            } else if (day <= numDays) {
                std::cout << std::setw(2) << day << " ";
                day++;
            }
        }
        std::cout << std::endl;
        if (day > numDays) {
            break;
        }
    }
}




double sumOfLn(int n) {
    double sum = 1;
    for (int i = 2; i <= n; i++) {
        double ln = std::pow((-1), (i + 1)) / double(i);
        sum += ln;
    }
    return sum;
}


int sumOfNum(int num) {   
    // Сумма цифр
    // Вычислите сумму цифр неотрицательного целого числа.

    // Формат ввода
    // На вход подаётся одно неотрицательное целое число, не превосходящее 
    // 1
    // 0
    // 9
    // 10 
    // 9
    //  .

    // Формат вывода
    // Выведите сумму цифр этого числа. 
    if (num < 10) {
        return num;
    }
    int sum = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }
    return sum; 
}


int main() {
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

    // int month, year;
    // std::cin >> month >> year;
    // printCalendar(month, year);

    // char* testStr = "olleh";
    // reverse(testStr);
    // std::cout << testStr << "\n";

    // printCalendar(7, 31);

    // int num;
    // std::cin >> num;
    // std::cout << sumOfNum(num) << '\n';

    // int n;
    // std::cin >> n;
    // std::cout << sumOfLn(n) << '\n';

    // std::vector<int> data = {1, 2, 3, 4, 5};
    // // range-for loop
    // for (int elem : data) {
    //     std::cout << elem << ",";
    // }
    // std::cout << "\n";


    // std::vector<std::string> v1; // empty vector
    // std::vector<std::string> v2(5); // vector with 5 empty strings
    // std::vector<std::string> v3(5, "hello"); // vector with 5 "hello" strings
    
    // for (std::string s : v1) {
    //     std::cout << s << '\n';
    // }
    
    // for (std::string s : v2) {
    //     std::cout << s << '\n';
    // }
    
    // for (std::string s : v3) {
    //     std::cout << s << '\n';
    // }

    // std::vector<int> data2 = {1, 2, 3, 4, 5};
    // int a = data2[0];
    // int b = data2[4];
    // data2[2] = -3;

    // for (int v : data2) {
    //     std::cout << v << ',';
    // }
    // std::cout << std::endl;
    // std::cout << "data.size: "<< data.size() << '\n';

    // //  Если всё же обратиться к вектору по некорректному индексу, 
    // //      то программа во время выполнения попадёт в неопределённое поведение: 
    // //          фактически она попробует прочитать память, не принадлежащую вектору.    

    // std::vector<int> data3 = {1, 2, 3, 4, 5};
    // // std::cout << data3[42] << '\n'; //  неопределённое поведение: может произойти всё что угодно
    // // std::cout << data3.at(0) << '\n'; // print 1
    // // std::cout << data3.at(42) << '\n'; // exception will occur std::out_of_range - it can be caught and handled

    // std::vector<int> data4 = {1, 2, 3, 4, 5};
    // std::cout << data4.front() << '\n';
    // std::cout << data4.back() << '\n';
    
    // data4 = {};
    // if (!data4.empty()) {
    //     std::cout << "Vector is not empty" << '\n';
    //     std::cout << data4.front() << '\n';
    //     std::cout << data4.back() << '\n';
    // } else {
    //     std::cout << "Vector is empty" << '\n';
    // }

    // // size_t is alias for "unsigned int" or "unsigned long"
    // for (size_t i = 0; i != data4.size(); ++i) {
    //     std::cout << data[i] << " ";
    // }
    // std::cout << std::endl;

    // // data4.size = 0
    // size_t length = data4.size() - 1; // overflow for unsigned int/long
    // std::cout << length << '\n';

    // data = {1, 2, 3, 3, 4, 4, 5, 6, 7, 0, 5};

    // for (size_t i = 0; i < data.size() - 1; ++i) {
    //     if (data[i] == data[i + 1]) {
    //         std::cout << "Duplicate value: " << data[i] << '\n';
    //     }
    // }

    // data4 = {1, 2, 3, 3, 4, 4, 5, 6, 7, 0, 5};
    // for (std::int64_t i = 0; i < std::ssize(data4) - 1; ++i) {
    //     if (data4[i] == data4[i + 1]) {
    //         std::cout << "Duplicate value: " << data4[i] << '\n';
    //     }
    // }

    
    // push_back, pop_back
    // int x;
    // std::vector<int> data;
    // while (std::cin >> x) {
    //     data.push_back(x);
    // }

    // while (!data.empty() && data.back() == 0) {
    //     data.pop_back();
    // }

    // data.clear();


    // Резерв памяти

    // std::vector<int> data = {1, 2};
    // std::cout << data.size() << "\t" << data.capacity() << "\n";

    // data.push_back(3);
    // std::cout << data.size() << "\t" << data.capacity() << "\n";
    
    // data.push_back(4);
    // std::cout << data.size() << "\t" << data.capacity() << "\n";
    
    // data.push_back(5);
    // std::cout << data.size() << "\t" << data.capacity() << "\n";

    // std::vector<std::string> words;

    // size_t words_count;
    // std::cin >> words_count;

    // std::cout << words.size() << "\t" << words.capacity() << "\n";
    // words.reserve(words_count);
    // std::cout << words.size() << "\t" << words.capacity() << "\n";

    // for (size_t i = 0; i != words_count+1; ++i) {
    //     std::string word;
    //     std::cin >> word;
    //     words.push_back(word);
    // }
    // std::cout << words.size() << "\t" << words.capacity() << "\n";
    
    // words.resize(2);
    // std::cout << words.size() << "\t" << words.capacity() << "\n";

    // for (std::string word : words) {
    //     std::cout << word << '\n';
    // }


    // Многомерные векторы
    size_t m, n;
    std::cin >> m >> n;

    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));

    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (size_t i = 0; i != m; ++i) {
        for (size_t j = 0; j != n; ++j) {
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << '\n';
    }


    // Сортировка вектора
    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6};

    std::sort(data.begin(), data.end());

    


    return 0;
}
