#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {10, 5, 8, 3, 15};
    std::sort(numeros.begin(), numeros.end());
    std::cout << "O vetor ordenado em ordem crescente é: ";
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
