#include <iostream>
#include <stack>

int main() {
    int decimal;
    std::cout << "Digite um número decimal: ";
    std::cin >> decimal;
    std::stack<int> binario;
    while (decimal > 0) {
        int resto = decimal % 2;
        binario.push(resto);
        decimal /= 2;
    }
    std::cout << "O número em binário é: ";
    while (!binario.empty()) {
        std::cout << binario.top();
        binario.pop();
    }
    std::cout << std::endl;
    return 0;
}
