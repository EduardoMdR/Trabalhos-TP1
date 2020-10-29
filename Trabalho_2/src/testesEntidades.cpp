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
  CodigoAplicacao valor;
  valor.setCodigoAplicacao(VALOR_VALIDO_CODIGO);
  entidade->setCodigo(valor);
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
  Data valor;
  valor.setData(VALOR_VALIDO_DATA);
  entidade->setData(valor);
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


// Produto
void TUProduto::setUp(){
  entidade = new Produto();
  estado = SUCESSO;
}

void TUProduto::tearDown(){
  delete entidade;
}

void TUProduto::testarCenarioCodigo(){
  CodigoProduto valor;
  valor.setCodigoProduto(VALOR_VALIDO_CODIGO);
  entidade->setCodigo(valor);
  if (entidade->getCodigo().getCodigoProduto() != VALOR_VALIDO_CODIGO)
    estado = FALHA;
}

void TUProduto::testarCenarioClasse(){
  Classe valor;
  valor.setClasse(VALOR_VALIDO_CLASSE);
  entidade->setClasse(valor);
  if (entidade->getClasse().getClasse() != VALOR_VALIDO_CLASSE)
    estado = FALHA;
}

void TUProduto::testarCenarioEmissor(){
  Emissor valor;
  valor.setEmissor(VALOR_VALIDO_EMISSOR);
  entidade->setEmissor(valor);
  if (entidade->getEmissor().getEmissor() != VALOR_VALIDO_EMISSOR)
    estado = FALHA;
}

void TUProduto::testarCenarioPrazo(){
  Prazo valor;
  valor.setPrazo(VALOR_VALIDO_PRAZO);
  entidade->setPrazo(valor);
  if (entidade->getPrazo().getPrazo() != VALOR_VALIDO_PRAZO)
    estado = FALHA;
}

void TUProduto::testarCenarioVencimento(){
  Data valor;
  valor.setData(VALOR_VALIDO_VENCIMENTO);
  entidade->setVencimento(valor);
  if (entidade->getVencimento().getData() != VALOR_VALIDO_VENCIMENTO)
    estado = FALHA;
}

void TUProduto::testarCenarioTaxa(){
  Taxa valor;
  valor.setTaxa(VALOR_VALIDO_TAXA);
  entidade->setTaxa(valor);
  if (entidade->getTaxa().getTaxa() != VALOR_VALIDO_TAXA)
    estado = FALHA;
}

void TUProduto::testarCenarioHorario(){
  Horario valor;
  valor.setHorario(VALOR_VALIDO_HORARIO);
  entidade->setHorario(valor);
  if (entidade->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
    estado = FALHA;
}

void TUProduto::testarCenarioValor(){
  ValorMinimo valor;
  valor.setValorMinimo(VALOR_VALIDO_VALOR);
  entidade->setValor(valor);
  if (entidade->getValor().getValorMinimo() != VALOR_VALIDO_VALOR)
    estado = FALHA;
}

int TUProduto::run(){
  setUp();
  testarCenarioCodigo();
  testarCenarioClasse();
  testarCenarioEmissor();
  testarCenarioPrazo();
  testarCenarioVencimento();
  testarCenarioTaxa();
  testarCenarioHorario();
  testarCenarioValor();
  tearDown();
  return estado;
}


// usuario
void TUUsuario::setUp(){
  entidade = new Usuario();
  estado = SUCESSO;
}

void TUUsuario::tearDown(){
  delete entidade;
}

void TUUsuario::testarCenarioNome(){
  Nome valor;
  valor.setNome(VALOR_VALIDO_NOME);
  entidade->setNome(valor);
  if (entidade->getNome().getNome() != VALOR_VALIDO_NOME)
    estado = FALHA;
}

void TUUsuario::testarCenarioEndereco(){
  Endereco valor;
  valor.setEndereco(VALOR_VALIDO_ENDERECO);
  entidade->setEndereco(valor);
  if (entidade->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO)
    estado = FALHA;
}

void TUUsuario::testarCenarioCep(){
  Cep valor;
  valor.setCep(VALOR_VALIDO_CEP);
  entidade->setCep(valor);
  if (entidade->getCep().getCep() != VALOR_VALIDO_CEP)
    estado = FALHA;
}

void TUUsuario::testarCenarioCpf(){
  Cpf valor;
  valor.setCpf(VALOR_VALIDO_CPF);
  entidade->setCpf(valor);
  if (entidade->getCpf().getCpf() != VALOR_VALIDO_CPF)
    estado = FALHA;
}

void TUUsuario::testarCenarioSenha(){
  Senha valor;
  valor.setSenha(VALOR_VALIDO_SENHA);
  entidade->setSenha(valor);
  if (entidade->getSenha().getSenha() != VALOR_VALIDO_SENHA)
    estado = FALHA;
}

int TUUsuario::run(){
  setUp();
  testarCenarioNome();
  testarCenarioEndereco();
  testarCenarioCep();
  testarCenarioCpf();
  testarCenarioSenha();
  tearDown();
  return estado;
}
