#include <iostream>

int main() {
  int n, i, j;
  bool isPrime;

  std::cout << "Digite um número: ";
  std::cin >> n;

  std::cout << "Números primos até " << n << ":\n";

  // verificando primos para todos os números de 2 a n
  for (i = 2; i <= n; ++i) {
    isPrime = true;

    // verifica se i é primo
    for (j = 2; j <= i/2; ++j) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }

    // se i é primo, imprime-o
    if (isPrime) {
      std::cout << i << " ";
    }
  }

  return 0;
}
