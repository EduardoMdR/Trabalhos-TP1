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

#endif // TESTESENTIDADES_H_INCLUDED
