#include "dominios.h"
#include <string>

using namespace std;

class Aplicacao {
    private:
        // Dominio      // Nome atributo
        CodigoAplicacao codigo;
        ValorAplicacao  valor;
        Data            data;
    public:
        // declaração dos métodos set e get
        void setCodigo(const CodigoAplicacao&);
        CodigoAplicacao getCodigo() const;

        void setValor(const ValorAplicacao&);
        ValorAplicacao getValor() const;

        void setData(const Data&);
        Data getData() const;
};

//metodos inline de coidgo aplicação codigo aplicação
inline void Aplicacao::setCodigo(const CodigoAplicacao &codigo){
    this->codigo = codigo;
}
inline CodigoAplicacao Aplicacao::getCodigo() const{
    return codigo;
}


// valor aplicação
inline void Aplicacao::setValor(const ValorAplicacao &valor){
    this->valor = valor;
}
inline ValorAplicacao Aplicacao::getValor() const{
    return valor;
}

// data de aplicação
inline void Aplicacao::setData(const Data &data){
    this->data = data;
}
inline Data Aplicacao::getData() const{
    return data;
}

class Conta {
    private:
        CodigoBanco     banco;
        CodigoAgencia   agencia;
        Numero          numero;
    public:
        void setBanco(const CodigoBanco&);
        CodigoBanco getBanco() const;

        void setAgencia(const CodigoAgencia&);
        CodigoAgencia getAgencia() const;

        void setNumero(const Numero&);
        Numero getNumero() const;
};

// valor banco
inline void Conta::setBanco(const CodigoBanco &banco){
    this->banco = banco;    // está dando algu erro aqui
}
inline CodigoBanco Conta::getBanco() const{
    return banco;
}

// valor codigo agencia
inline void Conta::setAgencia(const CodigoAgencia &agencia){
    this->agencia = agencia;
}
inline CodigoAgencia Conta::getAgencia() const{
    return agencia;
}

// valor número
inline void Conta::setNumero(const Numero &numero){
    this->numero = numero;
}
inline Numero Conta::getNumero() const{
    return numero;
}

// class Produto {
//     private:

//     public:

// };

// class Usuario {
//     private:

//     public:

// };
