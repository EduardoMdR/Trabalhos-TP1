#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUAplicacao {
  private:
    const static int VALOR_VALIDO_CODIGO = 12345;
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

#endif // TESTESENTIDADES_H_INCLUDED
