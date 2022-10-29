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
    std::vector<std::string> auxVector;
    std::string auxString;
    std::string senha;
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < _seqNumDiario.size(); i++)
        {
            if (_seqLetrasDigitadas[i][j] == 'A')
            {
                auxString += _seqNumDiario[i][0];
                auxString += _seqNumDiario[i][1];
                auxVector.push_back(auxString);
            }
            else if (_seqLetrasDigitadas[i][j] == 'B')
            {
                auxString += _seqNumDiario[i][2];
                auxString += _seqNumDiario[i][3];
                auxVector.push_back(auxString);
            }
            else if (_seqLetrasDigitadas[i][j] == 'C')
            {
                auxString += _seqNumDiario[i][4];
                auxString += _seqNumDiario[i][5];
                auxVector.push_back(auxString);
            }
            else if (_seqLetrasDigitadas[i][j] == 'D')
            {
                auxString += _seqNumDiario[i][6];
                auxString += _seqNumDiario[i][7];
                auxVector.push_back(auxString);
            }
            else if (_seqLetrasDigitadas[i][j] == 'E')
            {
                auxString += _seqNumDiario[i][8];
                auxString += _seqNumDiario[i][9];
                auxVector.push_back(auxString);
            }
            auxString = "";
        }
        bool verifacao = true;
        int i = 1;
        for (int i = 1; i < auxVector.size(); i++)
        {
            if (auxVector[0][0] != auxVector[i][0] && auxVector[0][0] != auxVector[i][1])
            {
                verifacao = false;
            }
        }
        if (verifacao == true)
        {

            senha += auxVector[0][0];
        }
        else
        {
            verifacao = true;
            for (int i = 1; i < auxVector.size(); i++)
            {
                if (auxVector[0][1] != auxVector[i][0] && auxVector[0][1] != auxVector[i][1])
                {
                    verifacao = false;
                }
            }
            if (verifacao == true)
            {
                senha += auxVector[0][1];
            }
        }
        senha += " ";
        auxVector.clear();
    }
    return senha;
}
