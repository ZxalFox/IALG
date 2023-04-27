#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 5, 8, 3, 15};
    int maior = numeros[0];
    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    std::cout << "O maior elemento do vetor é: " << maior << std::endl;
    return 0;
}
