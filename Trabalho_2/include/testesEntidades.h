#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUAplicacao {
  private:
    const static int VALOR_VALIDO_CODIGO = 12345;
    const static int VALOR_VALIDO_VALOR  = 1000000;
    const static int VALOR_VALIDO_DATA   = 20102020;
    Aplicacao *entidade;
    int estado;

    void setUp();  // crear objeto para teste
    void tearDown();  // destruir objeto
    void testarCenarioCodigo();
    void testarCenarioValor();
    void testarCenarioData();
  public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUConta {
  private:
    const static int VALOR_VALIDO_BANCO   = 001;
    const static int VALOR_VALIDO_AGENCIA = 1234;
    const string VALOR_VALIDO_NUMERO      = "1584-9";
    Conta *entidade;
    int estado;

    void setUp();  // crear objeto para teste
    void tearDown();  // destruir objeto
    void testarCenarioBanco();
    void testarCenarioAgencia();
    void testarCenarioNumero();
  public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUProduto {
  private:
    const static int VALOR_VALIDO_CODIGO     = 123;
    const string VALOR_VALIDO_CLASSE         = "CDB";
    const string VALOR_VALIDO_EMISSOR        = "Aaaaa";
    const static int VALOR_VALIDO_PRAZO      = 6;
    const static int VALOR_VALIDO_VENCIMENTO = 20102020;
    const static int VALOR_VALIDO_TAXA       = 100;
    const static int VALOR_VALIDO_HORARIO    = 1350;
    const static int VALOR_VALIDO_VALOR      = 1000;

    Produto *entidade;
    int estado;

    void setUp();  // crear objeto para teste
    void tearDown();  // destruir objeto
    void testarCenarioCodigo();
    void testarCenarioClasse();
    void testarCenarioEmissor();
    void testarCenarioPrazo();
    void testarCenarioVencimento();
    void testarCenarioTaxa();
    void testarCenarioHorario();
    void testarCenarioValor();

  public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUUsuario {
  private:
    const string VALOR_VALIDO_NOME     = "Eduardo";
    const string VALOR_VALIDO_ENDERECO = "AAaaa";
    const static int VALOR_VALIDO_CEP  = 37795000;
    const string VALOR_VALIDO_CPF      = "14655871601";
    const string VALOR_VALIDO_SENHA    = "123456";

    Usuario *entidade;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioNome();
    void testarCenarioEndereco();
    void testarCenarioCep();
    void testarCenarioCpf();
    void testarCenarioSenha();

  public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTESENTIDADES_H_INCLUDED
