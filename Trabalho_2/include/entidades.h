#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

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
inline void Aplicacao::setData(const Data &codigo){
    this->data = data;
}
inline Data Aplicacao::getData() const{
    return data;
}

// class Conta {
//     private:
//         CodigoBanco     banco;
//         CodigoAgencia   agencia;
//         Numero          numero;
//     public:

// };

// class Produto {
//     private:

//     public:

// };

// class Usuario {
//     private:

//     public:

// };

#endif // ENTIDADES_H_INCLUDED
