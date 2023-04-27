#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 5, 8, 3, 15};
    double soma = 0.0;
    for (int i = 0; i < numeros.size(); i++) {
        soma += numeros[i];
    }
    double media = soma / numeros.size();
    std::cout << "A média dos elementos do vetor é: " << media << std::endl;
    return 0;
}
