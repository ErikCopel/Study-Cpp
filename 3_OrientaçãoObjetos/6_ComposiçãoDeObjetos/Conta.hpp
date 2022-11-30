#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
public:
    static int numeroDeContas;

private:
    Titular titular;
    std::string numero;
    float saldo;

public:
    Conta(Titular t, std::string numero);
    ~Conta();
    float getSaldo();
    std::string getNomeTitular();
    std::string getCpfTitular();
    std::string getNumero();
    void deposita(float valor);
    void saca(float valor);
};
