#include "Conta.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Conta joao("joao", "012.345.678-9", "12345");
    joao.deposita(500);
    joao.saca(200);

    cout << "Saldo Joao: " << joao.getSaldo() << endl;
    cout << "Numero de Contas: " << Conta::numeroDeContas << endl;

    if (true) {
        Conta maria("Maria", "098.765.432-10", "54321");
        cout << "Numero de Contas: " << Conta::numeroDeContas << endl;
    }
    
    cout << "Numero de Contas: " << Conta::numeroDeContas << endl;
    

    return 0;
}
