#include <iostream>

#include "dominios.h"
#include "testes.h"
#include "entidades.h"
#include "testesEntidades.h"

using namespace std;

int main()
{
    TUAplicacao testeA;
    switch(testeA.run()){
        case TUAplicacao::SUCESSO : cout << "Sucesso para entidade Aplicação" << endl;
            break;
        case TUAplicacao::FALHA : cout << "Falha para entidade Aplicação" << endl;
            break;
    }

    TUConta testeB;
    switch(testeB.run()){
        case TUConta::SUCESSO : cout << "Sucesso para entidade Conta" << endl;
            break;
        case TUConta::FALHA : cout << "Falha para entidade Conta" << endl;
            break;
    }

    system("pause");
    return 0;
}
