#include "testes.h"


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
void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}
void TUClasse::tearDown(){
    delete classe;
}
void TUClasse::testarCenarioSucesso(){
    try{
        classe->setClasse(VALOR_VALIDO);
        if (classe->getClasse() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUClasse::testarCenarioFalha(){
    try{
        classe->setClasse(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getClasse() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


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

// CodigoBanco
void TUCodigoBanco::setUp(){
    codigoBanco = new CodigoBanco();
    estado = SUCESSO;
}
void TUCodigoBanco::tearDown(){
    delete codigoBanco;
}
void TUCodigoBanco::testarCenarioSucesso(){
    try{
        codigoBanco->setCodigoBanco(VALOR_VALIDO);
        if (codigoBanco->getCodigoBanco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCodigoBanco::testarCenarioFalha(){
    try{
        codigoBanco->setCodigoBanco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigoBanco->getCodigoBanco() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCodigoBanco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

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
void TUCpf::setUp(){
    cpf = new Cpf();
    estado = SUCESSO;
}
void TUCpf::tearDown(){
    delete cpf;
}
void TUCpf::testarCenarioSucesso(){
    try{
        cpf->setCpf(VALOR_VALIDO);
        if (cpf->getCpf() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUCpf::testarCenarioFalha(){
    try{
        cpf->setCpf(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cpf->getCpf() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUCpf::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Data
void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}
void TUData::tearDown(){
    delete data;
}
void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getData() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Emissor
void TUEmissor::setUp(){
    emissor = new Emissor();
    estado = SUCESSO;
}
void TUEmissor::tearDown(){
    delete emissor;
}
void TUEmissor::testarCenarioSucesso(){
    try{
        emissor->setEmissor(VALOR_VALIDO);
        if (emissor->getEmissor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEmissor::testarCenarioFalha(){
    try{
        emissor->setEmissor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (emissor->getEmissor() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUEmissor::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Endereco
void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}
void TUEndereco::tearDown(){
    delete endereco;
}
void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getEndereco() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Horario
void TUHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}
void TUHorario::tearDown(){
    delete horario;
}
void TUHorario::testarCenarioSucesso(){
    try{
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUHorario::testarCenarioFalha(){
    try{
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (horario->getHorario() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Nome
void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}
void TUNome::tearDown(){
    delete nome;
}
void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Numero
void TUNumero::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}
void TUNumero::tearDown(){
    delete numero;
}
void TUNumero::testarCenarioSucesso(){
    try{
        numero->setNumero(VALOR_VALIDO);
        if (numero->getNumero() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUNumero::testarCenarioFalha(){
    try{
        numero->setNumero(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (numero->getNumero() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUNumero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Prazo
void TUPrazo::setUp(){
    prazo = new Prazo();
    estado = SUCESSO;
}
void TUPrazo::tearDown(){
    delete prazo;
}
void TUPrazo::testarCenarioSucesso(){
    try{
        prazo->setPrazo(VALOR_VALIDO);
        if (prazo->getPrazo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUPrazo::testarCenarioFalha(){
    try{
        prazo->setPrazo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (prazo->getPrazo() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUPrazo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// Senha
void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}
void TUSenha::tearDown(){
    delete senha;
}
void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

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

