#include "Conta.hpp"



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