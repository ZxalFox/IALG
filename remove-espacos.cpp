#include <iostream>
#include <string>

int main() {
    std::string frase;
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);
    frase.erase(std::remove_if(frase.begin(), frase.end(), ::isspace), frase.end());
    std::cout << "A frase sem espaços é: " << frase << std::endl;
    return 0;
}
