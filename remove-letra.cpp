#include <iostream>
#include <string>

int main() {
    std::string frase;
    char letra;
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);
    std::cout << "Digite a letra que deseja remover: ";
    std::cin >> letra;
    frase.erase(std::remove(frase.begin(), frase.end(), letra), frase.end());
    std::cout << "A frase sem a letra " << letra << " é: " << frase << std::endl;
    return 0;
}
