#include <iostream>
#include <string>

bool eh_palindromo(std::string palavra) {
    int tamanho = palavra.size();
    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string palavra;
    std::cout << "Digite uma palavra: ";
    std::cin >> palavra;
    if (eh_palindromo(palavra)) {
        std::cout << "A palavra é um palíndromo." << std::endl;
    } else {
        std::cout << "A palavra não é um palíndromo." << std::endl;
    }
    return 0;
}
