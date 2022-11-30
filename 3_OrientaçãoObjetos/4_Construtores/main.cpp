#include "Conta.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Conta joao("joao", "012.345.678-9", "12345");
    joao.deposita(500);
    joao.saca(200);

    cout << joao.getSaldo() << endl;

    return 0;
}
