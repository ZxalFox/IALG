#include <iostream>

int main() {
    int n, fatorial = 1;
    std::cout << "Digite um número: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    std::cout << "O fatorial de " << n << " é: " << fatorial << std::endl;
    return 0;
}
