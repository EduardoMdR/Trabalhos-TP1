#include "dominios.h"


// Cep
void Cep::validar(int cep){
    if (cep < LIMITEMINIMO || cep > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Cep::setCep(int cep){
    validar(cep);
    this->cep = cep;
}

// Classe
void Classe::validar(string classe){
    if (classe == LIMITE[0] || classe == LIMITE[1] ||
        classe == LIMITE[2] || classe == LIMITE[3] ||
        classe == LIMITE[4]){
    }else{  // caso a palavra recebida seja diferente das obrigatorias, é lançada exceção
        throw invalid_argument("Argumento invalido.");
    }
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
    if (codigoBanco == LIMITE[0] ||
        codigoBanco == LIMITE[1] ||
        codigoBanco == LIMITE[2] ||
        codigoBanco == LIMITE[3] ||
        codigoBanco == LIMITE[4]){
    }else{
        throw invalid_argument("Argumento invalido.");
    }
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
void Cpf::validar(string cpf){
    string digito;
    int valorcpf = 0;
    for(int i = 0; i < cpf.length(); i++){
        digito = cpf.at(i);
        valorcpf += stoi(digito);
    }
    if (valorcpf != LIMITE)
        throw invalid_argument("Argumento invalido.");
}
void Cpf::setCpf(string cpf){
    validar(cpf);
    this->cpf = cpf;
}

// Data
void Data::validar(int data){
    if (data < LIMITEMINIMO || data > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Data::setData(int data){
    validar(data);
    this->data = data;
}

// Emissor
void Emissor::validar(string emissor){
    char maiuscula;
    char letrainicial = emissor.at(0);  // recebe o primeiro caracter
    maiuscula = toupper(emissor[0]);    // recebi o primeiro caracter em maiusculo (se não tiver)
                                        // compara para ver se o primeiro caracter é maiusculo
    if (letrainicial != maiuscula || emissor.length() < 5 || emissor.length() > 30)
        throw invalid_argument("Argumento invalido.");
}
void Emissor::setEmissor(string emissor){
    validar(emissor);
    this->emissor = emissor;
}

// Endereco
void Endereco::validar(string endereco){
    char maiuscula;
    char letrainicial = endereco.at(0);
    maiuscula = toupper(endereco[0]);
    if (letrainicial != maiuscula || endereco.length() < 5 || endereco.length() > 30)
        throw invalid_argument("Argumento invalido.");
}
void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;
}

// Horario
void Horario::validar(int horario){
    if (horario < LIMITEMINIMO || horario > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Horario::setHorario(int horario){
    validar(horario);
    this->horario = horario;
}

// Nome
void Nome::validar(string nome){
    char maiuscula;
    char letrainicial = nome.at(0);
    maiuscula = toupper(nome[0]);
    if (letrainicial != maiuscula || nome.length() < 5 || nome.length() > 30)
        throw invalid_argument("Argumento invalido.");
}
void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}

// Numero
void Numero::validar(string numero){
    int valorverificador = 0;                                           // armazena digito verificador verdadeiro
    int multiplicador = 5;
    int numeroverificador = 0;                                          // armazena digito verificador recebido
    string valor;
    for(int i = 0; i < 4; i++){                                         // 4 é a quantidade de dígitos sem contar o verificador
        valor = numero.at(i);
        valorverificador += (stoi(valor) * (multiplicador - i ));       // o primeiro digito é multiplicado por 5, o segundo por 4 ...
    }
    valorverificador = (valorverificador % 11);                         // O valor obtido é dividio por 11
    valorverificador = (11 - valorverificador);                         // é tirado de 11 o resto da divisão anterior, e encontrado o digito verificador verdadeiro
    valor = numero.at(5);
    numeroverificador = stoi(valor);
    if (numeroverificador != valorverificador)
        throw invalid_argument("Argumento invalido.");
}
void Numero::setNumero(string numero){
    validar(numero);
    this->numero = numero;
}

// Prazo
void Prazo::validar(int prazo){
    if (prazo == LIMITE[0] || prazo == LIMITE[1] ||
        prazo == LIMITE[2] || prazo == LIMITE[3] ||
        prazo == LIMITE[4] || prazo == LIMITE[5] ||
        prazo == LIMITE[6] || prazo == LIMITE[7] ||
        prazo == LIMITE[8] || prazo == LIMITE[9] ||
        prazo == LIMITE[10] || prazo == LIMITE[11]){
    }else
        throw invalid_argument("Argumento invalido.");
}
void Prazo::setPrazo(int prazo){
    validar(prazo);
    this->prazo = prazo;
}

// Senha
void Senha::validar(string senha){
    string valor[6];
    int repetido = 0;
    for(int i = 0; i < senha.length(); i++){
        valor[i] = senha.at(i);
        if(i != 0){
            for(int j = (i-1); j >= 0; j--){
                if (valor[i] == valor[j])
                    repetido++;
            }
        }
    }

    if (repetido)
        throw invalid_argument("Argumento invalido.");
}
void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}

// Taxa
void Taxa::validar(int taxa){
    if (taxa < LIMITEMINIMO || taxa > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void Taxa::setTaxa(int taxa){
    validar(taxa);
    this->taxa = taxa;
}

// ValorAplicacao
void ValorAplicacao::validar(int valorAplicacao){
    if (valorAplicacao < LIMITEMINIMO || valorAplicacao > LIMITEMAXIMO)
        throw invalid_argument("Argumento invalido.");
}
void ValorAplicacao::setValorAplicacao(int valorAplicacao){
    validar(valorAplicacao);
    this->valorAplicacao = valorAplicacao;
}

// ValorMinimo
void ValorMinimo::validar(int valorMinimo){
    if (valorMinimo == LIMITE[0] || valorMinimo == LIMITE[1] ||
        valorMinimo == LIMITE[2] || valorMinimo == LIMITE[3]){
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}
void ValorMinimo::setValorMinimo(int valorMinimo){
    validar(valorMinimo);
    this->valorMinimo = valorMinimo;
}
