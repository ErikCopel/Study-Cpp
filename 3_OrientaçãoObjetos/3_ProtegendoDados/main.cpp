#include "Conta.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Conta joao;
    joao.deposita(500);
    joao.saca(200);

    cout << joao.getSaldo() << endl;

    return 0;
}
