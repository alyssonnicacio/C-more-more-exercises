#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Quantas strings deseja inserir? ";
    std::cin >> n;
    std::cin.ignore(); // Utilizando um Buffer clear 

    std::string longestString;

    for (int i = 0; i < n; ++i) {
        std::string currentString;
        std::cout << "Insira a string desejada " << i+1 << ": ";
        std::getline(std::cin, currentString);

        if (currentString.length() > longestString.length()) {
            longestString = currentString;
        }
    }

    if (!longestString.empty()) {
        std::cout << "A string mais longa eh: " << longestString << std::endl;
    } else {
        std::cout << "Nao foi inserida nenhuma string ;-;." << std::endl;
    }

    return 0;
}
