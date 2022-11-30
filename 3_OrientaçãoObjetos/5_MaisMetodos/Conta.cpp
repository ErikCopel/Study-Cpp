#include "Conta.hpp"
#include <string>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string nomeTitular, std::string cpfTitular, std::string numero) : 
    nomeTitular(nomeTitular), 
    cpfTitular(cpfTitular), 
    numero(numero),
    saldo(0)
{
    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}


void Conta::deposita(float valor) {
    saldo += valor;
}
void Conta::saca(float valor) {
    saldo -= valor;
}

float Conta::getSaldo() {
    return saldo;
}
// std::string getNomeTitular();
// std::string getCpfTitular();
// std::string getNumero();