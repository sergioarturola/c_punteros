/*
Realizar un programa en C++ donde se pidan 2 numeros enteros por teclado (validar que no sean igualels)
posteriormente preguntar si se desea el intercambio por paso de referencia o valor, finalmente mostrar
los valores antes y despues de llamar a la funcion
*/

#include<iostream>
using namespace std;

void intercambioValor(int, int);
void intercambioReferencia(int*, int*);

int main(){


    int op, a = 0, b = 0, encendido = 1;

    while(encendido){
        cout<<"- - Intercambio de valores - -"<<endl;
        cout<<"Ingtresa a: "; cin>>a;
        cout<<"Ingresa b: "; cin>>b;

        if(a == b){
            cout<<"No pueden ser valores iguales"<<endl;
        }
        else{


        cout<<"1- xValor | 2 xReferencia | 3 Salir"<<endl;
        cout<<"Opcion: "; cin>>op;

        switch(op){

        case 1:
            cout<<"**********************************************"<<endl;
            cout<<"Antes de la funcion( a = "<<a<<" b = "<<b<< ")"<<endl;
            intercambioValor(a, b);
            cout<<"Despues de la funcion( a = "<<a<<" b = "<<b<< ")"<<endl;
            cout<<"**********************************************"<<endl;
            break;

        case 2:
            cout<<"**********************************************"<<endl;
            cout<<"Antes de la funcion( a = "<<a<<" b = "<<b<< ")"<<endl;
            intercambioReferencia(&a, &b);
            cout<<"Despues de la funcion( a = "<<a<<" b = "<<b<< ")"<<endl;
            cout<<"**********************************************"<<endl;
            break;

        case 3:
            encendido = 0;
            break;

        default:
            cout<<"** Opcion no valida **"<<endl;
            break;
          }

       }
    }

    return 0;
}


void intercambioValor(int a, int b){

    int temp = 0;

    temp = a;
    a = b;
    b = temp;

    cout<<"Intercambio xValor"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    cout<<"-------------------"<<endl;

}

void intercambioReferencia(int *a, int *b){

    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;

    cout<<"Intercambio xReferencia"<<endl;
    cout<<"a: "<<*a<<" b: "<<*b<<endl;
    cout<<"-------------------"<<endl;

}
