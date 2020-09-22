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

#endif // DOMINIOS_H_INCLUDED
