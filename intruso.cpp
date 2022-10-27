#include "intruso.hpp"

void Intruso::set_senha_vazada(std::string vazou)
{
    std::string auxNumeros;
    std::string auxLetras;

    for (int i = 0; i <= 18; i = i + 2)
    {
        auxNumeros += vazou[i];
    }
    for (int i = 20; i <= 30; i = i + 2)
    {
        auxLetras += vazou[i];
    }
    _seqNumDiario.push_back(auxNumeros);
    _seqLetrasDigitadas.push_back(auxLetras);
}

std::string Intruso::crack_senha() {

}
