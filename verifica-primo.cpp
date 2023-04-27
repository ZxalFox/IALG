#include <iostream>

bool eh_primo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Digite um número: ";
    std::cin >> n;
    if (eh_primo(n)) {
        std::cout << "O número é primo." << std::endl;
    } else {
        std::cout << "O número não é primo." << std::endl;
    }
    return 0;
}
