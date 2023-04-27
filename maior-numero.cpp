#include <iostream>

int main() {
    int a, b;
    std::cout << "Digite dois números: ";
    std::cin >> a >> b;
    int maior = a > b ? a : b;
    std::cout << "O maior número é: " << maior << std::endl;
    return 0;
}
