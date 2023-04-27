#include <iostream>

int main() {
  int num;

  std::cout << "Digite um número: ";
  std::cin >> num;

  for (int i = 1; i <= num; i++) {
    std::cout << i << " ";
  }

  std::cout << std::endl;

  return 0;
}
