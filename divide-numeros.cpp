#include <iostream>

int main() {
  double num1, num2, quotient;

  std::cout << "Digite o primeiro número: ";
  std::cin >> num1;

  std::cout << "Digite o segundo número: ";
  std::cin >> num2;

  quotient = num1 / num2;

  std::cout << "O resultado da divisão é: " << quotient << "\n";

  return 0;
}
