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

void TUAplicacao::testarCenarioValor(){
  ValorAplicacao valor;
  valor.setValorAplicacao(VALOR_VALIDO_VALOR);
  entidade->setValor(valor);
  if (entidade->getValor().getValorAplicacao() != VALOR_VALIDO_VALOR)
    estado = FALHA;
}

void TUAplicacao::testarCenarioCodigo(){
  Data data;
  data.setData(VALOR_VALIDO_DATA);
  entidade->setData(data);
  if (entidade->getData().getData() != VALOR_VALIDO_DATA)
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