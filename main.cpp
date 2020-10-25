
#include <iostream>
#include "arreglodina.h"
using namespace std;

int main(){
    Arreglo_D arreglo;
    string op;
    string cadena;
    while(true){
        cout<<"\n1.- Insertar al inicio"<<endl;
        cout<<"2.- Insertar al final"<<endl;
        cout<<"3.- imprimir"<<endl;
        cout<<"4.- Tamano del arreglo"<<endl;
        cout<<"0.- Salir"<<endl;
        cout<<"Ingresar: "<<endl;
        
        getline(cin, op);
        if(op =="1"){
            cout<<"Ingrese 'no' para dejar de ingresar datos"<<endl;
            do{
                cin>>cadena;
                if(cadena!="no"){
                    arreglo.insertar_inicio(cadena);
                }
            }while(cadena != "no");
            cin.ignore();    
        }
        else if(op =="2"){
            cout<<"Ingrese 'no' para dejar de ingresar datos"<<endl;
            do{        
            cin>>cadena;
            if(cadena!="no"){
                arreglo.insertar_final(cadena);
            }
            }while(cadena != "no");
            cin.ignore();
        }
        else if(op=="3"){ 
            for (size_t i = 0; i < arreglo.size(); i++)
                    {
                        cout << arreglo[i] << " ";
                    }        
        }
        else if(op=="4"){
            cout<<"El tamano del arreglo es: "<<arreglo.size();
        }

        else if(op =="0"){    
            break;
        }
        
    }    
    return 0;
}

