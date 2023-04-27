#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 5, 8, 3, 15};
    int menor = numeros[0];
    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    std::cout << "O menor elemento do vetor é: " << menor << std::endl;
    return 0;
}
