#include <string>
#include <vector>

class Intruso{
    /*Continue a implementação da classe Intruso*/
private:
    std::vector<std::string> _seqNumDiario;
    std::vector<std::string> _seqLetrasDigitadas;
public:
    void set_senha_vazada(std::string vazou);
    std::string crack_senha();
};