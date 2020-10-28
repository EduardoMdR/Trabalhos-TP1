#include <iostream>

#include "dominios.h"
#include "testes.h"
#include "entidades.h"
#include "testesEntidades.h"

using namespace std;

int main()
{
    TUAplicacao testeAplicacao;
    switch(testeAplicacao.run()){
        case TUAplicacao::SUCESSO : cout << "Sucesso para entidade Aplicação" << endl;
            break;
        case TUAplicacao::FALHA : cout << "Falha para entidade Aplicação" << endl;
            break;
    }

    TUConta testeConta;
    switch(testeConta.run()){
        case TUConta::SUCESSO : cout << "Sucesso para entidade Conta" << endl;
            break;
        case TUConta::FALHA : cout << "Falha para entidade Conta" << endl;
            break;
    }

    TUProduto testeProduto;
    switch(testeProduto.run()){
        case TUConta::SUCESSO : cout << "Sucesso para entidade Produto" << endl;
            break;
        case TUConta::FALHA : cout << "Falha para entidade Produto" << endl;
            break;
    }

    TUUsuario testeUsuario;
    switch(testeUsuario.run()){
        case TUConta::SUCESSO : cout << "Sucesso para entidade Usuario" << endl;
            break;
        case TUConta::FALHA : cout << "Falha para entidade Usuario" << endl;
            break;
    }

    system("pause");
    return 0;
}
