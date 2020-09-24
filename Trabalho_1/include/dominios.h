#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe CEP
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso <u>menor</u> ou igual 1000000.
///

class Cep{
    private:
        int cep;
        const static int LIMITE = 1000000;

///
/// V&aacute;lida o objeto caso esteja dentro do valor LIMITE .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setCep(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getCep() const {
            return cep;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Classe.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja um valor v&aacute;lido estabelecido: CDB, LCA, LCI, LF, LC.
///

class Classe{
    private:
        string classe;
        const string LIMITE[5] = {"CDB","LCA","LCI","LF","LC"};

///
/// V&aacute;lida o objeto caso esteja dentro do valores estabelecidos .
///
        void validar(string);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setClasse(string);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        string getClasse() const {
            return classe;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe C&oacute;digo da Ag&ecirc;ncia
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso <u>diferente</u> de 0000.
///

class CodigoAgencia{
    private:
        int codigoAgencia;
        const static int LIMITE = 0000;

///
/// V&aacute;lida o objeto caso n&atilde;o seja 0000 .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setCodigoAgencia(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getCodigoAgencia() const {
            return codigoAgencia;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe C&oacute;digo da Aplica&ccedil;&atilde;o .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso <u>diferente</u> de 00000.
///

class CodigoAplicacao{
    private:
        int codigoAplicacao;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso n&atilde;o seja 00000.
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setCodigoAplicacao(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getCodigoAplicacao() const {
            return codigoAplicacao;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe C&oacute;digo do Banco .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja um valor v&aacute;lido estabelecido: 001, 033, 104, 237, 341.
///

class CodigoBanco{
    private:
        int codigoBanco;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso esteja dentro do valores estabelecidos .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setCodigoBanco(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getCodigoBanco() const {
            return codigoBanco;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe C&oacute;digo do Produto .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja diferente de 000 .
///

class CodigoProduto{
    private:
        int codigoProduto;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso seja diferente de 000 .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setCodigoProduto(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getCodigoProduto() const {
            return codigoProduto;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Cpf .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso a soma dos valores seja 33, 44, 55 ou 66 .
///

class Cpf{
    private:
        int cpf;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso respeite a soma dos numeros .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setCpf(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getCpf() const {
            return cpf;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Data .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso dia (1/31), m&ecirc;s (1/12) e ano (2020/2099) .
///

class Data{
    private:
        int data;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso a data esteja certa .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setData(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getData() const {
            return data;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Emissor .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja  composto por 5 a 30 caracteres (a/z ou A/Z), (0/9), (./,/ ). Apenas d&iacute;gitos e letras podem estar em sequ&ecirc;ncia, e a primeira letra deve ser mai&uacute;scula .
///

class Emissor{
    private:
        string emissor;
        const string LIMITE = "aaa";

///
/// V&aacute;lida o objeto caso obede&ccedil;a o formato estabelecido .
///
        void validar(string);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setEmissor(string);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        string getEmissor() const {
            return emissor;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Endere&ccedil;o .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja  composto por 5 a 30 caracteres (a/z ou A/Z), (0/9), (./,/ ). Apenas d&iacute;gitos e letras podem estar em sequ&ecirc;ncia, e a primeira letra deve ser mai&uacute;scula .
///

class Endereco{
    private:
        string endereco;
        const string LIMITE = "aaa";

///
/// V&aacute;lida o objeto caso obede&ccedil;a o formato estabelecido .
///
        void validar(string);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setEndereco(string);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        string getEndereco() const {
            return endereco;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Hor&aacute;rio .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso esteja entre as  13:00 e 17:00 horas .
///

class Horario{
    private:
        int horario;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso obede&ccedil;a o hor&aacute;rio estabelecido .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setHorario(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getHorario() const {
            return horario;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Nome .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja  composto por 5 a 30 caracteres (a/z ou A/Z) e espa&ccedil;os. N&atilde;o h&aacute; espa&ccedil;os em sequ&ecirc;ncia e a primeira letra deve ser mai&uacute;scula .
///

class Nome{
    private:
        string nome;
        const string LIMITE = "aaa";

///
/// V&aacute;lida o objeto caso obede&ccedil;a o formato estabelecido .
///
        void validar(string);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setNome(string);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        string getNome() const {
            return nome;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe N&uacute;mero .
///
/// Regras de formato :
///
/// - C&oacute;digo &eacute; v&aacute;lido caso ( XXXXXX-Y ), sendo X um n&uacute;mero de (0/9) e Y calculado atrav&eacute;z de um algoritomo .
///

class Numero{
    private:
        int numero;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso obede&ccedil;a o formato estabelecido .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setNumero(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getNumero() const {
            return numero;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Prazo .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja um valor v&aacute;lido estabelecido: 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72 (mêses).  .
///

class Prazo{
    private:
        int prazo;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso esteja dentro do valores estabelecidos .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setPrazo(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getPrazo() const {
            return prazo;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Senha .
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso n&atilde;o haja d&iacute;gitos repetidos .
///

class Senha{
    private:
        int senha;
        const static int LIMITE = 0;

///
/// V&aacute;lida o objeto caso nao repita nenhum n&uacute;mero .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setSenha(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getSenha() const {
            return senha;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Taxa .
///
/// Regras de formato :
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja um valor na faixa de 0 a 200  (% ao ano) .
///

class Taxa{
    private:
        int taxa;
        const static int LIMITEMIN = 0;
        const static int LIMITEMAX = 200;

///
/// V&aacute;lida o objeto caso esteja dentro do valores estabelecidos .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setTaxa(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getTaxa() const {
            return taxa;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Valor de Aplica&ccedil;&atilde;o .
///
/// Regras de formato :
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja um valor na  faixa de 0 a 1.000.000,00 (reais) .
///

class ValorAplicacao{
    private:
        int valorAplicacao;
        const static int LIMITEMAX =  100000000 ;
        const static int LIMITEMIN =  0 ;

///
/// V&aacute;lida o objeto caso esteja dentro do valores estabelecidos .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setValorAplicacao(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getValorAplicacao() const {
            return valorAplicacao;
        }
};


///
/// Padr&atilde;o para representa&ccedil;&atilde;o da classe Valor M&iacute;nimo .
///
/// Regras de formato :
///
/// - C&oacute;digo &eacute; v&aacute;lido caso seja um valor v&aacute;lido estabelecido:  1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais).  .
///

class ValorMinimo{
    private:
        int valorMinimo;
        const static int LIMITE =  100000 ;

///
/// V&aacute;lida o objeto caso esteja dentro do valores estabelecidos .
///
        void validar(int);

    public:

///
/// Armazena c&oacute;digo .
///
/// @param valor c&oacute;digo .
///
/// @return .
///
/// - Armazena caso seja um valor v&aacute;lido .
/// - n&atilde;o armazena caso seja um valor inv&aacute;lido .
///
        void setValorMinimo(int);

///
/// Retorna o valor armazenado no atributo de inst&acirc;ncia .
///
        int getValorMinimo() const {
            return valorMinimo;
        }
};


#endif // DOMINIOS_H_INCLUDED rMinimo
