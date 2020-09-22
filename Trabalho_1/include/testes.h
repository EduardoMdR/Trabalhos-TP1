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


class TUCep{
    private:
        const static int VALOR_VALIDO   = 3779500;
        const static int VALOR_INVALIDO =  900000;
        Cep *cep;
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


class TUClasse{
};


class TUCodigoAgencia{
    private:
        const static int VALOR_VALIDO   = 1234;
        const static int VALOR_INVALIDO = 0000;
        CodigoAgencia *codigoAgencia;
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


class TUCodigoAplicacao{
    private:
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
        CodigoAplicacao *codigoAplicacao;
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


class TUCodigoBanco{
};


class TUCodigoProduto{
    private:
        const static int VALOR_VALIDO   = 123;
        const static int VALOR_INVALIDO = 000;
        CodigoProduto *codigoProduto;
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


class TUCpf{
};


class TUData{
};


class TUEmissor{
};


class TUEndereco{
};


class TUHorario{
};


class TUNome{
};


class TUNumero{
};


class TUPrazo{
};


class TUSenha{
};


class TUTaxa{
    private:
        const static int VALOR_VALIDO   = 100;
        const static int VALOR_INVALIDO = 201;
        Taxa *taxa;
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


class TUValorAplicacao{
    private:
        const static int VALOR_VALIDO   = 1000000 ;
        const static int VALOR_INVALIDO = 100000001;
        ValorAplicacao *valorAplicacao;
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


class TUValorMinimo{
    private:
        const static int VALOR_VALIDO   = 100000;
        const static int VALOR_INVALIDO = 0;
        ValorMinimo *valorMinimo;
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
