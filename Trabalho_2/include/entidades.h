#include "dominios.h"
#include <string>

using namespace std;

/**
 * @brief Entidade para Aplicação
 *
 */
class Aplicacao {
    private:
        // Dominio      // Nome atributo
        CodigoAplicacao codigo;
        ValorAplicacao  valor;
        Data            data;
    public:
        // declaração dos métodos setters e getters

/**
 * @brief Set para o atributo código
 *
 */
        void setCodigo(const CodigoAplicacao&);

/**
 * @brief Get para Código
 *
 * @return CodigoAplicacao
 */
        CodigoAplicacao getCodigo() const;

/**
 * @brief Set para o atributo valor
 *
 */

        void setValor(const ValorAplicacao&);

/**
 * @brief Get para Valor
 *
 * @return ValorAplicacao
 */

        ValorAplicacao getValor() const;

/**
 * @brief Set para o atributo Data
 *
 */
        void setData(const Data&);

/**
 * @brief Get para Data
 *
 * @return Data
 */
        Data getData() const;
};

/**
 * @brief método inline para setCodigo
 *
 * @param codigo
 */
inline void Aplicacao::setCodigo(const CodigoAplicacao &codigo){
    this->codigo = codigo;
}

/**
 * @brief método inline para getCodigo
 *
 * @return CodigoAplicacao
 */
inline CodigoAplicacao Aplicacao::getCodigo() const{
    return codigo;
}


/**
 * @brief método inline para setValor
 *
 * @param valor
 */
inline void Aplicacao::setValor(const ValorAplicacao &valor){
    this->valor = valor;
}

/**
 * @brief método inline para getValor
 *
 * @return ValorAplicacao
 */
inline ValorAplicacao Aplicacao::getValor() const{
    return valor;
}

/**
 * @brief método inline para setData
 *
 * @param data
 */
inline void Aplicacao::setData(const Data &data){
    this->data = data;
}

/**
 * @brief método inline para getData
 *
 * @return Data
 */
inline Data Aplicacao::getData() const{
    return data;
}


/**
 * @brief Entidade para Conta
 *
 */
class Conta {
    private:
        CodigoBanco     banco;
        CodigoAgencia   agencia;
        Numero          numero;
    public:

/**
 * @brief Set the Banco object
 *
 */
        void setBanco(const CodigoBanco&);

/**
 * @brief Get the Banco object
 *
 * @return CodigoBanco
 */
        CodigoBanco getBanco() const;

/**
 * @brief Set the Agencia object
 *
 */
        void setAgencia(const CodigoAgencia&);

/**
 * @brief Get the Agencia object
 *
 * @return CodigoAgencia
 */
        CodigoAgencia getAgencia() const;

/**
 * @brief Set the Numero object
 *
 */
        void setNumero(const Numero&);

/**
 * @brief Get the Numero object
 *
 * @return Numero
 */
        Numero getNumero() const;
};

/**
 * @brief método inline para setBanco
 *
 * @param banco
 */
inline void Conta::setBanco(const CodigoBanco &banco){
    this->banco = banco;    // está dando algu erro aqui
}

/**
 * @brief método inline para getBanco
 *
 * @return CodigoBanco
 */
inline CodigoBanco Conta::getBanco() const{
    return banco;
}

/**
 * @brief método inline para setAgencia
 *
 * @param agencia
 */
inline void Conta::setAgencia(const CodigoAgencia &agencia){
    this->agencia = agencia;
}

/**
 * @brief método inline para getAgencia
 *
 * @return CodigoAgencia
 */
inline CodigoAgencia Conta::getAgencia() const{
    return agencia;
}

/**
 * @brief método inline para setNumero
 *
 * @param numero
 */
inline void Conta::setNumero(const Numero &numero){
    this->numero = numero;
}

/**
 * @brief método inline para getNumero
 *
 * @return Numero
 */
inline Numero Conta::getNumero() const{
    return numero;
}


/**
 * @brief Entidade para Produto
 *
 */
class Produto {
    private:
        CodigoProduto   codigo;
        Classe          classe;
        Emissor         emissor;
        Prazo           prazo;
        Data            vencimento;
        Taxa            taxa;
        Horario         horario;
        ValorMinimo     valor;
    public:

/**
 * @brief Set the Codigo object
 *
 */
        void setCodigo(const CodigoProduto&);

/**
 * @brief Get the Codigo object
 *
 * @return CodigoProduto
 */
        CodigoProduto getCodigo() const;

/**
 * @brief Set the Classe object
 *
 */
        void setClasse(const Classe&);

/**
 * @brief Get the Classe object
 *
 * @return Classe
 */
        Classe getClasse() const;

/**
 * @brief Set the Emissor object
 *
 */
        void setEmissor(const Emissor&);

/**
 * @brief Get the Emissor object
 *
 * @return Emissor
 */
        Emissor getEmissor() const;

/**
 * @brief Set the Prazo object
 *
 */
        void setPrazo(const Prazo&);

/**
 * @brief Get the Prazo object
 *
 * @return Prazo
 */
        Prazo getPrazo() const;

/**
 * @brief Set the Vencimento object
 *
 */
        void setVencimento(const Data&);

/**
 * @brief Get the Vencimento object
 *
 * @return Data
 */
        Data getVencimento() const;

/**
 * @brief Set the Taxa object
 *
 */
        void setTaxa(const Taxa&);

/**
 * @brief Get the Taxa object
 *
 * @return Taxa
 */
        Taxa getTaxa() const;

/**
 * @brief Set the Horario object
 *
 */
        void setHorario(const Horario&);

/**
 * @brief Get the Horario object
 *
 * @return Horario
 */
        Horario getHorario() const;

/**
 * @brief Set the Valor object
 *
 */
        void setValor(const ValorMinimo&);

/**
 * @brief Get the Valor object
 *
 * @return ValorMinimo
 */
        ValorMinimo getValor() const;
};

/**
 * @brief método inline para setCodigo
 *
 * @param codigo
 */
inline void Produto::setCodigo(const CodigoProduto &codigo){
    this->codigo = codigo;
}

/**
 * @brief método inline para getCodigo
 *
 * @return CodigoProduto
 */
inline CodigoProduto Produto::getCodigo() const{
    return codigo;
}

/**
 * @brief método inline para setClasse
 *
 * @param classe
 */
inline void Produto::setClasse(const Classe &classe){
    this->classe = classe;
}

/**
 * @brief método inline para getClasse
 *
 * @return Classe
 */
inline Classe Produto::getClasse() const{
    return classe;
}

/**
 * @brief método inline para setEmissor
 *
 * @param emissor
 */
inline void Produto::setEmissor(const Emissor &emissor){
    this->emissor = emissor;
}

/**
 * @brief método inline para getEmissor
 *
 * @return Emissor
 */
inline Emissor Produto::getEmissor() const{
    return emissor;
}

/**
 * @brief método inline para setPrazo
 *
 * @param prazo
 */
inline void Produto::setPrazo(const Prazo &prazo){
    this->prazo = prazo;    // está dando algu erro aqui
}

/**
 * @brief método inline para getPrazo
 *
 * @return Prazo
 */
inline Prazo Produto::getPrazo() const{
    return prazo;
}

/**
 * @brief método inline para setVencimento
 *
 * @param vencimento
 */
inline void Produto::setVencimento(const Data &vencimento){
    this->vencimento = vencimento;
}

/**
 * @brief método inline para getVencimento
 *
 * @return Data
 */
inline Data Produto::getVencimento() const{
    return vencimento;
}

/**
 * @brief método inline para setTaxa
 *
 * @param taxa
 */
inline void Produto::setTaxa(const Taxa &taxa){
    this->taxa = taxa;
}

/**
 * @brief método inline para getTaxa
 *
 * @return Taxa
 */
inline Taxa Produto::getTaxa() const{
    return taxa;
}

/**
 * @brief método inline para setHorario
 *
 * @param horario
 */
inline void Produto::setHorario(const Horario &horario){
    this->horario = horario;
}

/**
 * @brief método inline para getHorario
 *
 * @return Horario
 */
inline Horario Produto::getHorario() const{
    return horario;
}

/**
 * @brief método inline para setValor
 *
 * @param valor
 */
inline void Produto::setValor(const ValorMinimo &valor){
    this->valor = valor;    // está dando algu erro aqui
}

/**
 * @brief método inline para getValor
 *
 * @return ValorMinimo
 */
inline ValorMinimo Produto::getValor() const{
    return valor;
}


/**
 * @brief Entidade para Usuario
 *
 */
class Usuario {
    private:
        Nome            nome;
        Endereco        endereco;
        Cep             cep;
        Cpf             cpf;
        Senha           senha;
    public:

/**
 * @brief Set the Nome object
 *
 */
        void setNome(const Nome&);

/**
 * @brief Get the Nome object
 *
 * @return Nome
 */
        Nome getNome() const;

/**
 * @brief Set the Endereco object
 *
 */
        void setEndereco(const Endereco&);

/**
 * @brief Get the Endereco object
 *
 * @return Endereco
 */
        Endereco getEndereco() const;

/**
 * @brief Set the Cep object
 *
 */
        void setCep(const Cep&);

/**
 * @brief Get the Cep object
 *
 * @return Cep
 */
        Cep getCep() const;

/**
 * @brief Set the Cpf object
 *
 */
        void setCpf(const Cpf&);

/**
 * @brief Get the Cpf object
 *
 * @return Cpf
 */
        Cpf getCpf() const;

/**
 * @brief Set the Senha object
 *
 */
        void setSenha(const Senha&);

/**
 * @brief Get the Senha object
 *
 * @return Senha
 */
        Senha getSenha() const;
};

/**
 * @brief método inline para setNome
 *
 * @param nome
 */
inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

/**
 * @brief método inline para getNome
 *
 * @return Nome
 */
inline Nome Usuario::getNome() const{
    return nome;
}

/**
 * @brief método inline para setEndereco
 *
 * @param endereco
 */
inline void Usuario::setEndereco(const Endereco &endereco){
    this->endereco = endereco;
}

/**
 * @brief método inline para getEndereco
 *
 * @return Endereco
 */
inline Endereco Usuario::getEndereco() const{
    return endereco;
}

/**
 * @brief método inline para setCep
 *
 * @param cep
 */
inline void Usuario::setCep(const Cep &cep){
    this->cep = cep;
}

/**
 * @brief método inline para getCep
 *
 * @return Cep
 */
inline Cep Usuario::getCep() const{
    return cep;
}

/**
 * @brief método inline para setCpf
 *
 * @param cpf
 */
inline void Usuario::setCpf(const Cpf &cpf){
    this->cpf = cpf;
}

/**
 * @brief método inline para getCpf
 *
 * @return Cpf
 */
inline Cpf Usuario::getCpf() const{
    return cpf;
}

/**
 * @brief método inline para setSenha
 *
 * @param senha
 */
inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

/**
 * @brief método inline para getSenha
 *
 * @return Senha
 */
inline Senha Usuario::getSenha() const{
    return senha;
}


