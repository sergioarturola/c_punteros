#include<stdio.h>
using namespace std;

int main(){

  //asi como otros tipos de datos, los punteros se pueden convertir de un
  //tipo de dato a otro realizando un moldeo

  int a = 1025;
  int* p;
  char* p0; //puntero del tipo char
  p = &a; //p apuntando a la direccion de "a"

  printf("Direccion de p: %d Valor de p: %d",p, *p );
  
  //haciendo un moldeo
  p0 = (char*)p;
  printf("Direccion de p0: %d Valor de p0: %d", p0, *p0);

  }
