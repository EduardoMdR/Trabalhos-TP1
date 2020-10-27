#include "testesEntidades.h"

// aplicação
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

// Conta
void TUConta::setUp(){
  entidade = new Conta();
  estado = SUCESSO;
}

void TUConta::tearDown(){
  delete entidade;
}

void TUConta::testarCenarioBanco(){
  CodigoBanco valor;
  valor.setCodigoBanco(VALOR_VALIDO_BANCO);
  entidade->setBanco(valor);
  if (entidade->getBanco().getCodigoBanco() != VALOR_VALIDO_BANCO)
    estado = FALHA;
}

void TUConta::testarCenarioAgencia(){
  CodigoAgencia valor;
  valor.setCodigoAgencia(VALOR_VALIDO_AGENCIA);
  entidade->setAgencia(valor);
  if (entidade->getAgencia().getCodigoAgencia() != VALOR_VALIDO_AGENCIA)
    estado = FALHA;
}

void TUConta::testarCenarioNumero(){
  Numero valor;
  valor.setNumero(VALOR_VALIDO_NUMERO);
  entidade->setNumero(valor);
  if (entidade->getNumero().getNumero() != VALOR_VALIDO_NUMERO)
    estado = FALHA;
}

int TUConta::run(){
  setUp();
  testarCenarioBanco();
  testarCenarioAgencia();
  testarCenarioNumero();
  tearDown();
  return estado;
}