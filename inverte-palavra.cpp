#include <iostream>
#include <string>

int main() {
    std::string palavra;
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;
    std::reverse(palavra.begin(), palavra.end());
    std::cout << "A palavra invertida é: " << palavra << std::endl;
    return 0;
}
