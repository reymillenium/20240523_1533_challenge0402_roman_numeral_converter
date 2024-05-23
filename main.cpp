/**
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                       *
 *       Created by: Reinier Garcia Ramos                *
 *       reymillenium@gmail.com                          *
 *                                                       *
 *       https://www.linkedin.com/in/reiniergarcia       *
 *       https://github.com/reymillenium                 *
 *       https://www.reiniergarcia.dev                   *
 *                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 **/

#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(const T &item) {
    std::cout << item;
}

template<typename T>
void printl(const T &item) {
    std::cout << item << std::endl;
}

template<typename T>
auto get_value(const std::string &message) -> T {
    std::cout << message;
    T value;
    std::cin >> value;
    cin.ignore();
    return value;
}

int main() {
beginning:
    const auto number = get_value<int>("Enter a number (1 - 10): ");

    if (number < 1 || 10 < number) {
        printl("You must type a number between 1 & 10. Try again please.");
        goto beginning;
    }

    string roman_numeral;
    switch (number) {
        case 1:
            roman_numeral = "I";
            break;
        case 2:
            roman_numeral = "II";
            break;
        case 3:
            roman_numeral = "III";
            break;
        case 4:
            roman_numeral = "IV";
            break;
        case 5:
            roman_numeral = "V";
            break;
        case 6:
            roman_numeral = "VI";
            break;
        case 7:
            roman_numeral = "VII";
            break;
        case 8:
            roman_numeral = "VIII";
            break;
        case 9:
            roman_numeral = "IX";
            break;
        case 10:
            roman_numeral = "X";
            break;
    }

    printl("The Roman Numeral version of " + to_string(number) + " is " + roman_numeral + ".");

    return 0;
}
