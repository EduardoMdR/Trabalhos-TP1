#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;


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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
        const string VALOR_VALIDO   = "AAA";
        const string VALOR_INVALIDO = "aaa";
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
        const string VALOR_VALIDO   = "AAA";
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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
        const string VALOR_VALIDO   = "AAA";
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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
        const static int VALOR_VALIDO   = 12345;
        const static int VALOR_INVALIDO = 00000;
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
