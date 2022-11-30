#pragma once
#include <string>

class Conta
{
private:
    std::string nomeTitular;
    std::string cpfTitular;
    std::string numero;
    float saldo;

public:
    Conta(std::string nomeTitular, std::string cpfTitular, std::string numero);
    float getSaldo();
    std::string getNomeTitular();
    std::string getCpfTitular();
    std::string getNumero();
    void deposita(float valor);
    void saca(float valor);
};
