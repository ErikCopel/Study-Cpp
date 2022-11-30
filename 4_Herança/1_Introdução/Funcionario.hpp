#pragma once
#include "Cpf.hpp"
#include <string>

class Funcionario
{
private:
    Cpf cpf;
    std::string nome;
    float salario;
public:
    Funcionario(Cpf cpf, std::string nome, float salario);
    ~Funcionario();
};
