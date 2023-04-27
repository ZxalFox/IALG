#include <iostream>

int main() {
  int n, t1 = 0, t2 = 1, nextTerm = 0;

  std::cout << "Digite o número de termos: ";
  std::cin >> n;

  std::cout << "Sequência de Fibonacci: ";

  for (int i = 1; i <= n; ++i) {
    // imprime o termo atual
    std::cout << t1 << ", ";

    // calcula o próximo termo da sequência
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }

  return 0;
}
