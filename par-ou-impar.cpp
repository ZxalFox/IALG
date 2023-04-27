#include <iostream>

int main() {
    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "O número é par." << std::endl;
    } else {
        std::cout << "O número é ímpar." << std::endl;
    }
    return 0;
}
