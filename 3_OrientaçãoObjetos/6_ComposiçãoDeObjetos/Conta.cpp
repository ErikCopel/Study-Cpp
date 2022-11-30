#include "Conta.hpp"
#include "Titular.hpp"
#include <string>

int Conta::numeroDeContas = 0;

Conta::Conta(Titular titular, std::string numero) : 
    titular(titular),
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