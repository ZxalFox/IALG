#include <iostream>

double raiz_quadrada(double x) {
    double raiz = x / 2;
    while (true) {
        double nova_raiz = (raiz + x / raiz) / 2;
        if (nova_raiz == raiz) {
            break;
        }
        raiz = nova_raiz;
    }
    return raiz;
}

int main() {
    double x;
    std::cout << "Digite um número: ";
    std::cin >> x;
    std::cout << "A raiz quadrada de " << x << " é: " << raiz_quadrada(x) << std::endl;
    return 0;
}
