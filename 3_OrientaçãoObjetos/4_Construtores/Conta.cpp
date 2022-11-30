#include "Conta.hpp"
#include <string>


Conta::Conta(std::string nomeTitular, std::string cpfTitular, std::string numero) : 
    nomeTitular(nomeTitular), 
    cpfTitular(cpfTitular), 
    numero(numero),
    saldo(0)
{
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