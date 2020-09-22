#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;


class TUCodigo{
    private:
        const static int VALOR_VALIDO   = 20;
        const static int VALOR_INVALIDO = 30;
        Codigo *codigo;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

#endif // TESTES_H_INCLUDED
