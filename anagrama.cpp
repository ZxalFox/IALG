#include <iostream>
#include <string>
#include <algorithm>

bool eh_anagrama(std::string palavra1, std::string palavra2) {
    std::sort(palavra1.begin(), palavra1.end());
    std::sort(palavra2.begin(), palavra2.end());
    return palavra1 == palavra2;
}

int main() {
    std::string palavra1, palavra2;
    std::cout << "Digite a primeira palavra: ";
    std::cin >> palavra1;
    std::cout << "Digite a segunda palavra: ";
    std::cin >> palavra2;
    if (eh_anagrama(palavra1, palavra2)) {
        std::cout << "As palavras são anagramas." << std::endl;
    } else {
        std::cout << "As palavras não são anagramas." << std::endl;
    }
    return 0;
}
