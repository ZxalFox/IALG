#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string palavra;
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;
    std::transform(palavra.begin(), palavra.end(), palavra.begin(), ::toupper);
    std::cout << "A palavra em maiúsculas é: " << palavra << std::endl;
    return 0;
}
