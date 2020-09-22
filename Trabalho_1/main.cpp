#include <iostream>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    TUCodigo teste;
    switch(teste.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO \n";
            break;
        case TUCodigo::FALHA  : cout << "FALHA para classe Codigo\n";
            break;
    }

    // Inicio Cep
    TUCep testeCep;
    switch(testeCep.run()){
        case TUCep::SUCESSO: cout << "SUCESSO Cep\n";
            break;
        case TUCep::FALHA  : cout << "FALHA para classe CEP \n";
            break;
    }

    // Classe

    // Codigo Agencia
    TUCodigoAgencia testeCodigoAgencia;
    switch(testeCodigoAgencia.run()){
        case TUCodigoAgencia::SUCESSO: cout << "SUCESSO Codigo Agencia \n";
            break;
        case TUCodigoAgencia::FALHA  : cout << "FALHA para classe CodigoAgencia \n";
            break;
    }

    // Codigo Aplicação
    TUCodigoAplicacao testeCodigoAplicacao;
    switch(testeCodigoAplicacao.run()){
        case TUCodigoAplicacao::SUCESSO: cout << "SUCESSO Codigo Aplicacao \n";
            break;
        case TUCodigoAplicacao::FALHA  : cout << "FALHA para classe CodigoAplicacao \n";
            break;
    }

    // Codigo banco

    // Codigo Produto
    TUCodigoProduto testeCodigoProduto;
    switch(testeCodigoProduto.run()){
        case TUCodigoProduto::SUCESSO: cout << "SUCESSO Codigo Produto \n";
            break;
        case TUCodigoProduto::FALHA  : cout << "FALHA para classe Codigo Produto \n";
            break;
    }

    // Cpf

    // Data

    // Emissor

    // Endereco

    // Horario

    // Nome

    // Numero

    // Prazo

    // Senha

    // Taxa
    TUTaxa testeTaxa;
    switch(testeTaxa.run()){
        case TUTaxa::SUCESSO: cout << "SUCESSO Taxa\n";
            break;
        case TUTaxa::FALHA  : cout << "FALHA para classe Taxa \n";
            break;
    }

    // Valor da Aplicação
    TUValorAplicacao testeValorAplicacao;
    switch(testeValorAplicacao.run()){
        case TUValorAplicacao::SUCESSO: cout << "SUCESSO ValorAplicacao\n";
            break;
        case TUValorAplicacao::FALHA  : cout << "FALHA para classe ValorAplicacaoo \n";
            break;
    }

    //Valor Minimo
    TUValorMinimo testeValorMinimo;
    switch(testeValorMinimo.run()){
        case TUValorMinimo::SUCESSO: cout << "SUCESSO ValorMinimoo\n";
            break;
        case TUValorMinimo::FALHA  : cout << "FALHA para classe ValorMinimo \n";
            break;
    }

    return 0;
}
