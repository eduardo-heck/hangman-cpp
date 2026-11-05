#include <iostream>
#include <array>
#include "imprime_erros.hpp"

void imprime_erros(const std::array<char, 5>& chutes_errados, int tentativas_erradas)
{
    std::cout << "Chutes errados: ";
    for (int i = 0; i < tentativas_erradas; i++) {
        std::cout << chutes_errados[i] << " ";
    }
    std::cout << std::endl;
}
