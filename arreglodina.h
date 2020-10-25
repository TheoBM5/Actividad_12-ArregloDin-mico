#ifndef ARREGLODINA_H
#define ARREGLODINA_H

#include <iostream>
#include <string>
using namespace std;


class Arreglo_D{

private:
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

public:
    Arreglo_D();
    ~Arreglo_D();
    void insertar_final(const string &s );
    void insertar_inicio(const string &s);
    size_t size();
    string operator[](size_t p)
    {
        return arreglo[p];
    }

private:
    void expandir();
};


#endif
