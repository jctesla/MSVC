#include <stdlib.h>
#include <string>
#include "./mitipos.h"
#include<cstring>

//structs
Persona p;


int main(){
  //lleno datos al structs
  p.edad=40;
  p.sexo='m';

  char* pp;                                   // cadena de char*
  string mistr;
  
  mistr= "Juan Carlos";                       // convierto un string a una cadena de char*
  pp = strcpy( p.nombre,mistr.c_str() );
  
  mistr = "Dergan Febres";
  pp = strcpy( p.Apellido,mistr.c_str() );

  // print resultados
  //printf((struct Persona)malloc(sizeof(struct Persona)));
  printf("indice p.edad= %d \n",p.edad);
  printf("indice p.sexo= %c \n",p.sexo);
  printf("indice p.nombre= %s \n",p.nombre);
  printf("indice p.Apellido= %s \n",p.Apellido);
  
}

/*
  indice p.edad= 40
  indice p.sexo= m
  indice p.nombre= Juan Carlos
  indice p.Apellido= Dergan Febres
*/