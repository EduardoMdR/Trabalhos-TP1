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
void Cpf::validar(int cpf){
    if (cpf == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Cpf::setCpf(int cpf){
    validar(cpf);
    this->cpf = cpf;
}

// Data
void Data::validar(int data){
    if (data == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Data::setData(int data){
    validar(data);
    this->data = data;
}

// Emissor
void Emissor::validar(string emissor){
    if (emissor == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Emissor::setEmissor(string emissor){
    validar(emissor);
    this->emissor = emissor;
}

// Endereco
void Endereco::validar(string endereco){
    if (endereco == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;
}

// Horario
void Horario::validar(int horario){
    if (horario == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Horario::setHorario(int horario){
    validar(horario);
    this->horario = horario;
}

// Nome
void Nome::validar(string nome){
    if (nome == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}

// Numero
void Numero::validar(int numero){
    if (numero == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Numero::setNumero(int numero){
    validar(numero);
    this->numero = numero;
}

// Prazo
void Prazo::validar(int prazo){
    if (prazo == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Prazo::setPrazo(int prazo){
    validar(prazo);
    this->prazo = prazo;
}

// Senha
void Senha::validar(int senha){
    if (senha == LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Senha::setSenha(int senha){
    validar(senha);
    this->senha = senha;
}

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
