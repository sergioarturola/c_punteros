/*
Utilizando punteros, arreglos y funciones escribir un programa que lea dos secuencias de
caracteres alfabeticos, despues pedir 1 numero. El programa debe de insertar la segunda
secuencia a partir del caracter de la primera secuencia que esta en la posicion indicada
luego debera imprimir la cadena. Ejemplo:
-cadena1 = marea
-cadena2 = sol
-numero  = 2
  m a s o l r e a
  0 1 2 3 4 5 6 7
*/
#include<iostream>
using namespace std;

int tamanChar(char *cadena);
void intercalarChar(char *cad1, char *cad2, int pos, int tamanTotal);


int main(){

   char cadena1[50];
   char cadena2[50];
   int numero;

   cout<<"Cadena1 = "; cin>>cadena1;
   cout<<"Cadena2 = "; cin>>cadena2;
   cout<<"Ingrese un numero = "; cin>>numero;

   int tamanCad1 = tamanChar(cadena1);
   int tamanCad2 = tamanChar(cadena2);
   int total = tamanCad1 + tamanCad2;

    if(numero> tamanCad1){
        cout<<"Posicion invalida"<<endl;
    }
    else{
        cout<<"- - -Intercalando Palabra - - -"<<endl;
        intercalarChar(cadena1, cadena2, numero, total);

    }

   return 0;
}


int tamanChar(char *cadena){

    char *pos = cadena;
    int contador = 0;
    while(*pos != '\0'){
        contador++;
        pos++;
    }

    return contador;
}


void intercalarChar(char *cad1, char *cad2, int pos, int tamanTotal){

    char palabraIntercalada[tamanTotal];
    int i = 0;
    int k = 0;
    int j = 0;
    int contador = 0;
    char *ptrcad2 = cad2;
    //intercalando
    while(contador<tamanTotal){



        if(i == pos){
            while(*ptrcad2 != '\0'){
                palabraIntercalada[i] = cad2[k];
                i++;
                k++;
                ptrcad2++;
                contador++;
            }
        }

        palabraIntercalada[i] = cad1[j];
        j++;
        i++;
        contador++;
    }

    //imprimiendo la palabra con ayuda del array
    for(int j = 0; j<tamanTotal; j++){
        cout<<palabraIntercalada[j]<<" ";
    }
}



