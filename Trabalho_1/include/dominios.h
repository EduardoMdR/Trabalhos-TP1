#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Codigo{
    private:
        int codigo;
        const static int LIMITE = 25;
        void validar(int);

    public:
        void setCodigo(int);
        int getCodigo() const {
            return codigo;
        }
};

class Cep{
    private:
        int cep;
        const static int LIMITE = 1000000;
        void validar(int);

    public:
        void setCep(int);
        int getCep() const {
            return cep;
        }
};

class Classe{
    private:
        string classe;
        const string LIMITE[5] = {"CDB","LCA","LCI","LF","LC"};
        void validar(string);

    public:
        void setClasse(string);
        string getClasse() const {
            return classe;
        }
};

class CodigoAgencia{
    private:
        int codigoAgencia;
        const static int LIMITE = 0000;
        void validar(int);

    public:
        void setCodigoAgencia(int);
        int getCodigoAgencia() const {
            return codigoAgencia;
        }
};

class CodigoAplicacao{
    private:
        int codigoAplicacao;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setCodigoAplicacao(int);
        int getCodigoAplicacao() const {
            return codigoAplicacao;
        }
};

class CodigoBanco{
    private:
        int codigoBanco;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setCodigoBanco(int);
        int getCodigoBanco() const {
            return codigoBanco;
        }
};

class CodigoProduto{
    private:
        int codigoProduto;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setCodigoProduto(int);
        int getCodigoProduto() const {
            return codigoProduto;
        }
};

class Cpf{
    private:
        int cpf;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setCpf(int);
        int getCpf() const {
            return cpf;
        }
};

class Data{
    private:
        int data;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setData(int);
        int getData() const {
            return data;
        }
};

class Emissor{
    private:
        string emissor;
        const string LIMITE = "aaa";
        void validar(string);

    public:
        void setEmissor(string);
        string getEmissor() const {
            return emissor;
        }
};

class Endereco{
    private:
        string endereco;
        const string LIMITE = "aaa";
        void validar(string);

    public:
        void setEndereco(string);
        string getEndereco() const {
            return endereco;
        }
};

class Horario{
    private:
        int horario;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setHorario(int);
        int getHorario() const {
            return horario;
        }
};

class Nome{
    private:
        string nome;
        const string LIMITE = "aaa";
        void validar(string);

    public:
        void setNome(string);
        string getNome() const {
            return nome;
        }
};

class Numero{
    private:
        int numero;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setNumero(int);
        int getNumero() const {
            return numero;
        }
};

class Prazo{
    private:
        int prazo;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setPrazo(int);
        int getPrazo() const {
            return prazo;
        }
};

class Senha{
    private:
        int senha;
        const static int LIMITE = 0;
        void validar(int);

    public:
        void setSenha(int);
        int getSenha() const {
            return senha;
        }
};

class Taxa{
    private:
        int taxa;
        const static int LIMITEMIN = 0;
        const static int LIMITEMAX = 200;
        void validar(int);

    public:
        void setTaxa(int);
        int getTaxa() const {
            return taxa;
        }
};

class ValorAplicacao{
    private:
        int valorAplicacao;
        const static int LIMITEMAX =  100000000 ;
        const static int LIMITEMIN =  0 ;
        void validar(int);

    public:
        void setValorAplicacao(int);
        int getValorAplicacao() const {
            return valorAplicacao;
        }
};

class ValorMinimo{
    private:
        int valorMinimo;
        const static int LIMITE =  100000 ;
        void validar(int);

    public:
        void setValorMinimo(int);
        int getValorMinimo() const {
            return valorMinimo;
        }
};


#endif // DOMINIOS_H_INCLUDED rMinimo
