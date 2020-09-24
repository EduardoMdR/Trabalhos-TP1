#include <iostream>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    // Inicio Cep
    TUCep testeCep;
    switch(testeCep.run()){
        case TUCep::SUCESSO: cout << "SUCESSO Cep\n";
            break;
        case TUCep::FALHA  : cout << "FALHA para classe CEP \n";
            break;
    }

    // Classe
    TUClasse testeClasse;
    switch(testeClasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO Classe\n";
            break;
        case TUClasse::FALHA  : cout << "FALHA para classe Classe \n";
            break;
    }

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
    TUCodigoBanco testeCodigoBanco;
    switch(testeCodigoBanco.run()){
        case TUCodigoBanco::SUCESSO: cout << "SUCESSO Codigo Banco \n";
            break;
        case TUCodigoBanco::FALHA  : cout << "FALHA para classe CodigoBanco \n";
            break;
    }

    // Codigo Produto
    TUCodigoProduto testeCodigoProduto;
    switch(testeCodigoProduto.run()){
        case TUCodigoProduto::SUCESSO: cout << "SUCESSO Codigo Produto \n";
            break;
        case TUCodigoProduto::FALHA  : cout << "FALHA para classe Codigo Produto \n";
            break;
    }

    // Cpf
    TUCpf testeCpf;
    switch(testeCpf.run()){
        case TUCpf::SUCESSO: cout << "SUCESSO Cpf \n";
            break;
        case TUCpf::FALHA  : cout << "FALHA para classe Cpf \n";
            break;
    }

    // Data
    TUData testeData;
    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO Data \n";
            break;
        case TUData::FALHA  : cout << "FALHA para classe Data \n";
            break;
    }

    // Emissor
    TUEmissor testeEmissor;
    switch(testeEmissor.run()){
        case TUEmissor::SUCESSO: cout << "SUCESSO Emissor \n";
            break;
        case TUEmissor::FALHA  : cout << "FALHA para classe Emissor \n";
            break;
    }

    // Endereco
    TUEndereco testeEndereco;
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO: cout << "SUCESSO Endereco \n";
            break;
        case TUEndereco::FALHA  : cout << "FALHA para classe Endereco \n";
            break;
    }

    // Horario
    TUHorario testeHorario;
    switch(testeHorario.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO Horario \n";
            break;
        case TUHorario::FALHA  : cout << "FALHA para classe Horario \n";
            break;
    }

    // Nome
    TUNome testeNome;
    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO Nome \n";
            break;
        case TUNome::FALHA  : cout << "FALHA para classe Nome \n";
            break;
    }

    // Numero
    TUNumero testeNumero;
    switch(testeNumero.run()){
        case TUNumero::SUCESSO: cout << "SUCESSO Numero \n";
            break;
        case TUNumero::FALHA  : cout << "FALHA para classe Numero \n";
            break;
    }

    // Prazo
    TUPrazo testePrazo;
    switch(testePrazo.run()){
        case TUPrazo::SUCESSO: cout << "SUCESSO Prazo \n";
            break;
        case TUPrazo::FALHA  : cout << "FALHA para classe Prazo \n";
            break;
    }

    // Senha
    TUSenha testeSenha;
    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO Senha \n";
            break;
        case TUSenha::FALHA  : cout << "FALHA para classe Senha \n";
            break;
    }

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
