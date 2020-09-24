#include "dominios.h"

// Exemplo
void Codigo::validar(int codigo){
    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Codigo::setCodigo(int codigo){
    validar(codigo);
    this->codigo = codigo;
}

// Cep
void Cep::validar(int cep){
    if (cep < LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Cep::setCep(int cep){
    validar(cep);
    this->cep = cep;
}

// Classe
void Classe::validar(string Classe){
    if (classe != "CDB" && classe != "LCA" && classe != "LCI" && classe != "LF"  && classe != "LC")
        throw invalid_argument("Argumento invalido.");
}
void Classe::setClasse(string classe){
    validar(classe);
    this->classe = classe;
}

// CodigoAgencia
void CodigoAgencia::validar(int codigoAgencia){
    if (codigoAgencia == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void CodigoAgencia::setCodigoAgencia(int codigoAgencia){
    validar(codigoAgencia);
    this->codigoAgencia = codigoAgencia;
}

// CodigoAplicacao
void CodigoAplicacao::validar(int codigoAplicacao){
    if (codigoAplicacao == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void CodigoAplicacao::setCodigoAplicacao(int codigoAplicacao){
    validar(codigoAplicacao);
    this->codigoAplicacao = codigoAplicacao;
}

// CodigoBanco
void CodigoBanco::validar(int codigoBanco){
    if (codigoBanco == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void CodigoBanco::setCodigoBanco(int codigoBanco){
    validar(codigoBanco);
    this->codigoBanco = codigoBanco;
}

// CodigoProduto
void CodigoProduto::validar(int codigoProduto){
    if (codigoProduto == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void CodigoProduto::setCodigoProduto(int codigoProduto){
    validar(codigoProduto);
    this->codigoProduto = codigoProduto;
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
void Taxa::validar(int taxa){
    if (taxa < LIMITEMIN || taxa > LIMITEMAX)
        throw invalid_argument("Argumento invalido.");
}
void Taxa::setTaxa(int taxa){
    validar(taxa);
    this->taxa = taxa;
}

// ValorAplicacao
void ValorAplicacao::validar(int valorAplicacao){
    if (valorAplicacao < LIMITEMIN || valorAplicacao > LIMITEMAX)
        throw invalid_argument("Argumento invalido.");
}
void ValorAplicacao::setValorAplicacao(int valorAplicacao){
    validar(valorAplicacao);
    this->valorAplicacao = valorAplicacao;
}

// ValorMinimo
void ValorMinimo::validar(int valorMinimo){
    if (valorMinimo < LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void ValorMinimo::setValorMinimo(int valorMinimo){
    validar(valorMinimo);
    this->valorMinimo = valorMinimo;
}
