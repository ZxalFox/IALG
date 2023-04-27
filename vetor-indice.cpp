#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> frutas = {"banana", "maçã", "laranja", "uva"};
    std::string fruta;
    std::cout << "Digite uma fruta: ";
    std::cin >> fruta;
    auto it = std::find(frutas.begin(), frutas.end(), fruta);
    if (it != frutas.end()) {
        int indice = std::distance(frutas.begin(), it);
        std::cout << "A fruta " << fruta << " foi encontrada no índice " << indice << std::endl;
    } else {
        std::cout << "A fruta " << fruta << " não foi encontrada no vetor." << std::endl;
    }
    return 0;
}
