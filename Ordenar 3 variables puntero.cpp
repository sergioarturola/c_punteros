/*
Pedir 3 numeros de teclado, usando una funcion que pase valores por referencia ordenar
de menor a mayor los numeros, use las estructuras de datos que crea conveniente
*/

#include<iostream>
using namespace std;

void ordenarNumeros(int *a, int *b, int *c){

    const int taman = 3;
    int numeros [taman];
    int aux = 0;

    numeros[0] = *a;
    numeros[1] = *b;
    numeros[2] = *c;

    for(int i = 0; i <taman-1; i++){
            for(int j = i+1; j<taman; j++){
            if(numeros[i]> numeros[j]){
            aux = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = aux;

            }
        }
    }

    cout<<"- - Numeros ordenados - -"<<endl;
    for(int i = 0; i<taman; i++){
        cout<<numeros[i]<<" ";
    }

}

int main(){

    int a, b, c;
    cout<<"Ingresa valor a: "; cin>>a;
    cout<<"Ingresa valor b: "; cin>>b;
    cout<<"Ingresa valor c: "; cin>>c;
    ordenarNumeros(&a, &b, &c);


}









