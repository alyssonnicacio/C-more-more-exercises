#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    // Insira as duas strings
    std::cout << "Primeira string: ";
    std::getline(std::cin, str1);

    std::cout << "Segunda string: ";
    std::getline(std::cin, str2);

    // Strings iguais ou diferentes? Conferindo:
    if (str1 == str2) {
        std::cout << "Sao iguais!" << std::endl;
    } else {
        std::cout << "Sao diferentes." << std::endl;
    }

    return 0;
}
