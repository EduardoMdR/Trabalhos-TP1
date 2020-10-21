#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;


class TUCep{
    private:
        const static int VALOR_VALIDO   = 37795000;
        const static int VALOR_INVALIDO =   900000;
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
    private:
        const string VALOR_VALIDO   = "CDB";
        const string VALOR_INVALIDO = "AAA";
        Classe *classe;
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
    private:
        const static int VALOR_VALIDO   = 341;
        const static int VALOR_INVALIDO = 000;
        CodigoBanco *codigoBanco;
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
    private:
        const string VALOR_VALIDO   = "14655871601";
        const string VALOR_INVALIDO = "11111111111";
        Cpf *cpf;
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


class TUData{
    private:
        const static int VALOR_VALIDO   = 20102020;
        const static int VALOR_INVALIDO = 0;
        Data *data;
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


class TUEmissor{
    private:
        const string VALOR_VALIDO   = "Aaaaa";
        const string VALOR_INVALIDO = "aAa";
        Emissor *emissor;
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


class TUEndereco{
    private:
        const string VALOR_VALIDO   = "AAaaa";
        const string VALOR_INVALIDO = "aaa";
        Endereco *endereco;
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


class TUHorario{
    private:
        const static int VALOR_VALIDO   = 1350;
        const static int VALOR_INVALIDO = 1750;
        Horario *horario;
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


class TUNome{
    private:
        const string VALOR_VALIDO   = "Eduardo";
        const string VALOR_INVALIDO = "aaa";
        Nome *nome;
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


class TUNumero{
    private:
        const string VALOR_VALIDO   = "1584-9";
        const string VALOR_INVALIDO = "1584-0";
        Numero *numero;
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


class TUPrazo{
    private:
        const static int VALOR_VALIDO   = 6;
        const static int VALOR_INVALIDO = 1;
        Prazo *prazo;
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


class TUSenha{
    private:
        const string VALOR_VALIDO   = "123456";
        const string VALOR_INVALIDO = "123455";
        Senha *senha;
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
        const static int VALOR_VALIDO   = 1000000;
        const static int VALOR_INVALIDO = 1000001;
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
        const static int VALOR_VALIDO   = 1000;
        const static int VALOR_INVALIDO =    0;
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
