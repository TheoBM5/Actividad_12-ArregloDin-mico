#include "arreglodina.h"
using namespace std;

Arreglo_D::Arreglo_D()
{
    arreglo = new string[MAX];
    cont=0;
    tam = MAX;
}

Arreglo_D::~Arreglo_D()
{
    delete[] arreglo;
}

void Arreglo_D::insertar_inicio(const string &s)
{
    if(cont == tam){
        expandir();
    }
    for(size_t i = cont; i > 0; i--)
    {
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0]=s;
    cont++;

}

void Arreglo_D::insertar_final(const string &s)
{
    if(cont == tam){
        expandir();
    }
    
    arreglo[cont]=s;
    cont++;
}


size_t Arreglo_D::size()
{
    return cont;
}


void Arreglo_D::expandir()
{
    string *nuevo = new string[tam+MAX];

    for (size_t i = 0; i<cont; i++){
        nuevo[i]= arreglo[i];
    }
    delete[] arreglo;
    arreglo=nuevo;
    tam=tam+MAX;
}

