#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"

class Titular : public Pessoa
{
public:
    Cpf cpf;
private:
    std::string nome;

public:
    Titular(Cpf cpf, std::string nome);


};

