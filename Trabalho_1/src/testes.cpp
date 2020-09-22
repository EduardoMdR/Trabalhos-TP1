#include "testes.h"

// Teste
void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}
void TUCodigo::tearDown(){
    delete codigo;
}
void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Cep
void TUCep::setUp(){
    cep = new Cep();
    estado = SUCESSO;
}
void TUCep::tearDown(){
    delete cep;
}
void TUCep::testarCenarioSucesso(){
    try{
        cep->setCep(VALOR_VALIDO);
        if (cep->getCep() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCep::testarCenarioFalha(){
    try{
        cep->setCep(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cep->getCep() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCep::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Classe

// CodigoAgencia
void TUCodigoAgencia::setUp(){
    codigoAgencia = new CodigoAgencia();
    estado = SUCESSO;
}
void TUCodigoAgencia::tearDown(){
    delete codigoAgencia;
}
void TUCodigoAgencia::testarCenarioSucesso(){
    try{
        codigoAgencia->setCodigoAgencia(VALOR_VALIDO);
        if (codigoAgencia->getCodigoAgencia() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoAgencia::testarCenarioFalha(){
    try{
        codigoAgencia->setCodigoAgencia(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoAgencia->getCodigoAgencia() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoAgencia::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// CodigoAplicacao
void TUCodigoAplicacao::setUp(){
    codigoAplicacao = new CodigoAplicacao();
    estado = SUCESSO;
}
void TUCodigoAplicacao::tearDown(){
    delete codigoAplicacao;
}
void TUCodigoAplicacao::testarCenarioSucesso(){
    try{
        codigoAplicacao->setCodigoAplicacao(VALOR_VALIDO);
        if (codigoAplicacao->getCodigoAplicacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoAplicacao::testarCenarioFalha(){
    try{
        codigoAplicacao->setCodigoAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoAplicacao->getCodigoAplicacao() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// CodigoAgencia

// CodigoProduto
void TUCodigoProduto::setUp(){
    codigoProduto = new CodigoProduto();
    estado = SUCESSO;
}
void TUCodigoProduto::tearDown(){
    delete codigoProduto;
}
void TUCodigoProduto::testarCenarioSucesso(){
    try{
        codigoProduto->setCodigoProduto(VALOR_VALIDO);
        if (codigoProduto->getCodigoProduto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoProduto::testarCenarioFalha(){
    try{
        codigoProduto->setCodigoProduto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoProduto->getCodigoProduto() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoProduto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Cpf

// Data

// Emissor

// Endereco

// Horario

// Nome

// Numero

// Prazo

// Senha

// Taxa
void TUTaxa::setUp(){
    taxa = new Taxa();
    estado = SUCESSO;
}
void TUTaxa::tearDown(){
    delete taxa;
}
void TUTaxa::testarCenarioSucesso(){
    try{
        taxa->setTaxa(VALOR_VALIDO);
        if (taxa->getTaxa() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUTaxa::testarCenarioFalha(){
    try{
        taxa->setTaxa(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (taxa->getTaxa() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUTaxa::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ValorAplicacao
void TUValorAplicacao::setUp(){
    valorAplicacao = new ValorAplicacao();
    estado = SUCESSO;
}
void TUValorAplicacao::tearDown(){
    delete valorAplicacao;
}
void TUValorAplicacao::testarCenarioSucesso(){
    try{
        valorAplicacao->setValorAplicacao(VALOR_VALIDO);
        if (valorAplicacao->getValorAplicacao() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUValorAplicacao::testarCenarioFalha(){
    try{
        valorAplicacao->setValorAplicacao(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (valorAplicacao->getValorAplicacao() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUValorAplicacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// ValorMinimo
void TUValorMinimo::setUp(){
    valorMinimo = new ValorMinimo();
    estado = SUCESSO;
}
void TUValorMinimo::tearDown(){
    delete valorMinimo;
}
void TUValorMinimo::testarCenarioSucesso(){
    try{
        valorMinimo->setValorMinimo(VALOR_VALIDO);
        if (valorMinimo->getValorMinimo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUValorMinimo::testarCenarioFalha(){
    try{
        valorMinimo->setValorMinimo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (valorMinimo->getValorMinimo() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUValorMinimo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

