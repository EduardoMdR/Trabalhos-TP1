#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Aplicacao {
    private:
        // Dominio      // Nome atributo
        CodigoAplicacao codigo;
        // ValorAplicacao  valor;
        // Data            data;
    public:
        // declaração dos métodos set e get
        void setCodigo(const CodigoAplicacao&);
        CodigoAplicacao getCodigo() const;
};

//metodos inline de coidgo aplicação
inline void Aplicacao::setCodigo(const CodigoAplicacao &codigo){
    this->codigo = codigo;
}
inline CodigoAplicacao Aplicacao::getCodigo() const{
    return codigo;
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
