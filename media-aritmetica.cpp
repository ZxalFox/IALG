#include <iostream>

int main() {
    int n;
    std::cout << "Digite a quantidade de números: ";
    std::cin >> n;
    int soma = 0;
    for (int i = 0; i < n; i++) {
        int numero;
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> numero;
        soma += numero;
    }
    double media = (double) soma / n;
    std::cout << "A média dos números é: " << media << std::endl;
    return 0;
}
