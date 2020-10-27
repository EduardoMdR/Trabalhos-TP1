#include "testesEntidades.h"

void TUAplicacao::setUp(){
  entidade = new Aplicacao();
  estado = SUCESSO;
}

void TUAplicacao::tearDown(){
  delete entidade;
}

void TUAplicacao::testarCenarioCodigo(){
  CodigoAplicacao codigo;
  codigo.setCodigoAplicacao(VALOR_VALIDO_CODIGO);
  entidade->setCodigo(codigo);
  if (entidade->getCodigo().getCodigoAplicacao() != VALOR_VALIDO_CODIGO)
    estado = FALHA;
}

int TUAplicacao::run(){
  setUp();
  testarCenarioCodigo();
  testarCenarioValor();
  testarCenarioData();
  tearDown();
  return estado;
}