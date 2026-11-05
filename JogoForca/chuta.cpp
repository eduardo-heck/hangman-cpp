#include <iostream>
#include <map>
#include <array>
#include <string>
#include "chuta.hpp"
#include "letra_existe.hpp"

void chuta(std::map<char, bool>& chutou, std::array<char, 5>& chutes_errados, int& tentativas_erradas, std::string& palavra_secreta)
{
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute, palavra_secreta)) {
        std::cout << "Você acertou! Seu chute está na palavra." << std::endl;
    }
    else {
        std::cout << "Você errou! Seu chute não está na palavra." << std::endl;
        chutes_errados[tentativas_erradas] = chute;
		tentativas_erradas++;
    }
    std::cout << std::endl;
}