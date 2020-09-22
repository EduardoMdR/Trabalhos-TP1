#include <iostream>

#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    TUCodigo teste;

    switch(teste.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO";
            break;
        case TUCodigo::FALHA  : cout << "FALHA para classe Codigo";
            break;
    }

    return 0;
}
